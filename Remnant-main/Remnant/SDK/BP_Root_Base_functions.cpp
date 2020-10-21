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

// Function BP_Root_Base.BP_Root_Base_C.Snap Spline Point To Grid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Root_Base_C::Snap_Spline_Point_To_Grid(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Base.BP_Root_Base_C.Snap Spline Point To Grid");

	ABP_Root_Base_C_Snap_Spline_Point_To_Grid_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Base.BP_Root_Base_C.CheckForSplinePointSnap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Local_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Local_Tangent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Local_Location_2               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Local_Tangent_2                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Start_Pos                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Start_Tangent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End_Pos                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End_Tangent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Root_Base_C::CheckForSplinePointSnap(const struct FVector& Local_Location, const struct FVector& Local_Tangent, const struct FVector& Local_Location_2, const struct FVector& Local_Tangent_2, struct FVector* Start_Pos, struct FVector* Start_Tangent, struct FVector* End_Pos, struct FVector* End_Tangent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Base.BP_Root_Base_C.CheckForSplinePointSnap");

	ABP_Root_Base_C_CheckForSplinePointSnap_Params params;
	params.Local_Location = Local_Location;
	params.Local_Tangent = Local_Tangent;
	params.Local_Location_2 = Local_Location_2;
	params.Local_Tangent_2 = Local_Tangent_2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Start_Pos != nullptr)
		*Start_Pos = params.Start_Pos;
	if (Start_Tangent != nullptr)
		*Start_Tangent = params.Start_Tangent;
	if (End_Pos != nullptr)
		*End_Pos = params.End_Pos;
	if (End_Tangent != nullptr)
		*End_Tangent = params.End_Tangent;

}


// Function BP_Root_Base.BP_Root_Base_C.CreateStartCap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Root_Base_C::CreateStartCap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Base.BP_Root_Base_C.CreateStartCap");

	ABP_Root_Base_C_CreateStartCap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Base.BP_Root_Base_C.CreateSplinePointMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Root_Base_C::CreateSplinePointMeshes(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Base.BP_Root_Base_C.CreateSplinePointMeshes");

	ABP_Root_Base_C_CreateSplinePointMeshes_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Base.BP_Root_Base_C.GetNearestTime
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Root_Base_C::GetNearestTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Base.BP_Root_Base_C.GetNearestTime");

	ABP_Root_Base_C_GetNearestTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Base.BP_Root_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Root_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Base.BP_Root_Base_C.UserConstructionScript");

	ABP_Root_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Base.BP_Root_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Root_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Base.BP_Root_Base_C.ReceiveBeginPlay");

	ABP_Root_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Base.BP_Root_Base_C.ExecuteUbergraph_BP_Root_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Root_Base_C::ExecuteUbergraph_BP_Root_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Base.BP_Root_Base_C.ExecuteUbergraph_BP_Root_Base");

	ABP_Root_Base_C_ExecuteUbergraph_BP_Root_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
