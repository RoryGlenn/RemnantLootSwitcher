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

// BlueprintGeneratedClass BP_FunctionLibrary.BP_FunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FunctionLibrary.BP_FunctionLibrary_C");
		return ptr;
	}


	static void STATIC_GetMinionDamageScalar(class UObject* Minion, class UObject* __WorldContext, float* Scalar, bool* IsValid);
	static void STATIC_GetMinionOwner(class AActor* Minion, class UObject* __WorldContext, class AActor** Owner);
	static void STATIC_ApplySoulEmberBuff(class ACharacterGunfire* Owner, class UObject* __WorldContext);
	static void STATIC_GetMinionDamageMod(class UObject* Minion, class UObject* __WorldContext, float* Mod);
	static void STATIC_GetMaxSummonsForMod(class UClass* Mod, class AActor* Owner, int Bonus, class UObject* __WorldContext, int* Count);
	static void STATIC_LimitMinions(int MaxCount, class ACharacterGunfire* NewMinion, class UObject* __WorldContext);
	static void STATIC_ScaleDamage(float Damage, int Level, class UObject* __WorldContext, float* Out);
	static void STATIC_Update_Trigger_Objects(TArray<class AActor*>* Trigger_Objects, bool State, class UObject* __WorldContext);
	static bool STATIC_IsDemoFloor(class UObject* WorldContextObject, class UObject* __WorldContext);
	static bool STATIC_IsDemo(class UObject* WorldContextObject, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
