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

// Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.OnDestroy
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Wasteland_Sludge_C::OnDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.OnDestroy");

	ABP_Wasteland_Sludge_C_OnDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Wasteland_Sludge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.UserConstructionScript");

	ABP_Wasteland_Sludge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.SFX_Stop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Wasteland_Sludge_C::SFX_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.SFX_Stop");

	ABP_Wasteland_Sludge_C_SFX_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Wasteland_Sludge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.ReceiveBeginPlay");

	ABP_Wasteland_Sludge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Wasteland_Sludge_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Wasteland_Sludge_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wasteland_Sludge_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Wasteland_Sludge_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.SFX_Start
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Wasteland_Sludge_C::SFX_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.SFX_Start");

	ABP_Wasteland_Sludge_C_SFX_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.ExecuteUbergraph_BP_Wasteland_Sludge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wasteland_Sludge_C::ExecuteUbergraph_BP_Wasteland_Sludge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sludge.BP_Wasteland_Sludge_C.ExecuteUbergraph_BP_Wasteland_Sludge");

	ABP_Wasteland_Sludge_C_ExecuteUbergraph_BP_Wasteland_Sludge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
