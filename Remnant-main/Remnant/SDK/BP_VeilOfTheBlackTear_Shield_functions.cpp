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

// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.Get Scale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_VeilOfTheBlackTear_Shield_C::Get_Scale(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.Get Scale");

	ABP_VeilOfTheBlackTear_Shield_C_Get_Scale_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_VeilOfTheBlackTear_Shield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.UserConstructionScript");

	ABP_VeilOfTheBlackTear_Shield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyAllWorldReset
// (Event, Public, BlueprintEvent)
void ABP_VeilOfTheBlackTear_Shield_C::OnNotifyAllWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyAllWorldReset");

	ABP_VeilOfTheBlackTear_Shield_C_OnNotifyAllWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.FX_Impact
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_VeilOfTheBlackTear_Shield_C::FX_Impact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.FX_Impact");

	ABP_VeilOfTheBlackTear_Shield_C_FX_Impact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.DestroyFX
// (BlueprintCallable, BlueprintEvent)
void ABP_VeilOfTheBlackTear_Shield_C::DestroyFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.DestroyFX");

	ABP_VeilOfTheBlackTear_Shield_C_DestroyFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_VeilOfTheBlackTear_Shield_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ReceiveDestroyed");

	ABP_VeilOfTheBlackTear_Shield_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_VeilOfTheBlackTear_Shield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ReceiveBeginPlay");

	ABP_VeilOfTheBlackTear_Shield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyTakeDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ABP_VeilOfTheBlackTear_Shield_C::OnNotifyTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyTakeDamage");

	ABP_VeilOfTheBlackTear_Shield_C_OnNotifyTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyDead
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ABP_VeilOfTheBlackTear_Shield_C::OnNotifyDead(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnNotifyDead");

	ABP_VeilOfTheBlackTear_Shield_C_OnNotifyDead_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnWorldReset
// (Event, Public, BlueprintEvent)
void ABP_VeilOfTheBlackTear_Shield_C::OnWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.OnWorldReset");

	ABP_VeilOfTheBlackTear_Shield_C_OnWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_VeilOfTheBlackTear_Shield_C::BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_VeilOfTheBlackTear_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ExecuteUbergraph_BP_VeilOfTheBlackTear_Shield
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VeilOfTheBlackTear_Shield_C::ExecuteUbergraph_BP_VeilOfTheBlackTear_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C.ExecuteUbergraph_BP_VeilOfTheBlackTear_Shield");

	ABP_VeilOfTheBlackTear_Shield_C_ExecuteUbergraph_BP_VeilOfTheBlackTear_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
