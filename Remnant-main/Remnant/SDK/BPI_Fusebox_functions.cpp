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

// Function BPI_Fusebox.BPI_Fusebox_C.HasFuseInFusebox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Fusebox_C::HasFuseInFusebox(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Fusebox.BPI_Fusebox_C.HasFuseInFusebox");

	UBPI_Fusebox_C_HasFuseInFusebox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
