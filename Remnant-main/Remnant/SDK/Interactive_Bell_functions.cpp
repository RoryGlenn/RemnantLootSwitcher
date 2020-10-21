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

// Function Interactive_Bell.Interactive_Bell_C.MulticastRingBell
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Bell_C::MulticastRingBell(const struct FVector& Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.MulticastRingBell");

	AInteractive_Bell_C_MulticastRingBell_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Bell.Interactive_Bell_C.OnNotifyTakeDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AInteractive_Bell_C::OnNotifyTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.OnNotifyTakeDamage");

	AInteractive_Bell_C_OnNotifyTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Bell.Interactive_Bell_C.RingBell
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Bell_C::RingBell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.RingBell");

	AInteractive_Bell_C_RingBell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Bell.Interactive_Bell_C.ExecuteUbergraph_Interactive_Bell
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Bell_C::ExecuteUbergraph_Interactive_Bell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.ExecuteUbergraph_Interactive_Bell");

	AInteractive_Bell_C_ExecuteUbergraph_Interactive_Bell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Bell.Interactive_Bell_C.OnRingBell__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Note                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Bell_C::OnRingBell__DelegateSignature(class UClass* Note)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.OnRingBell__DelegateSignature");

	AInteractive_Bell_C_OnRingBell__DelegateSignature_Params params;
	params.Note = Note;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
