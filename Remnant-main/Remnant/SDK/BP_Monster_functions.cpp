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

// Function BP_Monster.BP_Monster_C.CanUseItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Monster_C::CanUseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.CanUseItem");

	ABP_Monster_C_CanUseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Monster.BP_Monster_C.EvaluatePlayerTargetSwitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventRegionNameID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TargetSwitchCooldownMin        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TargetSwitchCooldownMax        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::EvaluatePlayerTargetSwitch(const struct FName& EventRegionNameID, float TargetSwitchCooldownMin, float TargetSwitchCooldownMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.EvaluatePlayerTargetSwitch");

	ABP_Monster_C_EvaluatePlayerTargetSwitch_Params params;
	params.EventRegionNameID = EventRegionNameID;
	params.TargetSwitchCooldownMin = TargetSwitchCooldownMin;
	params.TargetSwitchCooldownMax = TargetSwitchCooldownMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.CleanupSpawns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Kill                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Monster_C::CleanupSpawns(bool Kill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.CleanupSpawns");

	ABP_Monster_C_CleanupSpawns_Params params;
	params.Kill = Kill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.SpawnCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESpawnActorCollisionHandlingMethod CollisionHandling              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SpawnState                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AddThreat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ThreatAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       AsCharacter_Gunfire            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::SpawnCharacter(const struct FTransform& SpawnTransform, class UClass* ActorClass, ESpawnActorCollisionHandlingMethod CollisionHandling, const struct FName& SpawnState, bool AddThreat, float ThreatAmount, class ACharacterGunfire** AsCharacter_Gunfire)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.SpawnCharacter");

	ABP_Monster_C_SpawnCharacter_Params params;
	params.SpawnTransform = SpawnTransform;
	params.ActorClass = ActorClass;
	params.CollisionHandling = CollisionHandling;
	params.SpawnState = SpawnState;
	params.AddThreat = AddThreat;
	params.ThreatAmount = ThreatAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsCharacter_Gunfire != nullptr)
		*AsCharacter_Gunfire = params.AsCharacter_Gunfire;

}


// Function BP_Monster.BP_Monster_C.GetEncounterMan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEncounterManager*       EncounterManager               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::GetEncounterMan(class UEncounterManager** EncounterManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.GetEncounterMan");

	ABP_Monster_C_GetEncounterMan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EncounterManager != nullptr)
		*EncounterManager = params.EncounterManager;

}


// Function BP_Monster.BP_Monster_C.DoEncounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnTable*             SpawnTable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SpawnTag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SetOwnerAsTarget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEncounterInstance*      EncounterInstance              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::DoEncounter(class USpawnTable* SpawnTable, const struct FName& SpawnTag, bool SetOwnerAsTarget, class UEncounterInstance** EncounterInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.DoEncounter");

	ABP_Monster_C_DoEncounter_Params params;
	params.SpawnTable = SpawnTable;
	params.SpawnTag = SpawnTag;
	params.SetOwnerAsTarget = SetOwnerAsTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EncounterInstance != nullptr)
		*EncounterInstance = params.EncounterInstance;

}


// Function BP_Monster.BP_Monster_C.RunAway
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::RunAway()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.RunAway");

	ABP_Monster_C_RunAway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.Death Stingers
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::Death_Stingers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.Death Stingers");

	ABP_Monster_C_Death_Stingers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnRep_InCombat
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::OnRep_InCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnRep_InCombat");

	ABP_Monster_C_OnRep_InCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.SpawnMinions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::SpawnMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.SpawnMinions");

	ABP_Monster_C_SpawnMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.GenerateModifier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::GenerateModifier(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.GenerateModifier");

	ABP_Monster_C_GenerateModifier_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.SetupModifiers
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::SetupModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.SetupModifiers");

	ABP_Monster_C_SetupModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.DropLoot
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::DropLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.DropLoot");

	ABP_Monster_C_DropLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnFailure_2FFB5FF44E28076CA52495AF9F4E4361
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::OnFailure_2FFB5FF44E28076CA52495AF9F4E4361(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnFailure_2FFB5FF44E28076CA52495AF9F4E4361");

	ABP_Monster_C_OnFailure_2FFB5FF44E28076CA52495AF9F4E4361_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnSuccess_2FFB5FF44E28076CA52495AF9F4E4361
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::OnSuccess_2FFB5FF44E28076CA52495AF9F4E4361(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnSuccess_2FFB5FF44E28076CA52495AF9F4E4361");

	ABP_Monster_C_OnSuccess_2FFB5FF44E28076CA52495AF9F4E4361_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnFailure_79E717164DB60DC5A8B19EAF4871DCA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::OnFailure_79E717164DB60DC5A8B19EAF4871DCA8(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnFailure_79E717164DB60DC5A8B19EAF4871DCA8");

	ABP_Monster_C_OnFailure_79E717164DB60DC5A8B19EAF4871DCA8_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnSuccess_79E717164DB60DC5A8B19EAF4871DCA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::OnSuccess_79E717164DB60DC5A8B19EAF4871DCA8(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnSuccess_79E717164DB60DC5A8B19EAF4871DCA8");

	ABP_Monster_C_OnSuccess_79E717164DB60DC5A8B19EAF4871DCA8_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnShadowPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShadowPlay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Monster_C::OnShadowPlay(bool ShadowPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnShadowPlay");

	ABP_Monster_C_OnShadowPlay_Params params;
	params.ShadowPlay = ShadowPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnBeginReadyWeapon
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::OnBeginReadyWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnBeginReadyWeapon");

	ABP_Monster_C_OnBeginReadyWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.MultiCast_OnBeginReadyWeapon
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::MultiCast_OnBeginReadyWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.MultiCast_OnBeginReadyWeapon");

	ABP_Monster_C_MultiCast_OnBeginReadyWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnAlert
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::OnAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnAlert");

	ABP_Monster_C_OnAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.MulticastAlert
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::MulticastAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.MulticastAlert");

	ABP_Monster_C_MulticastAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.CombatEnter
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::CombatEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.CombatEnter");

	ABP_Monster_C_CombatEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.CombatExit
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::CombatExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.CombatExit");

	ABP_Monster_C_CombatExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Monster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.ReceiveBeginPlay");

	ABP_Monster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnDead_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::OnDead_Event_2(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnDead_Event_2");

	ABP_Monster_C_OnDead_Event_2_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::DisableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.DisableCollision");

	ABP_Monster_C_DisableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::EnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.EnableCollision");

	ABP_Monster_C_EnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnVaultOver_Begin
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::OnVaultOver_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnVaultOver_Begin");

	ABP_Monster_C_OnVaultOver_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.OnVaultOver_End
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::OnVaultOver_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnVaultOver_End");

	ABP_Monster_C_OnVaultOver_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.BndEvt__WindowCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Monster_C::BndEvt__WindowCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.BndEvt__WindowCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Monster_C_BndEvt__WindowCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Monster.BP_Monster_C.OnRunAway
// (BlueprintCallable, BlueprintEvent)
void ABP_Monster_C::OnRunAway()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.OnRunAway");

	ABP_Monster_C_OnRunAway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.UseItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_Monster_C::UseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.UseItem");

	ABP_Monster_C_UseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Monster.BP_Monster_C.ExecuteUbergraph_BP_Monster
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Monster_C::ExecuteUbergraph_BP_Monster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monster.BP_Monster_C.ExecuteUbergraph_BP_Monster");

	ABP_Monster_C_ExecuteUbergraph_BP_Monster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
