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

// Function Tutorial.Tutorial_C.WriteKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorial_C::WriteKey(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial_C.WriteKey");

	UTutorial_C_WriteKey_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial_C.HasKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorial_C::HasKey(class AActor* Actor, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial_C.HasKey");

	UTutorial_C_HasKey_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Tutorial.Tutorial_C.Validate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorial_C::Validate(class AActor* Actor, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial_C.Validate");

	UTutorial_C_Validate_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Tutorial.Tutorial_C.Show
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ForceShow                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Shown                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorial_C::Show(class APawn* Player, class AActor* Context, bool ForceShow, bool* Shown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial_C.Show");

	UTutorial_C_Show_Params params;
	params.Player = Player;
	params.Context = Context;
	params.ForceShow = ForceShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Shown != nullptr)
		*Shown = params.Shown;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
