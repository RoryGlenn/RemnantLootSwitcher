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

// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.GetSpawnTags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Out                            (Parm, OutParm, ZeroConstructor)
void AInteractive_LootContainer_Base_C::GetSpawnTags(TArray<struct FName>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.GetSpawnTags");

	AInteractive_LootContainer_Base_C_GetSpawnTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::SpawnItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnItems");

	AInteractive_LootContainer_Base_C_SpawnItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.DoSpawns
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::DoSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.DoSpawns");

	AInteractive_LootContainer_Base_C_DoSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.HasSpawnPoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_LootContainer_Base_C::HasSpawnPoints(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.HasSpawnPoints");

	AInteractive_LootContainer_Base_C_HasSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnSpawnPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::SpawnSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnSpawnPoints");

	AInteractive_LootContainer_Base_C_SpawnSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_LootContainer_Base_C::SpawnItem(class UClass* ItemBP, unsigned char Quantity, class USceneComponent* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.SpawnItem");

	AInteractive_LootContainer_Base_C_SpawnItem_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnTable*             SpawnTable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FName>           SpawnTags                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AInteractive_LootContainer_Base_C::Init(class USpawnTable* SpawnTable, TArray<struct FName>* SpawnTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.Init");

	AInteractive_LootContainer_Base_C_Init_Params params;
	params.SpawnTable = SpawnTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnTags != nullptr)
		*SpawnTags = params.SpawnTags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.DropLoot
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::DropLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.DropLoot");

	AInteractive_LootContainer_Base_C_DropLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnRep_Open
// (BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::OnRep_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnRep_Open");

	AInteractive_LootContainer_Base_C_OnRep_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.AnimateOpen
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::AnimateOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.AnimateOpen");

	AInteractive_LootContainer_Base_C_AnimateOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.AnimateOpened
// (BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::AnimateOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.AnimateOpened");

	AInteractive_LootContainer_Base_C_AnimateOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnOpen");

	AInteractive_LootContainer_Base_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OverrideLootTable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USpawnTable*             SpawnTable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FName>           SpawnTags                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AInteractive_LootContainer_Base_C::OverrideLootTable(class USpawnTable* SpawnTable, TArray<struct FName> SpawnTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OverrideLootTable");

	AInteractive_LootContainer_Base_C_OverrideLootTable_Params params;
	params.SpawnTable = SpawnTable;
	params.SpawnTags = SpawnTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_LootContainer_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.ReceiveBeginPlay");

	AInteractive_LootContainer_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnGenerated_Event_1
// (BlueprintCallable, BlueprintEvent)
void AInteractive_LootContainer_Base_C::OnGenerated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnGenerated_Event_1");

	AInteractive_LootContainer_Base_C_OnGenerated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.ExecuteUbergraph_Interactive_LootContainer_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_LootContainer_Base_C::ExecuteUbergraph_Interactive_LootContainer_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.ExecuteUbergraph_Interactive_LootContainer_Base");

	AInteractive_LootContainer_Base_C_ExecuteUbergraph_Interactive_LootContainer_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInteractive_LootContainer_Base_C* Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_LootContainer_Base_C::OnOpened__DelegateSignature(class AInteractive_LootContainer_Base_C* Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_LootContainer_Base.Interactive_LootContainer_Base_C.OnOpened__DelegateSignature");

	AInteractive_LootContainer_Base_C_OnOpened__DelegateSignature_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
