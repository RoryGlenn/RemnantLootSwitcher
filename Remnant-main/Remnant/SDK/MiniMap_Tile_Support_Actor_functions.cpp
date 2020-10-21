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

// Function MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMiniMap_Tile_Support_Actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C.UserConstructionScript");

	AMiniMap_Tile_Support_Actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMiniMap_Tile_Support_Actor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C.ReceiveBeginPlay");

	AMiniMap_Tile_Support_Actor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C.ExecuteUbergraph_MiniMap_Tile_Support_Actor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMiniMap_Tile_Support_Actor_C::ExecuteUbergraph_MiniMap_Tile_Support_Actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Tile_Support_Actor.MiniMap_Tile_Support_Actor_C.ExecuteUbergraph_MiniMap_Tile_Support_Actor");

	AMiniMap_Tile_Support_Actor_C_ExecuteUbergraph_MiniMap_Tile_Support_Actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
