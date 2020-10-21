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

// Function Resource_TraitBook.Resource_TraitBook_C.PreAdd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent*     Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AResource_TraitBook_C::PreAdd(class UInventoryComponent* Inventory, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_TraitBook.Resource_TraitBook_C.PreAdd");

	AResource_TraitBook_C_PreAdd_Params params;
	params.Inventory = Inventory;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Resource_TraitBook.Resource_TraitBook_C.OnPickedUp
// (Event, Public, BlueprintEvent)
void AResource_TraitBook_C::OnPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_TraitBook.Resource_TraitBook_C.OnPickedUp");

	AResource_TraitBook_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Resource_TraitBook.Resource_TraitBook_C.ExecuteUbergraph_Resource_TraitBook
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AResource_TraitBook_C::ExecuteUbergraph_Resource_TraitBook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_TraitBook.Resource_TraitBook_C.ExecuteUbergraph_Resource_TraitBook");

	AResource_TraitBook_C_ExecuteUbergraph_Resource_TraitBook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
