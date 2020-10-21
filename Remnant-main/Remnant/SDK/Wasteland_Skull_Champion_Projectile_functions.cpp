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

// Function Wasteland_Skull_Champion_Projectile.Wasteland_Skull_Champion_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWasteland_Skull_Champion_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wasteland_Skull_Champion_Projectile.Wasteland_Skull_Champion_Projectile_C.ReceiveBeginPlay");

	AWasteland_Skull_Champion_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wasteland_Skull_Champion_Projectile.Wasteland_Skull_Champion_Projectile_C.ExecuteUbergraph_Wasteland_Skull_Champion_Projectile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWasteland_Skull_Champion_Projectile_C::ExecuteUbergraph_Wasteland_Skull_Champion_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wasteland_Skull_Champion_Projectile.Wasteland_Skull_Champion_Projectile_C.ExecuteUbergraph_Wasteland_Skull_Champion_Projectile");

	AWasteland_Skull_Champion_Projectile_C_ExecuteUbergraph_Wasteland_Skull_Champion_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
