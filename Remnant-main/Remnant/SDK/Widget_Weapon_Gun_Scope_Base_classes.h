#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class UWidget_Weapon_Gun_Scope_Base_C : public UUserWidget
{
public:
	class UImage*                                      ScopeView;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ARangedWeapon*                               RangedWeapon;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C");
		return ptr;
	}


	void Init(class ARangedWeapon* InRangedWeapon);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
