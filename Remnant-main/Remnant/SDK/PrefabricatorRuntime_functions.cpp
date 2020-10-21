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

// Function PrefabricatorRuntime.PrefabActor.SavePrefab
// (Final, Native, Public, BlueprintCallable)
void APrefabActor::SavePrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.SavePrefab");

	APrefabActor_SavePrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRandomStream           InRandom                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bRecursive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APrefabActor::RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.RandomizeSeed");

	APrefabActor_RandomizeSeed_Params params;
	params.InRandom = InRandom;
	params.bRecursive = bRecursive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
// (Final, Native, Public, BlueprintCallable)
void APrefabActor::LoadPrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.LoadPrefab");

	APrefabActor_LoadPrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APrefabActor::IsPrefabOutdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated");

	APrefabActor_IsPrefabOutdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrefabricatorAsset*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrefabricatorAsset* APrefabActor::GetPrefabAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset");

	APrefabActor_GetPrefabAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InSeed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APrefabRandomizer::Randomize(int InSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabRandomizer.Randomize");

	APrefabRandomizer_Randomize_Params params;
	params.InSeed = InSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APrefabActor*            Prefab                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPrefabricatorEventListener::PostSpawn(class APrefabActor* Prefab)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn");

	UPrefabricatorEventListener_PostSpawn_Params params;
	params.Prefab = Prefab;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrefabricatorAssetInterface* Prefab                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APrefabActor*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APrefabActor* UPrefabricatorBlueprintLibrary::STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab");

	UPrefabricatorBlueprintLibrary_SpawnPrefab_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Prefab = Prefab;
	params.Transform = Transform;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPrefabricatorBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Prefab                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          AttachedActors                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UPrefabricatorBlueprintLibrary::STATIC_GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors");

	UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params params;
	params.Prefab = Prefab;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UPrefabricatorBlueprintLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AttachedActors != nullptr)
		*AttachedActors = params.AttachedActors;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
