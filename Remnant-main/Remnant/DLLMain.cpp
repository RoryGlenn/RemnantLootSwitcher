
#include <iostream>
#include <string>
#include <vector>
#include <optional>
#include <map>

#include "pch.h"
#include "Keybinds.h"
#include "includes.h"

#include "ConfigFile.h"

// prototypes

void SetupKeybinds();
void OnImGuiLoadUp();


// kiero hooking stuff
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

static UFT::ARemnant_PlayerController_C* MyPlayerController = nullptr;

//std::vector<float> Yp{};

// Typedef to make hooking ProcessEvent and PostRender easier
typedef void(*tProcessEvent)(UFT::UObject*, UFT::UFunction*, void*);
tProcessEvent Real_ProcessEvent = nullptr;

typedef void(*tPostRender)(UFT::UGameViewportClient*, UFT::UCanvas*);
tPostRender Real_PostRender = nullptr;

ConfigFile configurationFile;

int currentIndex = -1;

bool bOnImGuiLoadUp				= false;
bool bInit						= false;
bool bInventoryScanned			= false;
bool bEquip						= false;
bool EditKeyState				= false;
bool resetinventorycomponents	= true;
bool bShowImGui					= true;

std::string current_item = "";
//std::optional<bool> SwitchLoadout;

// a global variable for storing the players inventory
UFT::TArray<UFT::FInventoryItem> INVItems;

std::vector<std::string> itemFullName;

std::vector<std::string> vecStrHandGuns;
std::vector<std::string> vecStrLongGuns;
std::vector<std::string> vecStrMelees;
std::vector<std::string> vecStrArmorHead;
std::vector<std::string> vecStrArmorBody;
std::vector<std::string> vecStrArmorLegs;
std::vector<std::string> vecStrAmulet;
std::vector<std::string> vecStrRings;


std::vector<std::string> handGunStr
{
	"RepeaterPistol",  "Magnum",
	"Defiler",         "HuntingPistol",
	"Submachinegun",   "HiveCannon",
	"Spitfire",        "CurseOfTheJungleGod",
	"PrideOfTheIskal", "MachinePistol",
	"SawedOffShotgun", "MiniCrossbow"
};

// there is some weapons in here that could be misspelled.
// MAKE SURE TO DOUBLE CHECK THEM BY GETTING THE WEAPON AND PRINTING OUT THE NAME
std::vector<std::string> longGunStr
{
	"HuntingRifle",     "CoachGun",
	"Weapon_Shotgun_C", "AssaultRifle",
	"BeamRifle",        "Devastator",
	"SniperRifle",      "Sporebloom",
	"Swamp_Crossbow",   "Ruin",
	"EyeOfTheStorm",    "ParticleAccelerator",
	"Repulsor",		    "TypeWriter",
	"Ricochet",         "Alternator",
	"Fusion"
};

std::vector<std::string> meleeStr
{
	"ScrapSword",         "ScrapHammer",
	"ScrapHatchet",       "BladeOfAdventure",
	"Petrified",		  "WasteLander",
	"Scythe",			  "WorldBreaker",
	"Riven",			  "Spear",
	"ScarOfTheJungleGod", "Smolder",
	"VoiceOfTheTempest",  "ButchersFlail",
	"GuardianAxe",		  "LostHarpoon",
	"Hero",				  "Chain",
	"WorldsEdge",		  "Frostborne"
};

std::vector<std::string> armorHeadStr = { "Armor_Head" };
std::vector<std::string> armorBodyStr = { "Armor_Body" };
std::vector<std::string> armorLegsStr = { "Armor_Legs" };

std::vector<std::string> amuletStr
{
	"AbrasiveAmulet",		  "AmuletofEpicaricacy",
	"BlackRose",			  "BlessedNecklace",
	"BrutalMark",			  "ButchersFetish",
	"CharcoalNecklace",		  "CleansingJewel",
	"DaredevilsCharm",		  "Driftstone",
	"GalenicCharm",			  "GunslingersCharm",
	"HangmansMemento",		  "HeartOfDarkness",
	"LetosAmulet",			  "MendersCharm",
	"NightmareSpiral",		  "OnyxPendulum",
	"PocketWatch",			  "PolishedWhetstone",
	"RadioactiveEmber",		  "RazorwireNecklace",
	"RockOfAnguish",		  "RustedAmulet",
	"ScavengersBauble",		  "ShatteredVertebrae",
	"SoulAnchor",			  "StalkersBrand",
	"StormAmulet",			  "TalismanOfAnimosity",
	"TalismanOfPerseverance", "TerrorMargin",
	"TwistedIdol",			  "VengeanceIdol",
	"VulcansDetonator",		  "WhiteRose"
};

std::vector<std::string> ringStr
{
	"AggressorsBane",		"AkariWarBand",
	"AlchemistsJewel",		"AmberMoonstone",
	"BackbreakerRing",		"BandOfAccord",
	"BandOfCastor",			"BandOfDiscord",
	"BandOfPollux",			"BandOfStrength",
	"BlackCatBand",			"BloodFont",
	"BloodlettersInsignia", "BraidedThorns",
	"BrightSteelRing",	    "BurdenOfTheDevoted",
	"BurdenOfTheFollower",  "BurdenOfTheGambler",
	"BurdenOfTheReckless",  "BurdenOfTheWarlord",
	"CelerityStone",		"CompulsionLoop",
	"DeceiversBand",		"DevouringLoop",
	"EmpoweringLoop",		"EvokersSeal",
	"EzlansBand",			"FiveFingeredRing",
	"GiftOfTheIskal",		"GravityStone",
	"GrimCoil",				"GuardiansRing",
	"GunslingersRing",		"HeartOfTheWolf",
	"Heartseeker",			"HerosRing",
	"HuntersBand",			"HuntersHalo",
	"IskalHunterBand",		"JewelOfTheBlackSun",
	"JuggernautBand",		"KeepersRing",
	"LeechEmber",			"LoopOfProsperity",
	"MothersRing",			"PearlOfLuminescence",
	"PillarOfStone",		"PrismaticDiamondRing",
	"ProvisionerRing",		"Razorstone",
	"RestrictionCord",		"RingOfElusion",
	"RingOfEvasion",		"RingOfFlawlessBeauty",
	"RingOfHonor",			"RingOfShadows",
	"RingOfSupremacy",		"RingOfSynergy",
	"RingOfTheAdmiral",		"RingOfTheMantis",
	"RingOfThePunisher",	"RingOfTheUnclean",
	"RootCirclet",			"Sagestone",
	"ScavengerRing",		"SerpentsFang",
	"SoulEmber",			"SoulLink",
	"SpiritStone",			"StockpileCirclet",
	"StoneOfBalance",		"SwashbucklersSignet",
	"VanguardRing",			"VolatileGem",
};


std::map<int, std::string> KeyMap = {
	{112, "F1"},
	{113, "F2"},
	{114, "F3"},
	{115, "F4"},
	{116, "F5"},
	{117, "F6"},
	{118, "F7"},
	{119, "F8"},
	{120, "F9"},
	{122, "F11"},
	{96, "NP_0"},
	{97, "NP_1"},
	{98, "NP_2"},
	{99, "NP_3"},
	{100, "NP_4"},
	{101, "NP_5"},
	{102, "NP_6"},
	{103, "NP_7"},
	{104, "NP_8"},
	{105, "NP_9"},
	{109, "NP_-"},
	{107, "NP_+"},
	{110, "NP_Del"},
	{48, "0"},
	{49, "1"},
	{50, "2"},
	{51, "3"},
	{52, "4"},
	{53, "5"},
	{54, "6"},
	{55, "7"},
	{56, "8"},
	{57, "9"},
	{65, "A"},
	{66, "B"},
	{67, "C"},
	{68, "D"},
	{69, "E"},
	{70, "F"},
	{71, "G"},
	{72, "H"},
	{73, "I"},
	{74, "J"},
	{75, "K"},
	{76, "L"},
	{77, "M"},
	{78, "N"},
	{79, "O"},
	{80, "P"},
	{81, "Q"},
	{82, "R"},
	{83, "S"},
	{84, "T"},
	{85, "U"},
	{86, "V"},
	{87, "W"},
	{88, "X"},
	{89, "Y"},
	{90, "Z"}
};

std::vector<TypeLoadOut> CurrentLoadOutsInIMGUI = 
{
	// initializes the variables with an empty string

	{
		"New Loadout",	// loadOutName
		"",				// handgun
		"",				// LongGun
		"",				// Melee
		"",				// Helmet
		"",				// Chest
		"",				// Legs
		"",				// Amulet
		"",				// Ring1
		"",				// Ring2
		"UnBound",      // keyText
		0,				// KeyV
		false
	}
};

void PrintPlayerObjects()
{
	printf("Base:		  0x%p\n", GetModuleHandleW(nullptr));
	printf("UObjects:	  0x%p\n", UFT::UObject::GObjects);
	printf("GNames:		  0x%p\n", UFT::FName::GNames);
	printf("ProcessEvent: 0x%p\n", Real_ProcessEvent);
	printf("PostRender:	  0x%p\n", Real_PostRender);
}

void OnImGuiLoadUp()
{
	// load the configuration file upon ImGui Startup
	if (!bOnImGuiLoadUp)
	{
		auto filePath = R"(C:\Users\Rory Glenn\Desktop\LootSwitcher\Remnant-main\Remnant\ApplesConfigFile.cfg)";
		int numOfLoadOuts = configurationFile.ReadFile(filePath, &CurrentLoadOutsInIMGUI);

		if(numOfLoadOuts != 0)
		{
			configurationFile.SetGlobalLoadOutIndex(0);
			configurationFile.SetNumLoadOuts(numOfLoadOuts);
		}

		bOnImGuiLoadUp = true;

		SetupKeybinds();
		std::cout << "Loaded Complete!" << std::endl;

	}

}

// H_ denotes a helper function
void H_FindSpecialCaseStringInInventory(int startIndex, int endIndex, std::string replace, std::string* itemName)
{
	std::size_t foundSpecialCaseRoot = itemName->find(replace);
	if (foundSpecialCaseRoot != std::string::npos)
	{
		itemName->replace(startIndex, endIndex, "");
	}
}

void FindStringInInventory(std::vector<std::string> itemCategory, std::string itemName, std::vector<std::string>* vecStrOfItems, std::string replace)
{
	for (int i = 0; i < itemCategory.size(); i++)
	{
		std::size_t foundItem = itemName.find(itemCategory[i]);
		if (foundItem != std::string::npos)
		{
			itemName.replace(0, replace.length(), "");		// replaces the "Weapon", "Armor_Head", "Armor_Body", "Armor_Legs", "Trinket_", etc in the beginning
			itemName.replace(itemName.length() - 2, 2, ""); // gets rid of the _C at the end

			// special cases
			H_FindSpecialCaseStringInInventory(0, 5,  "Root_",		 &itemName);
			H_FindSpecialCaseStringInInventory(0, 6,  "Swamp_",		 &itemName);
			H_FindSpecialCaseStringInInventory(0, 10, "Wasteland_",  &itemName);
			H_FindSpecialCaseStringInInventory(0, 4,  "Pan_",		 &itemName);
			H_FindSpecialCaseStringInInventory(0, 6,  "Atoll_",		 &itemName);
			H_FindSpecialCaseStringInInventory(0, 6,  "Rural_",		 &itemName);
			H_FindSpecialCaseStringInInventory(0, 5,  "Snow_",		 &itemName);
			H_FindSpecialCaseStringInInventory(0, 4,  "abus",		 &itemName);
			
			// we have an 2 extra preorder sets that don't really exist in our inventory so lets remove them from the list
			if(strcmp( itemName.c_str(), "Cultist_PreOrder")  != 0 && 
				strcmp(itemName.c_str(), "Scrapper_PreOrder") != 0 && 
				strcmp(itemName.c_str(), "Hunter_PreOrder")   != 0)
			{
				vecStrOfItems->push_back(itemName);
			}
		}
	}
	
	// sort the vector alphabetically
	std::sort(vecStrOfItems->begin(), vecStrOfItems->end());
}


void CreateImGuiComboBox(const char* label, std::string* currentItem, std::vector<std::string> vecStringOfItems)
{

	if (ImGui::BeginCombo(label, (*currentItem).c_str()))
	{
		for (int n = 0; n < vecStringOfItems.size(); n++)
		{
			std::string item = vecStringOfItems[n];

			bool is_selected = (*currentItem == item);

			if (ImGui::Selectable(item.c_str(), is_selected))
			{
				*currentItem = item;
				if (is_selected)
					ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
			}
		}
		ImGui::EndCombo();
	}
}

UFT::ACharacter_Master_Player_C* GetMyPlayer()
{
	if (MyPlayerController && MyPlayerController->K2_GetPawn() && MyPlayerController->K2_GetPawn()->IsA(UFT::ACharacter_Master_Player_C::StaticClass()))
	{
		return (UFT::ACharacter_Master_Player_C*)MyPlayerController->K2_GetPawn();
	}
	return nullptr;
}


void InitPlayerInventory()
{
	if(MyPlayerController)
	{
		std::cout << "InitPlayerInventory()" << std::endl;
		//INVItems = GetMyPlayer()->Inventory->Items;
		INVItems = MyPlayerController->GetPlayerInventory()->Items;
		std::cout << "Init Player Inv complete!" << std::endl;
	}
}

// new
void EquipInventoryItem(std::string currentItemStr, int slotIndex, std::string strToAdd)
{
	if (currentItemStr.length() < 2)
	{
		return;
	}

	std::string combined = strToAdd + currentItemStr;

	if (GetMyPlayer())
	{
		for (int i = 0; i < INVItems.Num(); i++)
		{
			std::size_t FoundItem = GetKismetSystemLibrary().STATIC_GetClassDisplayName(INVItems[i].ItemBP).ToString().find(combined);
			if (FoundItem != std::string::npos)
			{
				std::string itemName = GetKismetSystemLibrary().STATIC_GetClassDisplayName(GetMyPlayer()->Inventory->Items[i].ItemBP).ToString();
				// Weapon_Fist_C, Armor_Body_Nude_C, Armor_Legs_Nude_C is considered an item even though nothing is in the slot
				// if weapon_fists slot index is -1 then it is not equipped
				
				// if it is not -1 then it is currently equipped in a slot, if it is -1 then it is not equipped
				if(GetMyPlayer()->Inventory->Items[i].EquipmentSlotIndex != -1 && 
					itemName != "Weapon_Fist_C" && itemName != "Armor_Body_Nude_C" && itemName != "Armor_Legs_Nude_C")
				{
					MyPlayerController->GetPlayerInventory()->UnequipItemAtSlotIndex(slotIndex);
					//GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(slotIndex);
				}
				MyPlayerController->GetPlayerInventory()->EquipItem(INVItems[i].ItemBP, slotIndex);
				//MyPlayerController->GetPlayerInventory()->AutoEquipItem(INVItems[i].ItemBP, true);
			}
		}
	}
}

// old
void EquipInventoryItem(std::string currentItemStr, int slotIndex)
{
	if (currentItemStr.length() < 2)
	{
		return;
	}
		
	if (GetMyPlayer())
	{

		/*
			0: HandGun
			1: LongGun
			2: MeleeWeapon
			3: Flashlight
			4: Helmet
			5: Body
			6: DragonHeart
			7: UtilityItem: Useable1
			8: Trinket1
			9: Trinket2
			10: SpecialGun
			11: Legs
			12: Consumable
			13: Amulet
		*/

		for (int i = 0; i < INVItems.Num(); i++)
		{
			std::size_t FoundItem = GetKismetSystemLibrary().STATIC_GetClassDisplayName(INVItems[i].ItemBP).ToString().find(currentItemStr);
			if (FoundItem != std::string::npos)
			{
				std::string itemName = GetKismetSystemLibrary().STATIC_GetClassDisplayName(GetMyPlayer()->Inventory->Items[i].ItemBP).ToString();
				// if it is not -1 then it is currently equipped in a slot, if it is -1 then it is not equipped
				if (GetMyPlayer()->Inventory->Items[i].EquipmentSlotIndex != -1 &&
					itemName != "Weapon_Fist_C" && 
					itemName != "Armor_Body_Nude_C" && 
					itemName != "Armor_Legs_Nude_C")
				{
					MyPlayerController->GetPlayerInventory()->UnequipItemAtSlotIndex(slotIndex);
				}
				MyPlayerController->GetPlayerInventory()->EquipItem(INVItems[i].ItemBP, slotIndex);
				//MyPlayerController->GetPlayerInventory()->AutoEquipItem(INVItems[i].ItemBP, true);

			}
		}
		
	}
}


void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}


LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}


HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{	
	// kiero hook
	if (!bInit)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			bInit = true;
		}
		else
		{
			return oPresent(pSwapChain, SyncInterval, Flags);
		}
	}

	// Check if the insert key pressed
	if(GetAsyncKeyState(VK_INSERT) & 1)
	{
		bShowImGui = !bShowImGui;
	}

	// show or hide the ImGui window with the insert key
	if (bShowImGui)
	{
		bool bOpen = true;
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		OnImGuiLoadUp();

		//ImGui::ShowDemoWindow();

		ImGui::SetNextWindowSize(ImVec2(500, 440), ImGuiCond_FirstUseEver);

		// create the imgui interface
		if (ImGui::Begin("Remnant Loot Switcher", &bOpen, ImGuiWindowFlags_MenuBar))
		{
			if (ImGui::BeginMenuBar())
			{
				if (ImGui::BeginMenu("File"))
				{
					if (ImGui::MenuItem("Open..", "Ctrl+O"))
					{
						// open a file browser???

						auto filePath = R"(C:\Users\Rory Glenn\Desktop\LootSwitcher\Remnant-main\Remnant\ApplesConfigFile.cfg)";
						int numOfLoadOuts = configurationFile.ReadFile(filePath, &CurrentLoadOutsInIMGUI);
						configurationFile.SetGlobalLoadOutIndex(0);
						configurationFile.SetNumLoadOuts(numOfLoadOuts);

						std::cout << "Loaded Complete!" << std::endl;
					}

					//if (ImGui::MenuItem("Save",   "Ctrl+S")) { /* Do stuff */ }

					if (ImGui::MenuItem("Close", "Ctrl+W"))
					{
						bOpen = false;
						bShowImGui = false;
					}

					// create a new load out
					if (ImGui::MenuItem("New Loadout", "Ctrl+N"))
					{
						std::cout << "Creating new loadout..." << std::endl;
						configurationFile.SetNumLoadOuts(configurationFile.GetNumLoadOuts() + 1);

						CurrentLoadOutsInIMGUI.push_back(
							{
								"New Loadout",	// loadOutName
								"",				// handgun
								"",				// LongGun
								"",				// Melee
								"",				// Helmet
								"",				// Chest
								"",				// Legs
								"",				// Amulet
								"",				// Ring1
								"",				// Ring2
								"UnBound",		// KeyText
								0,				// KeyV
								false			// switches widgets on double click
							});

						std::cout << "Created!" << std::endl;

					}

					if (ImGui::MenuItem("Delete Loadout", "Ctrl+Delete"))
					{
						// don't delete if there are no loadouts
						if (configurationFile.GetNumLoadOuts() > 0)
						{
							// makes sure that a specific loadout is selected before we delete
							if (currentIndex < configurationFile.GetNumLoadOuts() && currentIndex >= 0)
							{
								std::cout << "Deleting loadout..." << std::endl;
								CurrentLoadOutsInIMGUI.erase(CurrentLoadOutsInIMGUI.begin() + currentIndex);

								if (currentIndex > 0)
								{
									configurationFile.SetGlobalLoadOutIndex(currentIndex - 1);
								}
								else
								{
									configurationFile.SetGlobalLoadOutIndex(currentIndex);
								}

								configurationFile.SetNumLoadOuts(configurationFile.GetNumLoadOuts() - 1);
								SetupKeybinds();

								std::cout << "Deleted!" << std::endl;
							}
							else
							{
								std::cout << "Did not delete" << std::endl;
							}

						}

					}

					ImGui::EndMenu();

				}
				ImGui::EndMenuBar();
			}

			// create all the loadout tabs
			static bool selected = false;
			{
				ImGui::BeginChild("left pane", ImVec2(150, 0), true);

				for (int i = 0; i < configurationFile.GetNumLoadOuts(); i++)
				{

					std::string CurrentNameBuffer = CurrentLoadOutsInIMGUI[i].loadOutName;

					// when we have double clicked and are editing the name
					if (!CurrentLoadOutsInIMGUI[i].textEdit)
					{

						ImGui::LabelText((std::string("##L") + std::to_string(i)).c_str(), (char*)CurrentNameBuffer.c_str());
						if (ImGui::IsItemHovered() && ImGui::IsMouseDoubleClicked(0))
						{
							printf("current index: %d\n", i);
							currentIndex = i;

							// sets one text edit true at a time while setting the others to false
							CurrentLoadOutsInIMGUI[i].textEdit = true;
							for (int j = 0; j < CurrentLoadOutsInIMGUI.size(); j++)
							{
								if (j != i)
								{
									CurrentLoadOutsInIMGUI[j].textEdit = false;
								}
							}
						}

					}
					else
					{
						ImGui::PushItemWidth(130.0f);
						ImGui::InputText((std::string("##T") + std::to_string(i)).c_str(), (char*)CurrentNameBuffer.c_str(), 128);
						ImGui::PopItemWidth();

						if (GetAsyncKeyState(VK_RETURN) & WM_KEYUP)
						{
							CurrentLoadOutsInIMGUI[i].loadOutName = (char*)CurrentNameBuffer.c_str();
							CurrentLoadOutsInIMGUI[i].textEdit = false;
						}
					}
					if (ImGui::IsItemHovered() && ImGui::IsMouseDoubleClicked(0))
					{
						configurationFile.SetGlobalLoadOutIndex(i);
					}
				}
				ImGui::EndChild();
			}
			ImGui::SameLine();

			// right
			ImGui::BeginGroup();
			ImGui::BeginChild("item view", ImVec2(0, -ImGui::GetFrameHeightWithSpacing())); // Leave room for 1 line below us
			ImGui::Text("Loadout: %d", selected);
			ImGui::Separator();

			// parse through inventory and organize it into the 9 different slot categories
			if (MyPlayerController && resetinventorycomponents)
			{
				//auto INVitems = GetMyPlayer()->Inventory->Items;
				InitPlayerInventory();

				for (int i = 0; i < INVItems.Num(); i++)
				{
					std::string Item_Name = GetKismetSystemLibrary().STATIC_GetClassDisplayName(INVItems[i].ItemBP).ToString();

					FindStringInInventory(handGunStr, Item_Name, &vecStrHandGuns, "Weapon_");
					FindStringInInventory(longGunStr, Item_Name, &vecStrLongGuns, "Weapon_");
					FindStringInInventory(meleeStr, Item_Name, &vecStrMelees, "Weapon_");
					FindStringInInventory(armorHeadStr, Item_Name, &vecStrArmorHead, "Armor_Head_");
					FindStringInInventory(armorBodyStr, Item_Name, &vecStrArmorBody, "Armor_Body_");
					FindStringInInventory(armorLegsStr, Item_Name, &vecStrArmorLegs, "Armor_Legs_");
					FindStringInInventory(amuletStr, Item_Name, &vecStrAmulet, "Trinket_");
					FindStringInInventory(ringStr, Item_Name, &vecStrRings, "Trinket_");
				}

				resetinventorycomponents = false;
			}

			//std::cout << "Global Loadout index: " << configurationFile.GetGlobalLoadOutIndex() << std::endl;

			// create combo-boxs and show currently equipped items
			CreateImGuiComboBox(" HandGuns", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].handgun, vecStrHandGuns);
			CreateImGuiComboBox(" LongGuns", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].LongGun, vecStrLongGuns);
			CreateImGuiComboBox(" Melees", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].Melee, vecStrMelees);
			CreateImGuiComboBox(" Helmets", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].Helmet, vecStrArmorHead);
			CreateImGuiComboBox(" Chests", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].Chest, vecStrArmorBody);
			CreateImGuiComboBox(" Legs", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].Legs, vecStrArmorLegs);
			CreateImGuiComboBox(" Amulet", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].Amulet, vecStrAmulet);
			CreateImGuiComboBox(" Ring 1", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].Ring1, vecStrRings);
			CreateImGuiComboBox(" Ring 2", &CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].Ring2, vecStrRings);

			ImGui::EndChild();


			if (ImGui::Button("Save"))
			{
				std::cout << "\nSaving File..." << std::endl;
				auto conFile = R"(C:\Users\Rory Glenn\Desktop\LootSwitcher\Remnant-main\Remnant\ApplesConfigFile.cfg)";
				configurationFile.WriteFile(conFile, configurationFile.GetNumLoadOuts(), CurrentLoadOutsInIMGUI);
				std::cout << "Saved!" << std::endl;
			}
			ImGui::SameLine();

			if (ImGui::Button("Reset Inventory Items", ImVec2(200, 20)))
			{
				itemFullName.clear();
				vecStrHandGuns.clear();
				vecStrLongGuns.clear();
				vecStrMelees.clear();
				vecStrArmorHead.clear();
				vecStrArmorBody.clear();
				vecStrArmorLegs.clear();
				vecStrAmulet.clear();
				vecStrRings.clear();
				resetinventorycomponents = true;
			}
			ImGui::SameLine();

			//if (ImGui::Button("Equip Now"))
			//{
			//	SwitchLoadout = true;
			//}
			ImGui::SameLine();


			std::string KName;

			// create hotkey button
			if (EditKeyState)
			{
				KName = "PressKey";
				for (auto& KV : KeyMap)
				{
					if (GetAsyncKeyState(KV.first) & WM_KEYUP)
					{
						for (int i = 0; i < CurrentLoadOutsInIMGUI.size(); i++)
						{
							if (CurrentLoadOutsInIMGUI[i].KeyV == KV.first)
								goto HERE;
						}
						CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].keyText = KV.second;
						CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].KeyV = KV.first;

						//also call this everytime you read a file and delete a loadout
						SetupKeybinds();

					HERE:
						EditKeyState = false;

					}
				}
			}
			else
			{
				KName = CurrentLoadOutsInIMGUI[configurationFile.GetGlobalLoadOutIndex()].keyText;
			}

			if (ImGui::Button(KName.c_str()))
			{
				if (!EditKeyState)
					EditKeyState = true;
			}
			ImGui::SameLine();
			ImGui::LabelText("DumbLabel", ":Bind");
			ImGui::EndGroup();
		}

		ImGui::End();
		ImGui::Render();

		pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	}

	return oPresent(pSwapChain, SyncInterval, Flags);
}

void UnequipEverything()
{
	if (GetMyPlayer())
	{
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(0);
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(1);
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(2);
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(4);
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(5);
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(8);
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(9);
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(11);
		GetMyPlayer()->GetCharacterInventory()->UnequipItemAtSlotIndex(13);
	}
}

void Hooked_PostRender(UFT::UGameViewportClient* this__, UFT::UCanvas* Canvas)
{
	// Only loop through world actors if player controller exists because we need to reference it for WorldContext, we'll crash otherwise
	if (MyPlayerController)
	{
		//Yp.clear(); // Clear cached Y positions
		Keybinds::Tick();
	}

	return Real_PostRender(this__, Canvas);
}

void Hooked_ProcessEvent(UFT::UObject* this__, UFT::UFunction* fn, void* params)
{
	/*
	 * Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.Apply
	 *
	 * We will use this Function call to set or unset our PlayerController that we'll use the rest of the game.
	 * Before doing anything, I'll check if MyPlayerController is valid, which will tell me whether or not we are in game or not.
	 * If it's valid - we're in game, otherwise, we're not.
	 */


	if (std::strcmp(fn->GetFullName().c_str(), "Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.Apply") == 0)
	{
		// Cast the params to the correct struct, matching the function call
		auto args = (UFT::UPlayStateEffect_WorldReset_C_Apply_Params*)params;


		// I noticed within this struct theres something called PlayState component, we'll get the state of the player controller from this
		auto PlaystateComponent = args->Component;

		// Check if the PlayState is "Playing", if it is, then we'll assign the playercontroller
		if (std::strcmp(PlaystateComponent->CurrentState->StateName.GetName().c_str(), "Playing") == 0)
		{
			int i = 0;
			MyPlayerController = (UFT::ARemnant_PlayerController_C*)PlaystateComponent->GetOwningPlayerController();
			// Now that the playercontroller is set, we can use it to basically reference the correct world and find everything else

			std::cout << PlaystateComponent->GetOwningPlayerController()->GetFullName() << std::endl;
			std::cout << "MyPlayerController: 0x" << MyPlayerController << std::endl;
			std::cout << "PlayState: " << args->Component->CurrentState->StateName.GetName() << std::endl << std::endl;
		}

		// Else we're going to clear the PlayerController, because I don't want to make calls on it if it's not in a valid "Playing" state
		else
		{
			MyPlayerController = nullptr;
			std::cout << PlaystateComponent->GetOwningPlayerController()->GetFullName() << std::endl;
			std::cout << "PlayState: " << args->Component->CurrentState->StateName.GetName() << std::endl << std::endl;
		}

	}

	// Pass the parameters from the hooked ProcessEvent to the real one (which we define down below after UFT::InitSDK)
	return Real_ProcessEvent(this__, fn, params);
}

void SetupKeybinds()
{
	// unbind all the keys that are previously set

	Keybinds::Clear();
	
	for(int i = 0; i < CurrentLoadOutsInIMGUI.size(); i++)
	{
		// if the keybind is valid
		if(CurrentLoadOutsInIMGUI[i].KeyV > 0 )
		{
			Keybinds::Set(CurrentLoadOutsInIMGUI[i].KeyV, false, [i]
			{
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].handgun, 0);				  std::cout << "equipped handgun" << std::endl;
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].LongGun, 1);				  std::cout << "equipped longgun" << std::endl;
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].Melee, 2);					  std::cout << "equipped melee" << std::endl;
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].Helmet, 4, "Armor_Head_");	  std::cout << "equipped helmet" << std::endl;
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].Chest, 5, "Armor_Body_");	  std::cout << "equipped chest" << std::endl;
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].Legs, 11, "Armor_Legs_");	  std::cout << "equipped legs" << std::endl;
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].Amulet, 13);				  std::cout << "equipped amulet" << std::endl;
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].Ring1, 8);					  std::cout << "equipped ring 1" << std::endl;
				EquipInventoryItem(CurrentLoadOutsInIMGUI[i].Ring2, 9);					  std::cout << "equipped ring 2" << std::endl;
			});
		}
	}
	
	
	//Keybinds::Set(VK_F1, false, []
	//{
	//	if (MyPlayerController)
	//	{
	//		// get all the values from imgui
	//		std::cout << "Equipping Now..." << std::endl;

	//		INVItems = MyPlayerController->GetPlayerInventory()->Items;
	//			
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].handgun, 0);				  std::cout << "equipped handgun" << std::endl;
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].LongGun, 1);				  std::cout << "equipped longgun" << std::endl;
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].Melee,   2);				  std::cout << "equipped melee"   << std::endl;
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].Helmet,  4,  "Armor_Head_"); std::cout << "equipped helmet"  << std::endl;
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].Chest,   5,  "Armor_Body_"); std::cout << "equipped chest"   << std::endl;
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].Legs,    11, "Armor_Legs_"); std::cout << "equipped legs"    << std::endl;
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].Amulet,  13);				  std::cout << "equipped amulet"  << std::endl;
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].Ring1,   8);				  std::cout << "equipped ring 1"  << std::endl;
	//		EquipInventoryItem(CurrentLoadOutsInIMGUI[0].Ring2,   9);				  std::cout << "equipped ring 2"  << std::endl;

	//		std::cout << "Equipping Complete!" << std::endl;
	//	}
	//	
	//});
	//
	//Keybinds::Set(VK_F2, false, []
	//	{
	//		if (MyPlayerController)
	//		{

	//			// get all the values from imgui
	//			std::cout << "Equipping Now..." << std::endl;

	//			INVItems = MyPlayerController->GetPlayerInventory()->Items;

	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].handgun, 0);				  std::cout << "equipped handgun" << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].LongGun, 1);				  std::cout << "equipped longgun" << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].Melee,   2);				  std::cout << "equipped melee"   << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].Helmet,  4,  "Armor_Head_"); std::cout << "equipped helmet"  << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].Chest,   5,  "Armor_Body_"); std::cout << "equipped chest"   << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].Legs,    11, "Armor_Legs_"); std::cout << "equipped legs"    << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].Amulet,  13);				  std::cout << "equipped amulet"  << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].Ring1,   8);				  std::cout << "equipped ring 1"  << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[1].Ring2,   9);				  std::cout << "equipped ring 2"  << std::endl;

	//			std::cout << "Equipping Complete!" << std::endl;
	//		}

	//	});

	//Keybinds::Set(VK_F3, false, []
	//	{
	//		if (MyPlayerController)
	//		{
	//			std::cout << "Equipping Now..." << std::endl;

	//			INVItems = MyPlayerController->GetPlayerInventory()->Items;

	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].handgun, 0);				  std::cout << "equipped handgun" << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].LongGun, 1);				  std::cout << "equipped longgun" << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].Melee,   2);				  std::cout << "equipped melee"   << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].Helmet,  4, "Armor_Head_");  std::cout << "equipped helmet"  << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].Chest,   5, "Armor_Body_");  std::cout << "equipped chest"   << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].Legs,    11, "Armor_Legs_"); std::cout << "equipped legs"    << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].Amulet,  13);				  std::cout << "equipped amulet"  << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].Ring1,   8);				  std::cout << "equipped ring 1"  << std::endl;
	//			EquipInventoryItem(CurrentLoadOutsInIMGUI[2].Ring2,   9);				  std::cout << "equipped ring 2"  << std::endl;

	//			std::cout << "Equipping Complete!" << std::endl;
	//		}

	//	});

	////// F5: set item levels LOW
	//Keybinds::Set(VK_F4, false, []
	//	{
	//		if (MyPlayerController)
	//		{
	//			// since we are playing and not traveling, set all our items back to max level
	//			auto Items = GetMyPlayer()->Inventory->Items;
	//			for (int i = 0; i < Items.Num(); i++)
	//			{
	//				// if name starts with trinket, set to 1
	//				std::string str = GetKismetSystemLibrary().STATIC_GetClassDisplayName(Items[i].ItemBP).ToString();

	//				auto foundTrinket = str.find("Trinket");
	//				auto foundConsumable = str.find("Consumable");
	//				auto foundResource = str.find("Resource");
	//				auto foundSkin = str.find("Skin_C");
	//				auto foundFist = str.find("Weapon_Fist_C");
	//				auto foundNude = str.find("Nude_C");


	//				auto foundWeapon = str.find("Weapon_");
	//				auto foundLetoArmor = str.find("Leto_C");
	//				auto foundSlayerArmor = str.find("Slayer_C");
	//				auto foundCarapace = str.find("Carapace_C");
	//				auto foundRichochet = str.find("RicochetRifle");
	//				auto foundHiveCannon = str.find("HiveCannon");
	//				auto foundPetrified = str.find("PetrifiedMaul");
	//				auto foundMod = str.find("Mod_");

	//				auto foundArmor = str.find("Armor_");

	//				int highestGearLevel = 20 + 1;
	//				int lowestGearLevel = 1;

	//				if (foundFist != std::string::npos)
	//				{
	//					 
	//				}
	//				else if (foundNude != std::string::npos)
	//				{

	//				}
	//				else if (foundWeapon != std::string::npos)
	//				{
	//					GetMyPlayer()->Inventory->SetItemLevel(Items[i].ItemBP, lowestGearLevel);
	//				}
	//				else if (foundArmor != std::string::npos)
	//				{
	//					GetMyPlayer()->Inventory->SetItemLevel(Items[i].ItemBP, lowestGearLevel);
	//				}
	//				else
	//				{
	//					
	//				}


	//			}


	//		}
	//	});

	////// F5: set item level to 20
	//Keybinds::Set(VK_F5, false, []
	//	{
	//		if (MyPlayerController)
	//		{

	//			auto Items = GetMyPlayer()->Inventory->Items;
	//			for (int i = 0; i < Items.Num(); i++)
	//			{
	//				// if name starts with trinket, set to 1
	//				std::string str = GetKismetSystemLibrary().STATIC_GetClassDisplayName(Items[i].ItemBP).ToString();

	//				auto foundTrinket = str.find("Trinket");
	//				auto foundConsumable = str.find("Consumable");
	//				auto foundResource = str.find("Resource");
	//				auto foundSkin = str.find("Skin_C");
	//				auto foundFist = str.find("Weapon_Fist_C");
	//				auto foundNude = str.find("Nude_C");


	//				auto foundWeapon = str.find("Weapon_");
	//				auto foundMod = str.find("Mod_");
	//				auto foundHeadSlayer = str.find("Armor_Head_Slayer_C");
	//				auto foundChestSlayer = str.find("Armor_Body_Slayer_C");
	//				auto foundLegsSlayer = str.find("Armor_Legs_Slayer_C");

	//				auto foundAssaultRifle = str.find("Weapon_AssaultRifle_C");
	//				auto foundHuntingPistol = str.find("Weapon_HuntingPistol_C");
	//				auto foundScrapHammer = str.find("Weapon_Hammer_C");
	//				
	//				int highestGearLevel = 20 + 1;
	//				int lowestGearLevel = 1;

	//				
	//				if (foundFist != std::string::npos)
	//				{

	//				}

	//				else if (foundNude != std::string::npos)
	//				{

	//				}
	//				else if (foundAssaultRifle != std::string::npos ||
	//					foundHuntingPistol != std::string::npos ||
	//					foundScrapHammer != std::string::npos)
	//				{
	//					GetMyPlayer()->Inventory->SetItemLevel(Items[i].ItemBP, highestGearLevel);
	//				}
	//				else if (foundHeadSlayer != std::string::npos ||
	//						 foundChestSlayer != std::string::npos ||
	//						 foundLegsSlayer != std::string::npos)
	//				{
	//					GetMyPlayer()->Inventory->SetItemLevel(Items[i].ItemBP, highestGearLevel);
	//				}
	//				else
	//				{

	//				}
	//			}


	//		}
	//	});

	////// F5: set item levels 250
	//Keybinds::Set(VK_F6, false, []
	//	{
	//		if (MyPlayerController)
	//		{

	//			auto Items = GetMyPlayer()->Inventory->Items;
	//			for (int i = 0; i < Items.Num(); i++)
	//			{
	//				// if name starts with trinket, set to 1
	//				std::string str = GetKismetSystemLibrary().STATIC_GetClassDisplayName(Items[i].ItemBP).ToString();

	//				auto foundTrinket = str.find("Trinket");
	//				auto foundConsumable = str.find("Consumable");
	//				auto foundResource = str.find("Resource");
	//				auto foundSkin = str.find("Skin_C");
	//				auto foundFist = str.find("Weapon_Fist_C");
	//				auto foundNude = str.find("Nude_C");


	//				auto foundWeapon = str.find("Weapon_");
	//				auto foundLetoArmor = str.find("Leto_C");
	//				auto foundSlayerArmor = str.find("Slayer_C");
	//				auto foundCarapace = str.find("Carapace_C");
	//				auto foundRichochet = str.find("RicochetRifle");
	//				auto foundHiveCannon = str.find("HiveCannon");
	//				auto foundPetrified = str.find("PetrifiedMaul");
	//				auto foundMod = str.find("Mod_");

	//				auto foundArmor = str.find("Armor_");

	//				int highestGearLevel = 20 + 1;
	//				int lowestGearLevel = 1;



	//				if (foundFist != std::string::npos)
	//				{

	//				}

	//				else if (foundNude != std::string::npos)
	//				{

	//				}
	//				else if (foundWeapon != std::string::npos)
	//				{
	//					GetMyPlayer()->Inventory->SetItemLevel(Items[i].ItemBP, 250);
	//				}
	//				else if (foundArmor != std::string::npos)
	//				{
	//					GetMyPlayer()->Inventory->SetItemLevel(Items[i].ItemBP, 250);
	//				}
	//				else
	//				{
	//					
	//				}
	//			}

	//			
	//		}
	//	});

	//Keybinds::Set(VK_F8, false, []
	//	{
	//		GetMyPlayer()->God_Mode = true;
	//	});

	////  Force "takeall" of all items on the map
	//Keybinds::Set(VK_F10, false, [] {
	//	if (MyPlayerController)
	//	{
	//		UFT::TArray<UFT::AActor*> OutActors{};
	//		GetGameplayStatics().STATIC_GetAllActorsOfClass(MyPlayerController, UFT::AItem::StaticClass(), &OutActors);
	//		for (auto i = 0; i < OutActors.Num(); i++)
	//		{
	//			auto TheItem = (UFT::AItem*)OutActors[i];
	//			if (/*TheItem->IsA(UFT::AUseableItem::StaticClass()) &&*/ GetMyPlayer())
	//			{
	//				if (!TheItem->GetOwner() || TheItem->GetOwner() != GetMyPlayer())
	//				{
	//					GetMyPlayer()->Inventory->ServerPickupItem(TheItem);
	//					std::cout << "Trying to pick up " << TheItem->GetName() << "\n";
	//				}
	//			}
	//		}
	//	}
	//	});

	//// F3 - Print info about the Item Slots in your inventory
	//Keybinds::Set(VK_F11, false, [] {
	//	for (auto i = 0; i < GetMyPlayer()->Inventory->EquipmentSlots.Num(); i++) {
	//		const auto& Slot = GetMyPlayer()->Inventory->EquipmentSlots[i];
	//		std::cout << i << ": " << Slot.HotKey.GetName() << ": " << Slot.NameID.GetName() << std::endl;
	//	}
	//	});

	////  - Print info about the Item Slots in your inventory
	//Keybinds::Set(VK_F12, false, [] {
	//	// Print inventory items in center-ish of screen
	//	if (MyPlayerController)
	//	{
	//		int index = 0;
	//		auto Items = GetMyPlayer()->Inventory->Items;
	//		for (auto i = 0; i < Items.Num(); i++)
	//		{
	//			//std::wstring Iteminfo =
	//			//	L"Slot " + std::to_wstring(Items[i].EquipmentSlotIndex) + L": "
	//			//	+ GetKismetSystemLibrary().STATIC_GetClassDisplayName(Items[i].ItemBP).ToWString()
	//			//	+ L" | Qty: " + std::to_wstring(Items[i].InstanceData->Quantity)
	//			//	+ L" | Level: " + std::to_wstring(Items[i].InstanceData->Level)
	//			//	+ L" | ItemID: " + std::to_wstring(Items[i].ID);
	//			//std::wcout << Iteminfo << std::endl;

	//			std::cout << "Name:   " + GetKismetSystemLibrary().STATIC_GetClassDisplayName(Items[i].ItemBP).ToString()
	//					  << "Slot:   " + std::to_string(Items[i].EquipmentSlotIndex)
	//					  << "Qty:    " + std::to_string(Items[i].InstanceData->Quantity)
	//					  << "Level:  " + std::to_string(Items[i].InstanceData->Level)
	//					  << "ItemID: " + std::to_string(Items[i].ID) << std::endl;
	//			
	//		}
	//		
	//		//GetMyPlayer()->ServerUnequipMod(388);
	//		//GetMyPlayer()->God_Mode = true;
	//		//for (auto i = 0; i < Items.Num(); i++)
	//		//{
	//		//	if ( GetKismetSystemLibrary().STATIC_GetClassDisplayName(Items[i].ItemBP).ToString() == "Weapon_Coachgun_C")
	//		//	{
	//		//		GetMyPlayer()->Inventory->RemoveItem(Items[i].ItemBP, 1, 0);
	//		//	}
	//		//}
	//	}
	//	});

	//// if the imgui menu is open and we are alt tabbed, the game crashes
	//// but if imgui is closed while we are alt tabbed it doesn't.
	//// this makes sure imgui is closed if the player alt tabs

	//// VK_MENU = Alt
	//Keybinds::Set(VK_MENU, false, []
	//	{
	//		std::cout << "Alt pressed" << std::endl;
	//		bShowImGui = false;
	//	});

	//// VK_LWIN = Windows Key
	//Keybinds::Set(VK_LWIN, false, []
	//	{
	//		std::cout << "Windows Key Pressed" << std::endl;
	//		bShowImGui = false;
	//	});
	
}

DWORD WINAPI MainThread()
{
	bool init_hook = false;
	FILE* pFile = nullptr;
	//DWORD processID = 0;
	
	AllocConsole();
	freopen_s(&pFile, "CONOUT$", "w", stdout);
	ShowWindow(GetConsoleWindow(), SW_SHOW);

	UFT::InitSdk();
	
	// We will hook ProcessEvent because everything mostly everything we need gets filtered through ProcessEvent, so by hooking it we can find pointers to all the actors, players, inventories, etc..

	Real_ProcessEvent = reinterpret_cast<tProcessEvent>(reinterpret_cast<void**>(UFT::UObject::StaticClass()->VfTable)[64]); // ORIGINAL
	Real_PostRender   = reinterpret_cast<tPostRender>(reinterpret_cast<void**>(UFT::UGameViewportClient::StaticClass()->CreateDefaultObject()->VfTable)[91]);

	
	SetupKeybinds();

	std::cout << "DLL Injected!" << std::endl;
	
	// Use detours, hook ProcessEvent and PostRender 
	if (DetourTransactionBegin() != NO_ERROR ||
		DetourUpdateThread(GetCurrentThread()) != NO_ERROR ||
		DetourAttach(&(LPVOID&)Real_ProcessEvent, (PVOID)Hooked_ProcessEvent) != NO_ERROR ||
		DetourAttach(&(LPVOID&)Real_PostRender, (PVOID)Hooked_PostRender) != NO_ERROR ||
		DetourTransactionCommit() != NO_ERROR)
	{
		return FALSE;
	}

	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			init_hook = true;
		}

	} while (!init_hook);


	InitPlayerInventory();
	
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{

	DisableThreadLibraryCalls(hMod);

	switch (dwReason)
	{
		case DLL_PROCESS_ATTACH:
			CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)MainThread, NULL, 0, NULL);
			break;
		case DLL_PROCESS_DETACH:
			kiero::shutdown();
			break;
	}
	return TRUE;
}