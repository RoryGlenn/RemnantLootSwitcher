// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Interactive_Book.Interactive_Book_C.CheckReadNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBookPage               Page                           (BlueprintVisible, BlueprintReadOnly, Parm)
void AInteractive_Book_C::CheckReadNotify(const struct FBookPage& Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.CheckReadNotify");

	AInteractive_Book_C_CheckReadNotify_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.UpdatePageTurnUI
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::UpdatePageTurnUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.UpdatePageTurnUI");

	AInteractive_Book_C_UpdatePageTurnUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.GetLore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ALoreItem*               Lore                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Book_C::GetLore(class ALoreItem** Lore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.GetLore");

	AInteractive_Book_C_GetLore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Lore != nullptr)
		*Lore = params.Lore;

}


// Function Interactive_Book.Interactive_Book_C.OnRep_Page Turns
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::OnRep_Page_Turns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnRep_Page Turns");

	AInteractive_Book_C_OnRep_Page_Turns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.Update All Materials
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::Update_All_Materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update All Materials");

	AInteractive_Book_C_Update_All_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.Update Page Material
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Page_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Book_C::Update_Page_Material(int Page_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update Page Material");

	AInteractive_Book_C_Update_Page_Material_Params params;
	params.Page_ID = Page_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.Update Material
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Material_Element_Index         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Book_C::Update_Material(int Material_Element_Index, bool Activate, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update Material");

	AInteractive_Book_C_Update_Material_Params params;
	params.Material_Element_Index = Material_Element_Index;
	params.Activate = Activate;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.Get Current Page Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Page_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Page_Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Book_C::Get_Current_Page_Index(int Page_ID, bool Forward, int* Page_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Get Current Page Index");

	AInteractive_Book_C_Get_Current_Page_Index_Params params;
	params.Page_ID = Page_ID;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Page_Index != nullptr)
		*Page_Index = params.Page_Index;

}


// Function Interactive_Book.Interactive_Book_C.Assign All Render Textures
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Book_C::Assign_All_Render_Textures(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Assign All Render Textures");

	AInteractive_Book_C_Assign_All_Render_Textures_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.GetBookWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget_BookPages_C*     Book_Widget                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Book_C::GetBookWidget(class UWidget_BookPages_C** Book_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.GetBookWidget");

	AInteractive_Book_C_GetBookWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Book_Widget != nullptr)
		*Book_Widget = params.Book_Widget;

}


// Function Interactive_Book.Interactive_Book_C.Update Pages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Book_C::Update_Pages(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update Pages");

	AInteractive_Book_C_Update_Pages_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.Assign Render Texture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Material_Element_Index         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Book_C::Assign_Render_Texture(int Material_Element_Index, bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Assign Render Texture");

	AInteractive_Book_C_Assign_Render_Texture_Params params;
	params.Material_Element_Index = Material_Element_Index;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.PrevPage
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::PrevPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.PrevPage");

	AInteractive_Book_C_PrevPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.NextPage
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.NextPage");

	AInteractive_Book_C_NextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_Book_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.ReceiveBeginPlay");

	AInteractive_Book_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.Single Page Ready
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::Single_Page_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Single Page Ready");

	AInteractive_Book_C_Single_Page_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.Page 4 Set
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::Page_4_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Page 4 Set");

	AInteractive_Book_C_Page_4_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.Update Pages Delayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Book_C::Update_Pages_Delayed(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.Update Pages Delayed");

	AInteractive_Book_C_Update_Pages_Delayed_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.OnNextDialog
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::OnNextDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnNextDialog");

	AInteractive_Book_C_OnNextDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.OnPrevDialog
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::OnPrevDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnPrevDialog");

	AInteractive_Book_C_OnPrevDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.InitLore
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::InitLore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.InitLore");

	AInteractive_Book_C_InitLore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.OnHUDInit
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::OnHUDInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnHUDInit");

	AInteractive_Book_C_OnHUDInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.ServerBeginInspect
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::ServerBeginInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.ServerBeginInspect");

	AInteractive_Book_C_ServerBeginInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.OnHUDUpdate
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::OnHUDUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnHUDUpdate");

	AInteractive_Book_C_OnHUDUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.CacheUIPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentPage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Book_C::CacheUIPage(int CurrentPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.CacheUIPage");

	AInteractive_Book_C_CacheUIPage_Params params;
	params.CurrentPage = CurrentPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.OnInspectEnd
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Book_C::OnInspectEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.OnInspectEnd");

	AInteractive_Book_C_OnInspectEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Book.Interactive_Book_C.ExecuteUbergraph_Interactive_Book
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Book_C::ExecuteUbergraph_Interactive_Book(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book.Interactive_Book_C.ExecuteUbergraph_Interactive_Book");

	AInteractive_Book_C_ExecuteUbergraph_Interactive_Book_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
