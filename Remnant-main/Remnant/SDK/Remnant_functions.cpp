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

// Function Remnant.ActionBuff.ResetTimer
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
void UActionBuff::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ActionBuff.ResetTimer");

	UActionBuff_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ActionBuff.PauseDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Paused                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActionBuff::PauseDuration(bool Paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ActionBuff.PauseDuration");

	UActionBuff_PauseDuration_Params params;
	params.Paused = Paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ActionBuff.IsDurationPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UActionBuff::IsDurationPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ActionBuff.IsDurationPaused");

	UActionBuff_IsDurationPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ActionBuff.GetRemainingTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UActionBuff::GetRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ActionBuff.GetRemainingTime");

	UActionBuff_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ActionBuff.GetElapsedTimePct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UActionBuff::GetElapsedTimePct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ActionBuff.GetElapsedTimePct");

	UActionBuff_GetElapsedTimePct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ActionBuff.GetDesiredVisual
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UActionBuff::GetDesiredVisual(struct FName* Slot, struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ActionBuff.GetDesiredVisual");

	UActionBuff_GetDesiredVisual_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
	if (ID != nullptr)
		*ID = params.ID;


	return params.ReturnValue;
}


// Function Remnant.ActionBuff.ApplyTimerDelta
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActionBuff::ApplyTimerDelta(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ActionBuff.ApplyTimerDelta");

	UActionBuff_ApplyTimerDelta_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Checkpoint.OnFinishActivation
// (Event, Public, BlueprintEvent)
void ACheckpoint::OnFinishActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Checkpoint.OnFinishActivation");

	ACheckpoint_OnFinishActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Checkpoint.OnEndGrab
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARemnantCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACheckpoint::OnEndGrab(class ARemnantCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Checkpoint.OnEndGrab");

	ACheckpoint_OnEndGrab_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Checkpoint.OnBeginGrab
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARemnantCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACheckpoint::OnBeginGrab(class ARemnantCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Checkpoint.OnBeginGrab");

	ACheckpoint_OnBeginGrab_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Checkpoint.OnBeginActivation
// (Event, Public, BlueprintEvent)
void ACheckpoint::OnBeginActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Checkpoint.OnBeginActivation");

	ACheckpoint_OnBeginActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Checkpoint.OnActivate
// (Event, Public, BlueprintEvent)
void ACheckpoint::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Checkpoint.OnActivate");

	ACheckpoint_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Checkpoint.CanCheckpointActivate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACheckpoint::CanCheckpointActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Checkpoint.CanCheckpointActivate");

	ACheckpoint_CanCheckpointActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.DragonHeart.Regenerate
// (Final, Native, Public, BlueprintCallable)
void ADragonHeart::Regenerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.DragonHeart.Regenerate");

	ADragonHeart_Regenerate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.DragonHeart.GetMaxCurrentQuantity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ADragonHeart::GetMaxCurrentQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.DragonHeart.GetMaxCurrentQuantity");

	ADragonHeart_GetMaxCurrentQuantity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Emote.GetIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEmotesComponent*        Emotes                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UEmote::GetIcon(class UEmotesComponent* Emotes, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Emote.GetIcon");

	UEmote_GetIcon_Params params;
	params.Emotes = Emotes;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EmotesComponent.UnlockEmote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewEmote                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEmotesComponent::UnlockEmote(class UClass* NewEmote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.UnlockEmote");

	UEmotesComponent_UnlockEmote_Params params;
	params.NewEmote = NewEmote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EmotesComponent.SlotEmote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  Emote                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEmotesComponent::SlotEmote(int Slot, class UClass* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.SlotEmote");

	UEmotesComponent_SlotEmote_Params params;
	params.Slot = Slot;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EmotesComponent.ServerUpdateSlots
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TArray<class UClass*>          NewSlots                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
void UEmotesComponent::ServerUpdateSlots(TArray<class UClass*> NewSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.ServerUpdateSlots");

	UEmotesComponent_ServerUpdateSlots_Params params;
	params.NewSlots = NewSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EmotesComponent.ServerUnlockEmote
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UClass*                  Emote                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEmotesComponent::ServerUnlockEmote(class UClass* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.ServerUnlockEmote");

	UEmotesComponent_ServerUnlockEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EmotesComponent.RequestEmoteIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Emote                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UEmotesComponent::RequestEmoteIcon(class UClass* Emote, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.RequestEmoteIcon");

	UEmotesComponent_RequestEmoteIcon_Params params;
	params.Emote = Emote;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EmotesComponent.OnLoadIcon
// (Final, Native, Protected)
// Parameters:
// class UClass*                  Emote                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEmotesComponent::OnLoadIcon(class UClass* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.OnLoadIcon");

	UEmotesComponent_OnLoadIcon_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EmotesComponent.HasEmote
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Emote                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEmotesComponent::HasEmote(class UClass* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.HasEmote");

	UEmotesComponent_HasEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EmotesComponent.GetUnlockedEmotes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          IgnoreList                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<class UEmote*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UEmote*> UEmotesComponent::GetUnlockedEmotes(TArray<class UClass*> IgnoreList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.GetUnlockedEmotes");

	UEmotesComponent_GetUnlockedEmotes_Params params;
	params.IgnoreList = IgnoreList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EmotesComponent.GetEmoteForSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEmote*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEmote* UEmotesComponent::GetEmoteForSlot(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.GetEmoteForSlot");

	UEmotesComponent_GetEmoteForSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EmotesComponent.ClearEmoteIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Emote                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEmotesComponent::ClearEmoteIcon(class UClass* Emote, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.ClearEmoteIcon");

	UEmotesComponent_ClearEmoteIcon_Params params;
	params.Emote = Emote;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EmotesComponent.ClearAllEmoteIcons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEmotesComponent::ClearAllEmoteIcons(const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EmotesComponent.ClearAllEmoteIcons");

	UEmotesComponent_ClearAllEmoteIcons_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.PlayerExit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AEventRegion::PlayerExit(class ARemnantCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.PlayerExit");

	AEventRegion_PlayerExit_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.PlayerEnter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AEventRegion::PlayerEnter(class ARemnantCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.PlayerEnter");

	AEventRegion_PlayerEnter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.OnRep_Players
// (Final, Native, Protected)
void AEventRegion::OnRep_Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.OnRep_Players");

	AEventRegion_OnRep_Players_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.OnRep_Active
// (Final, Native, Protected)
void AEventRegion::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.OnRep_Active");

	AEventRegion_OnRep_Active_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.OnDead
// (Final, Native, Protected)
// Parameters:
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACharacterGunfire*       Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Cause                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AEventRegion::OnDead(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.OnDead");

	AEventRegion_OnDead_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.LockEvent
// (Final, Native, Public, BlueprintCallable)
void AEventRegion::LockEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.LockEvent");

	AEventRegion_LockEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.IsPlayerInRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AEventRegion::IsPlayerInRegion(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.IsPlayerInRegion");

	AEventRegion_IsPlayerInRegion_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AEventRegion::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.IsLocked");

	AEventRegion_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.IsLocalPlayerInRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AEventRegion::IsLocalPlayerInRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.IsLocalPlayerInRegion");

	AEventRegion_IsLocalPlayerInRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.IsComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AEventRegion::IsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.IsComplete");

	AEventRegion_IsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.IsCharacterInRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ARemnantCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AEventRegion::IsCharacterInRegion(class ARemnantCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.IsCharacterInRegion");

	AEventRegion_IsCharacterInRegion_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AEventRegion::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.IsActive");

	AEventRegion_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.HasLocalPlayerVisited
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AEventRegion::HasLocalPlayerVisited()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.HasLocalPlayerVisited");

	AEventRegion_HasLocalPlayerVisited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.GetFirstCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantCharacter* AEventRegion::GetFirstCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.GetFirstCharacter");

	AEventRegion_GetFirstCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.GetEventRegionForActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   EventRegionNameID              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AEventRegion*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AEventRegion* AEventRegion::STATIC_GetEventRegionForActor(class AActor* Actor, const struct FName& EventRegionNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.GetEventRegionForActor");

	AEventRegion_GetEventRegionForActor_Params params;
	params.Actor = Actor;
	params.EventRegionNameID = EventRegionNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<AEventRegion>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.GetEventRegionContainingActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AEventRegion*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AEventRegion* AEventRegion::STATIC_GetEventRegionContainingActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.GetEventRegionContainingActor");

	AEventRegion_GetEventRegionContainingActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<AEventRegion>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.GetCharacters
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FEventRegionCharacter> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FEventRegionCharacter> AEventRegion::GetCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.GetCharacters");

	AEventRegion_GetCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.EventRegion.End
// (Final, Native, Public, BlueprintCallable)
void AEventRegion::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.End");

	AEventRegion_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.CompleteEvent
// (Final, Native, Public, BlueprintCallable)
void AEventRegion::CompleteEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.CompleteEvent");

	AEventRegion_CompleteEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.EventRegion.Begin
// (Final, Native, Public, BlueprintCallable)
void AEventRegion::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.EventRegion.Begin");

	AEventRegion_Begin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Flashlight.ServerToggleFlashlight
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AFlashlight::ServerToggleFlashlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Flashlight.ServerToggleFlashlight");

	AFlashlight_ServerToggleFlashlight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Flashlight.OnTurnedOn
// (Event, Public, BlueprintEvent)
void AFlashlight::OnTurnedOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Flashlight.OnTurnedOn");

	AFlashlight_OnTurnedOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Flashlight.OnTurnedOff
// (Event, Public, BlueprintEvent)
void AFlashlight::OnTurnedOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Flashlight.OnTurnedOff");

	AFlashlight_OnTurnedOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Flashlight.OnEndFlash
// (Event, Public, BlueprintEvent)
void AFlashlight::OnEndFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Flashlight.OnEndFlash");

	AFlashlight_OnEndFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Flashlight.OnBeginFlash
// (Event, Public, BlueprintEvent)
void AFlashlight::OnBeginFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Flashlight.OnBeginFlash");

	AFlashlight_OnBeginFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Flashlight.LightEndOverlap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlashlight::LightEndOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Flashlight.LightEndOverlap");

	AFlashlight_LightEndOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Flashlight.LightBeginOverlap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlashlight::LightBeginOverlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Flashlight.LightBeginOverlap");

	AFlashlight_LightBeginOverlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Flashlight.ApplyChargeDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlashlight::ApplyChargeDelta(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Flashlight.ApplyChargeDelta");

	AFlashlight_ApplyChargeDelta_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.GenericItem.ValidatePickupHandled
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSpawnList              SpawnList                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInventoryComponent*     Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGenericItem::ValidatePickupHandled(const struct FSpawnList& SpawnList, class UInventoryComponent* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.GenericItem.ValidatePickupHandled");

	AGenericItem_ValidatePickupHandled_Params params;
	params.SpawnList = SpawnList;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.GenericItem.ValidateAddToInventory
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSpawnList              SpawnList                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInventoryComponent*     Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGenericItem::ValidateAddToInventory(const struct FSpawnList& SpawnList, class UInventoryComponent* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.GenericItem.ValidateAddToInventory");

	AGenericItem_ValidateAddToInventory_Params params;
	params.SpawnList = SpawnList;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.GenericItem.OnRep_CachedSpawnList
// (Final, Native, Public)
void AGenericItem::OnRep_CachedSpawnList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.GenericItem.OnRep_CachedSpawnList");

	AGenericItem_OnRep_CachedSpawnList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.GenericItem.OnFinishedItemInit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FSpawnList              DisplayEntry                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AGenericItem::OnFinishedItemInit(const struct FSpawnList& DisplayEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.GenericItem.OnFinishedItemInit");

	AGenericItem_OnFinishedItemInit_Params params;
	params.DisplayEntry = DisplayEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.GenericItem.HasMaxSpawnsForCharacter
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGenericItem::HasMaxSpawnsForCharacter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.GenericItem.HasMaxSpawnsForCharacter");

	AGenericItem_HasMaxSpawnsForCharacter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.GenericItem.HandleAward
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSpawnList              SpawnList                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInventoryComponent*     Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceNoSharing                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGenericItem::HandleAward(const struct FSpawnList& SpawnList, class UInventoryComponent* Inventory, bool bForceNoSharing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.GenericItem.HandleAward");

	AGenericItem_HandleAward_Params params;
	params.SpawnList = SpawnList;
	params.Inventory = Inventory;
	params.bForceNoSharing = bForceNoSharing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SpawnedGrenade.OnStoppedMoving
// (Event, Public, BlueprintEvent)
void ASpawnedGrenade::OnStoppedMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SpawnedGrenade.OnStoppedMoving");

	ASpawnedGrenade_OnStoppedMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SpawnedGrenade.OnRep_GrenadeRepData
// (Final, Native, Protected)
void ASpawnedGrenade::OnRep_GrenadeRepData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SpawnedGrenade.OnRep_GrenadeRepData");

	ASpawnedGrenade_OnRep_GrenadeRepData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SpawnedGrenade.OnDetonated
// (Event, Public, BlueprintEvent)
void ASpawnedGrenade::OnDetonated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SpawnedGrenade.OnDetonated");

	ASpawnedGrenade_OnDetonated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SpawnedGrenade.GetGrenadeLifeSpan
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ASpawnedGrenade::GetGrenadeLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SpawnedGrenade.GetGrenadeLifeSpan");

	ASpawnedGrenade_GetGrenadeLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.SpawnedGrenade.GetGrenadeItemCDO
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGrenade*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGrenade* ASpawnedGrenade::GetGrenadeItemCDO()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SpawnedGrenade.GetGrenadeItemCDO");

	ASpawnedGrenade_GetGrenadeItemCDO_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.SpawnedGrenade.Detonate
// (Final, Native, Public, BlueprintCallable)
void ASpawnedGrenade::Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SpawnedGrenade.Detonate");

	ASpawnedGrenade_Detonate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Grenade.ValidateUse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGrenade::ValidateUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.ValidateUse");

	AGrenade_ValidateUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Grenade.Throw
// (Final, Native, Public, BlueprintCallable)
void AGrenade::Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.Throw");

	AGrenade_Throw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Grenade.ServerThrowPressed
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize     TargetLocation                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AGrenade::ServerThrowPressed(const struct FVector_NetQuantize& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.ServerThrowPressed");

	AGrenade_ServerThrowPressed_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Grenade.ServerKeyPressed
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize     TargetLocation                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AGrenade::ServerKeyPressed(const struct FVector_NetQuantize& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.ServerKeyPressed");

	AGrenade_ServerKeyPressed_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Grenade.OnRep_State
// (Final, Native, Protected)
// Parameters:
// EGrenadeState                  PreviousState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGrenade::OnRep_State(EGrenadeState PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.OnRep_State");

	AGrenade_OnRep_State_Params params;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Grenade.MulticastThrown
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
void AGrenade::MulticastThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.MulticastThrown");

	AGrenade_MulticastThrown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Grenade.MulticastPlayThrowAnim
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
void AGrenade::MulticastPlayThrowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.MulticastPlayThrowAnim");

	AGrenade_MulticastPlayThrowAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Grenade.MulticastPlayEquipAnim
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
void AGrenade::MulticastPlayEquipAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.MulticastPlayEquipAnim");

	AGrenade_MulticastPlayEquipAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Grenade.GetTotalGrenadeLifeSpan
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGrenade::GetTotalGrenadeLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.GetTotalGrenadeLifeSpan");

	AGrenade_GetTotalGrenadeLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Grenade.GetRemainingGrenadeLifeSpan
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGrenade::GetRemainingGrenadeLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.GetRemainingGrenadeLifeSpan");

	AGrenade_GetRemainingGrenadeLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Grenade.GetRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGrenade::GetRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.GetRange");

	AGrenade_GetRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Grenade.GetDetonatesWhenStoppedMoving
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGrenade::GetDetonatesWhenStoppedMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.GetDetonatesWhenStoppedMoving");

	AGrenade_GetDetonatesWhenStoppedMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Grenade.GetDamageRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGrenade::GetDamageRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.GetDamageRadius");

	AGrenade_GetDamageRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Grenade.GetDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGrenade::GetDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.GetDamage");

	AGrenade_GetDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Grenade.CalculateGrenadePath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Thrower                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGrenade*                GrenadeItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 StartLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 StartVelocity                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SimulationTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPredictProjectilePathPointData> OutPath                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            OutNumBounces                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGrenade::STATIC_CalculateGrenadePath(class AActor* Projectile, class AActor* Thrower, class AGrenade* GrenadeItem, const struct FVector& StartLocation, const struct FVector& StartVelocity, float SimulationTime, TArray<struct FPredictProjectilePathPointData>* OutPath, int* OutNumBounces)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Grenade.CalculateGrenadePath");

	AGrenade_CalculateGrenadePath_Params params;
	params.Projectile = Projectile;
	params.Thrower = Thrower;
	params.GrenadeItem = GrenadeItem;
	params.StartLocation = StartLocation;
	params.StartVelocity = StartVelocity;
	params.SimulationTime = SimulationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<AGrenade>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPath != nullptr)
		*OutPath = params.OutPath;
	if (OutNumBounces != nullptr)
		*OutNumBounces = params.OutNumBounces;

}


// Function Remnant.LootContainer.OnSpawnListLoaded
// (Final, Native, Protected)
void ALootContainer::OnSpawnListLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.LootContainer.OnSpawnListLoaded");

	ALootContainer_OnSpawnListLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.LootContainer.Generate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USpawnTable*             SpawnTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           SpawnTags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ALootContainer::Generate(class USpawnTable* SpawnTable, TArray<struct FName> SpawnTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.LootContainer.Generate");

	ALootContainer_Generate_Params params;
	params.SpawnTable = SpawnTable;
	params.SpawnTags = SpawnTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.LootContainer.ClearItems
// (Final, Native, Public, BlueprintCallable)
void ALootContainer::ClearItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.LootContainer.ClearItems");

	ALootContainer_ClearItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.LoreItem.LoreNotify
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLorePage               Page                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void ALoreItem::STATIC_LoreNotify(class UObject* WorldContextObject, const struct FLorePage& Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.LoreItem.LoreNotify");

	ALoreItem_LoreNotify_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Page = Page;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ALoreItem>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.UpdateSession
// (Final, Native, Public, BlueprintCallable)
void UMatchmaker::UpdateSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.UpdateSession");

	UMatchmaker_UpdateSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.UpdateJoinability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isJoinable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaker::UpdateJoinability(bool isJoinable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.UpdateJoinability");

	UMatchmaker_UpdateJoinability_Params params;
	params.isJoinable = isJoinable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.StartSession
// (Final, Native, Public, BlueprintCallable)
void UMatchmaker::StartSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.StartSession");

	UMatchmaker_StartSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.ShowSessionGamertagInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult SessionInfo                    (Parm, NativeAccessSpecifierPublic)
void UMatchmaker::ShowSessionGamertagInfo(const struct FBlueprintSessionResult& SessionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.ShowSessionGamertagInfo");

	UMatchmaker_ShowSessionGamertagInfo_Params params;
	params.SessionInfo = SessionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.SetSessionJoinability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isJoinable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaker::SetSessionJoinability(bool isJoinable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.SetSessionJoinability");

	UMatchmaker_SetSessionJoinability_Params params;
	params.isJoinable = isJoinable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.RejoinLastSession
// (Final, Native, Public, BlueprintCallable)
void UMatchmaker::RejoinLastSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.RejoinLastSession");

	UMatchmaker_RejoinLastSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.OnShowQueuedMatchmakingEventMessages
// (Final, Native, Protected)
void UMatchmaker::OnShowQueuedMatchmakingEventMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.OnShowQueuedMatchmakingEventMessages");

	UMatchmaker_OnShowQueuedMatchmakingEventMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.OnSessionEndedEvent
// (Final, Native, Protected)
void UMatchmaker::OnSessionEndedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.OnSessionEndedEvent");

	UMatchmaker_OnSessionEndedEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.OnPlayerNameChanged
// (Final, Native, Protected)
void UMatchmaker::OnPlayerNameChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.OnPlayerNameChanged");

	UMatchmaker_OnPlayerNameChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.OnMainMenuLoaded
// (Final, Native, Protected)
void UMatchmaker::OnMainMenuLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.OnMainMenuLoaded");

	UMatchmaker_OnMainMenuLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.KickPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Banned                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaker::KickPlayer(class APlayerController* PlayerController, bool Banned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.KickPlayer");

	UMatchmaker_KickPlayer_Params params;
	params.PlayerController = PlayerController;
	params.Banned = Banned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.JoinSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMatchmaker::JoinSession(const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.JoinSession");

	UMatchmaker_JoinSession_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.IsSessionJoinable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::IsSessionJoinable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.IsSessionJoinable");

	UMatchmaker_IsSessionJoinable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.IsPresenceJoinURLValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::IsPresenceJoinURLValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.IsPresenceJoinURLValid");

	UMatchmaker_IsPresenceJoinURLValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.IsOnline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::IsOnline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.IsOnline");

	UMatchmaker_IsOnline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.IsLocalCharacterSurvival
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::IsLocalCharacterSurvival()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.IsLocalCharacterSurvival");

	UMatchmaker_IsLocalCharacterSurvival_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.IsLocalCharacterHardcore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::IsLocalCharacterHardcore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.IsLocalCharacterHardcore");

	UMatchmaker_IsLocalCharacterHardcore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.IsJoiningSession
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::IsJoiningSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.IsJoiningSession");

	UMatchmaker_IsJoiningSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.IsFindingSessions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::IsFindingSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.IsFindingSessions");

	UMatchmaker_IsFindingSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.InviteFriend
// (Final, Native, Public, BlueprintCallable)
void UMatchmaker::InviteFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.InviteFriend");

	UMatchmaker_InviteFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaker::Init(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.Init");

	UMatchmaker_Init_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.GetSessionStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMatchmaker::GetSessionStateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.GetSessionStateName");

	UMatchmaker_GetSessionStateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.GetSessionDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult Session                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSessionDetails         ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FSessionDetails UMatchmaker::GetSessionDetails(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.GetSessionDetails");

	UMatchmaker_GetSessionDetails_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.GetMatchmakerInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMatchmaker*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMatchmaker* UMatchmaker::STATIC_GetMatchmakerInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.GetMatchmakerInstance");

	UMatchmaker_GetMatchmakerInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UMatchmaker>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.GetCurrentSessionDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMatchmaker::GetCurrentSessionDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.GetCurrentSessionDisplay");

	UMatchmaker_GetCurrentSessionDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.EndFindSessions
// (Final, Native, Public, BlueprintCallable)
void UMatchmaker::EndFindSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.EndFindSessions");

	UMatchmaker_EndFindSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.DestroySession
// (Final, Native, Public, BlueprintCallable)
void UMatchmaker::DestroySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.DestroySession");

	UMatchmaker_DestroySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.CreateSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESessionType                   SessionType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           DisableJoinability             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaker::CreateSession(ESessionType SessionType, bool DisableJoinability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.CreateSession");

	UMatchmaker_CreateSession_Params params;
	params.SessionType = SessionType;
	params.DisableJoinability = DisableJoinability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.ChangeSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESessionType                   NewSessionType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaker::ChangeSession(ESessionType NewSessionType, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.ChangeSession");

	UMatchmaker_ChangeSession_Params params;
	params.NewSessionType = NewSessionType;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.CanRejoinLastSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::CanRejoinLastSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.CanRejoinLastSession");

	UMatchmaker_CanRejoinLastSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.CanJoinSessionGameMode
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult Session                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::CanJoinSessionGameMode(class UObject* WorldContextObject, const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.CanJoinSessionGameMode");

	UMatchmaker_CanJoinSessionGameMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Session = Session;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.CanChangeSessiontype
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMatchmaker::CanChangeSessiontype()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.CanChangeSessiontype");

	UMatchmaker_CanChangeSessiontype_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.Matchmaker.BeginJoinPublicGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELastSearchType                SearchType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmaker::BeginJoinPublicGame(ELastSearchType SearchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.BeginJoinPublicGame");

	UMatchmaker_BeginJoinPublicGame_Params params;
	params.SearchType = SearchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.Matchmaker.BeginFindSessions
// (Final, Native, Public, BlueprintCallable)
void UMatchmaker::BeginFindSessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.Matchmaker.BeginFindSessions");

	UMatchmaker_BeginFindSessions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.MatchmakerListenerInterface.OnSessionStarted
// (Event, Public, BlueprintEvent)
void UMatchmakerListenerInterface::OnSessionStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.MatchmakerListenerInterface.OnSessionStarted");

	UMatchmakerListenerInterface_OnSessionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.MatchmakerListenerInterface.OnSessionsFound
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Sessions                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMatchmakerListenerInterface::OnSessionsFound(TArray<struct FBlueprintSessionResult> Sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.MatchmakerListenerInterface.OnSessionsFound");

	UMatchmakerListenerInterface_OnSessionsFound_Params params;
	params.Sessions = Sessions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.MatchmakerListenerInterface.OnSessionJoined
// (Event, Public, BlueprintEvent)
void UMatchmakerListenerInterface::OnSessionJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.MatchmakerListenerInterface.OnSessionJoined");

	UMatchmakerListenerInterface_OnSessionJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.MatchmakerListenerInterface.OnSessionFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchmakerListenerInterface::OnSessionFailed(const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.MatchmakerListenerInterface.OnSessionFailed");

	UMatchmakerListenerInterface_OnSessionFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.MatchmakerListenerInterface.OnSessionEnded
// (Event, Public, BlueprintEvent)
void UMatchmakerListenerInterface::OnSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.MatchmakerListenerInterface.OnSessionEnded");

	UMatchmakerListenerInterface_OnSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.MatchmakerListenerInterface.OnSessionCreated
// (Event, Public, BlueprintEvent)
void UMatchmakerListenerInterface::OnSessionCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.MatchmakerListenerInterface.OnSessionCreated");

	UMatchmakerListenerInterface_OnSessionCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.PlayerStateRemnant.SetIsLocalPlayerTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsTarget                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayerStateRemnant::SetIsLocalPlayerTarget(bool IsTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.PlayerStateRemnant.SetIsLocalPlayerTarget");

	APlayerStateRemnant_SetIsLocalPlayerTarget_Params params;
	params.IsTarget = IsTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.PlayerStateRemnant.ServerSetChatRestricted
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           ChatRestricted                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayerStateRemnant::ServerSetChatRestricted(bool ChatRestricted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.PlayerStateRemnant.ServerSetChatRestricted");

	APlayerStateRemnant_ServerSetChatRestricted_Params params;
	params.ChatRestricted = ChatRestricted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.PlayerStateRemnant.OnRep_Traveling
// (Final, Native, Public)
void APlayerStateRemnant::OnRep_Traveling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.PlayerStateRemnant.OnRep_Traveling");

	APlayerStateRemnant_OnRep_Traveling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.PlayerStateRemnant.OnRep_ChatRestricted
// (Final, Native, Public)
void APlayerStateRemnant::OnRep_ChatRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.PlayerStateRemnant.OnRep_ChatRestricted");

	APlayerStateRemnant_OnRep_ChatRestricted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.PlayerStateRemnant.IsTraveling
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APlayerStateRemnant::IsTraveling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.PlayerStateRemnant.IsTraveling");

	APlayerStateRemnant_IsTraveling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.PlayerStateRemnant.IsChatRestricted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APlayerStateRemnant::IsChatRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.PlayerStateRemnant.IsChatRestricted");

	APlayerStateRemnant_IsChatRestricted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.QuestTrigger.IsLocalPlayerInRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AQuestTrigger::IsLocalPlayerInRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.QuestTrigger.IsLocalPlayerInRegion");

	AQuestTrigger_IsLocalPlayerInRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.QuestTrigger.GetTriggerVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATriggerVolume*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATriggerVolume* AQuestTrigger::GetTriggerVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.QuestTrigger.GetTriggerVolume");

	AQuestTrigger_GetTriggerVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.QuestTrigger.GetCharacters
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ARemnantCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ARemnantCharacter*> AQuestTrigger::GetCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.QuestTrigger.GetCharacters");

	AQuestTrigger_GetCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RasterWidgetComponent.GetWidgetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* URasterWidgetComponent::GetWidgetTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RasterWidgetComponent.GetWidgetTexture");

	URasterWidgetComponent_GetWidgetTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RasterWidgetComponent.ForceRedraw
// (Final, Native, Public, BlueprintCallable)
void URasterWidgetComponent::ForceRedraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RasterWidgetComponent.ForceRedraw");

	URasterWidgetComponent_ForceRedraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RasterWidgetComponent.CreateWidgetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   MaterialTextureName            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* URasterWidgetComponent::CreateWidgetMaterial(class UPrimitiveComponent* Primitive, class UMaterialInterface* SourceMaterial, const struct FName& MaterialTextureName, int ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RasterWidgetComponent.CreateWidgetMaterial");

	URasterWidgetComponent_CreateWidgetMaterial_Params params;
	params.Primitive = Primitive;
	params.SourceMaterial = SourceMaterial;
	params.MaterialTextureName = MaterialTextureName;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantRangedWeapon.UseMod
// (Final, Native, Protected, BlueprintCallable)
void ARemnantRangedWeapon::UseMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.UseMod");

	ARemnantRangedWeapon_UseMod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.UseCharge
// (Native, Public, BlueprintCallable)
void ARemnantRangedWeapon::UseCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.UseCharge");

	ARemnantRangedWeapon_UseCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.UseAllCharges
// (Native, Public, BlueprintCallable)
void ARemnantRangedWeapon::UseAllCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.UseAllCharges");

	ARemnantRangedWeapon_UseAllCharges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.ShouldModCancelUse
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantRangedWeapon::ShouldModCancelUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.ShouldModCancelUse");

	ARemnantRangedWeapon_ShouldModCancelUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantRangedWeapon.SetModActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EModActiveState                ModState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ActionID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceNotify                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantRangedWeapon::SetModActive(EModActiveState ModState, int ActionID, bool bForceNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.SetModActive");

	ARemnantRangedWeapon_SetModActive_Params params;
	params.ModState = ModState;
	params.ActionID = ActionID;
	params.bForceNotify = bForceNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.ServerUseWithAim
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize     AimOrigin                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize     AimEnd                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ARemnantRangedWeapon::ServerUseWithAim(const struct FVector_NetQuantize& AimOrigin, const struct FVector_NetQuantize& AimEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.ServerUseWithAim");

	ARemnantRangedWeapon_ServerUseWithAim_Params params;
	params.AimOrigin = AimOrigin;
	params.AimEnd = AimEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.ServerUse
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ARemnantRangedWeapon::ServerUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.ServerUse");

	ARemnantRangedWeapon_ServerUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnRep_Power
// (Final, Native, Protected)
void ARemnantRangedWeapon::OnRep_Power()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnRep_Power");

	ARemnantRangedWeapon_OnRep_Power_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnRep_ModActive
// (Final, Native, Protected)
void ARemnantRangedWeapon::OnRep_ModActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnRep_ModActive");

	ARemnantRangedWeapon_OnRep_ModActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnRep_Charges
// (Final, Native, Protected)
void ARemnantRangedWeapon::OnRep_Charges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnRep_Charges");

	ARemnantRangedWeapon_OnRep_Charges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnFinishWeaponModeAnimation
// (Final, Native, Protected)
void ARemnantRangedWeapon::OnFinishWeaponModeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnFinishWeaponModeAnimation");

	ARemnantRangedWeapon_OnFinishWeaponModeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnFinishUseState
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   StateName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   PreviousStateName              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantRangedWeapon::OnFinishUseState(const struct FName& StateName, const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnFinishUseState");

	ARemnantRangedWeapon_OnFinishUseState_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnFinishUseAnimation
// (Final, Native, Protected)
void ARemnantRangedWeapon::OnFinishUseAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnFinishUseAnimation");

	ARemnantRangedWeapon_OnFinishUseAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnAltFireReleased
// (Final, Native, Protected)
void ARemnantRangedWeapon::OnAltFireReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnAltFireReleased");

	ARemnantRangedWeapon_OnAltFireReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnAltFirePressed
// (Final, Native, Protected)
void ARemnantRangedWeapon::OnAltFirePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnAltFirePressed");

	ARemnantRangedWeapon_OnAltFirePressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnActivateSecondary
// (Native, Event, Protected, BlueprintEvent)
void ARemnantRangedWeapon::OnActivateSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnActivateSecondary");

	ARemnantRangedWeapon_OnActivateSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnActivate
// (Native, Event, Protected, BlueprintEvent)
void ARemnantRangedWeapon::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnActivate");

	ARemnantRangedWeapon_OnActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.OnActionRemoved
// (Final, Native, Protected)
// Parameters:
// class UActionBase*             Action                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantRangedWeapon::OnActionRemoved(class UActionBase* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.OnActionRemoved");

	ARemnantRangedWeapon_OnActionRemoved_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.MulticastUse
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
void ARemnantRangedWeapon::MulticastUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.MulticastUse");

	ARemnantRangedWeapon_MulticastUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantRangedWeapon.IsModActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantRangedWeapon::IsModActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.IsModActive");

	ARemnantRangedWeapon_IsModActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantRangedWeapon.GetWeaponMod
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ARemnantWeaponMod*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantWeaponMod* ARemnantRangedWeapon::GetWeaponMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.GetWeaponMod");

	ARemnantRangedWeapon_GetWeaponMod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantRangedWeapon.GetPower
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ARemnantRangedWeapon::GetPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.GetPower");

	ARemnantRangedWeapon_GetPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantRangedWeapon.GetModActiveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EModActiveState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EModActiveState ARemnantRangedWeapon::GetModActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.GetModActiveState");

	ARemnantRangedWeapon_GetModActiveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantRangedWeapon.GetModActiveRemainingPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ARemnantRangedWeapon::GetModActiveRemainingPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.GetModActiveRemainingPct");

	ARemnantRangedWeapon_GetModActiveRemainingPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantRangedWeapon.GetCharges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ARemnantRangedWeapon::GetCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.GetCharges");

	ARemnantRangedWeapon_GetCharges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantRangedWeapon.DelayedDeactivate
// (Final, Native, Protected)
void ARemnantRangedWeapon::DelayedDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantRangedWeapon.DelayedDeactivate");

	ARemnantRangedWeapon_DelayedDeactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantBeamWeapon.SetBeamFiring_Server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           Firing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantBeamWeapon::SetBeamFiring_Server(bool Firing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantBeamWeapon.SetBeamFiring_Server");

	ARemnantBeamWeapon_SetBeamFiring_Server_Params params;
	params.Firing = Firing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantBeamWeapon.OnRep_BeamFiring
// (Final, Native, Public)
void ARemnantBeamWeapon::OnRep_BeamFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantBeamWeapon.OnRep_BeamFiring");

	ARemnantBeamWeapon_OnRep_BeamFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantBeamWeapon.OnEndBeamFX
// (Native, Event, Public, BlueprintEvent)
void ARemnantBeamWeapon::OnEndBeamFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantBeamWeapon.OnEndBeamFX");

	ARemnantBeamWeapon_OnEndBeamFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantBeamWeapon.OnBeginBeamFX
// (Native, Event, Public, BlueprintEvent)
void ARemnantBeamWeapon::OnBeginBeamFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantBeamWeapon.OnBeginBeamFX");

	ARemnantBeamWeapon_OnBeginBeamFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantBeamWeapon.IsBeamFiring
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantBeamWeapon::IsBeamFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantBeamWeapon.IsBeamFiring");

	ARemnantBeamWeapon_IsBeamFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.UpdatePlayerInfoTag
// (Final, Native, Public)
void ARemnantCharacter::UpdatePlayerInfoTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.UpdatePlayerInfoTag");

	ARemnantCharacter_UpdatePlayerInfoTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.UpdatePersistentBuffs
// (Final, Native, Public, BlueprintCallable)
void ARemnantCharacter::UpdatePersistentBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.UpdatePersistentBuffs");

	ARemnantCharacter_UpdatePersistentBuffs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.TeleportToSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SpawnPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::TeleportToSpawnPoint(class AActor* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.TeleportToSpawnPoint");

	ARemnantCharacter_TeleportToSpawnPoint_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.SetSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASpawnPoint*             SpawnPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::SetSpawnPoint(class ASpawnPoint* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.SetSpawnPoint");

	ARemnantCharacter_SetSpawnPoint_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.SetOldController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantPlayerController* PreviousController             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::SetOldController(class ARemnantPlayerController* PreviousController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.SetOldController");

	ARemnantCharacter_SetOldController_Params params;
	params.PreviousController = PreviousController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.SetHelmetShown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::SetHelmetShown(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.SetHelmetShown");

	ARemnantCharacter_SetHelmetShown_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.SetGrabbedCheckpoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACheckpoint*             NewCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::SetGrabbedCheckpoint(class ACheckpoint* NewCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.SetGrabbedCheckpoint");

	ARemnantCharacter_SetGrabbedCheckpoint_Params params;
	params.NewCheckpoint = NewCheckpoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.SetDeactivated
// (Final, Native, Public, BlueprintCallable)
void ARemnantCharacter::SetDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.SetDeactivated");

	ARemnantCharacter_SetDeactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.ServerSetHelmetShown
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::ServerSetHelmetShown(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ServerSetHelmetShown");

	ARemnantCharacter_ServerSetHelmetShown_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.ResetAmmoInClip
// (Native, Public, BlueprintCallable)
void ARemnantCharacter::ResetAmmoInClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ResetAmmoInClip");

	ARemnantCharacter_ResetAmmoInClip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.RemovePersistentBuff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActionBuff*             Buff                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::RemovePersistentBuff(class UActionBuff* Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.RemovePersistentBuff");

	ARemnantCharacter_RemovePersistentBuff_Params params;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.OnShowHelmetOptionChanged
// (Final, Native, Protected)
// Parameters:
// class UUserSetting*            AppliedSetting                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameUserSettingsGunfire* UserSettings                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::OnShowHelmetOptionChanged(class UUserSetting* AppliedSetting, class UGameUserSettingsGunfire* UserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.OnShowHelmetOptionChanged");

	ARemnantCharacter_OnShowHelmetOptionChanged_Params params;
	params.AppliedSetting = AppliedSetting;
	params.UserSettings = UserSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.OnRespawnAfterDeath
// (Event, Public, BlueprintEvent)
void ARemnantCharacter::OnRespawnAfterDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.OnRespawnAfterDeath");

	ARemnantCharacter_OnRespawnAfterDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.OnRep_ShowHelmet
// (Final, Native, Protected)
void ARemnantCharacter::OnRep_ShowHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.OnRep_ShowHelmet");

	ARemnantCharacter_OnRep_ShowHelmet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.OnRep_GrabbedCheckpoint
// (Final, Native, Protected)
// Parameters:
// class ACheckpoint*             Previous                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::OnRep_GrabbedCheckpoint(class ACheckpoint* Previous)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.OnRep_GrabbedCheckpoint");

	ARemnantCharacter_OnRep_GrabbedCheckpoint_Params params;
	params.Previous = Previous;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.OnRep_Deactivated
// (Final, Native, Protected)
void ARemnantCharacter::OnRep_Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.OnRep_Deactivated");

	ARemnantCharacter_OnRep_Deactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.OnCharacterDied
// (Final, Native, Public)
// Parameters:
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACharacterGunfire*       Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Cause                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::OnCharacterDied(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.OnCharacterDied");

	ARemnantCharacter_OnCharacterDied_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.IsReviving
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantCharacter::IsReviving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.IsReviving");

	ARemnantCharacter_IsReviving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantCharacter::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.IsDead");

	ARemnantCharacter_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.InitializePersistentBuffs
// (Final, Native, Public, BlueprintCallable)
void ARemnantCharacter::InitializePersistentBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.InitializePersistentBuffs");

	ARemnantCharacter_InitializePersistentBuffs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.GetOldController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ARemnantPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantPlayerController* ARemnantCharacter::GetOldController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.GetOldController");

	ARemnantCharacter_GetOldController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.GetCurrentRangedWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ARangedWeapon*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARangedWeapon* ARemnantCharacter::GetCurrentRangedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.GetCurrentRangedWeapon");

	ARemnantCharacter_GetCurrentRangedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.GetCharacterInfo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class USavedCharacter*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USavedCharacter* ARemnantCharacter::GetCharacterInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.GetCharacterInfo");

	ARemnantCharacter_GetCharacterInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.GetAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ARemnantCharacter::GetAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.GetAge");

	ARemnantCharacter_GetAge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.ComputePowerLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ARemnantCharacter::ComputePowerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ComputePowerLevel");

	ARemnantCharacter_ComputePowerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.ComputeOffenseLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ARemnantCharacter::ComputeOffenseLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ComputeOffenseLevel");

	ARemnantCharacter_ComputeOffenseLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.ComputeDefenseLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ARemnantCharacter::ComputeDefenseLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ComputeDefenseLevel");

	ARemnantCharacter_ComputeDefenseLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacter.ClientTeleportToSpawnPoint
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class ASpawnPoint*             SpawnPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::ClientTeleportToSpawnPoint(class ASpawnPoint* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ClientTeleportToSpawnPoint");

	ARemnantCharacter_ClientTeleportToSpawnPoint_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.ClientTeleport
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ARemnantCharacter::ClientTeleport(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ClientTeleport");

	ARemnantCharacter_ClientTeleport_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.ClientSetSpawnPoint
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FPersistenceKey         SpawnPointID                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ARemnantCharacter::ClientSetSpawnPoint(const struct FPersistenceKey& SpawnPointID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ClientSetSpawnPoint");

	ARemnantCharacter_ClientSetSpawnPoint_Params params;
	params.SpawnPointID = SpawnPointID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.ClientRemoveAllPings
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
void ARemnantCharacter::ClientRemoveAllPings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.ClientRemoveAllPings");

	ARemnantCharacter_ClientRemoveAllPings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCharacter.AddPersistentBuff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActionBuff*             Buff                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantCharacter::AddPersistentBuff(class UActionBuff* Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacter.AddPersistentBuff");

	ARemnantCharacter_AddPersistentBuff_Params params;
	params.Buff = Buff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SavedCharacter.SetSkipIntro
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldSkipIntro                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USavedCharacter::SetSkipIntro(bool ShouldSkipIntro)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SavedCharacter.SetSkipIntro");

	USavedCharacter_SetSkipIntro_Params params;
	params.ShouldSkipIntro = ShouldSkipIntro;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SavedCharacter.SetKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USavedCharacter::SetKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SavedCharacter.SetKey");

	USavedCharacter_SetKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SavedCharacter.SetCharacterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERemnantCharacterType          NewCharacterType               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USavedCharacter::SetCharacterType(ERemnantCharacterType NewCharacterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SavedCharacter.SetCharacterType");

	USavedCharacter_SetCharacterType_Params params;
	params.NewCharacterType = NewCharacterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SavedCharacter.MarkValidExit
// (Final, Native, Public, BlueprintCallable)
void USavedCharacter::MarkValidExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SavedCharacter.MarkValidExit");

	USavedCharacter_MarkValidExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SavedCharacter.IncrementCounter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Counter                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USavedCharacter::IncrementCounter(const struct FName& Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SavedCharacter.IncrementCounter");

	USavedCharacter_IncrementCounter_Params params;
	params.Counter = Counter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SavedCharacter.HasKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USavedCharacter::HasKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SavedCharacter.HasKey");

	USavedCharacter_HasKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.SavedCharacter.GetCounter
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Counter                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USavedCharacter::GetCounter(const struct FName& Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SavedCharacter.GetCounter");

	USavedCharacter_GetCounter_Params params;
	params.Counter = Counter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.SavedCharacter.CheckForInvalidExit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USavedCharacter::CheckForInvalidExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SavedCharacter.CheckForInvalidExit");

	USavedCharacter_CheckForInvalidExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantSaveGameProfile.UpdateAccountCurrency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  CurrencyType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantSaveGameProfile::UpdateAccountCurrency(class UClass* CurrencyType, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSaveGameProfile.UpdateAccountCurrency");

	URemnantSaveGameProfile_UpdateAccountCurrency_Params params;
	params.CurrencyType = CurrencyType;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantSaveGameProfile.GetAccountCurrencyForItemType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  CurrencyType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantSaveGameProfile::GetAccountCurrencyForItemType(class UClass* CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSaveGameProfile.GetAccountCurrencyForItemType");

	URemnantSaveGameProfile_GetAccountCurrencyForItemType_Params params;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.ShouldAwardHardcoreRewards
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::STATIC_ShouldAwardHardcoreRewards(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.ShouldAwardHardcoreRewards");

	URemnantCharacterManager_ShouldAwardHardcoreRewards_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantCharacterManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.SetActiveCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::SetActiveCharacter(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.SetActiveCharacter");

	URemnantCharacterManager_SetActiveCharacter_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.RestoreCharacters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::RestoreCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.RestoreCharacters");

	URemnantCharacterManager_RestoreCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.ResolvePendingExit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::ResolvePendingExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.ResolvePendingExit");

	URemnantCharacterManager_ResolvePendingExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.IsHardcore
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::STATIC_IsHardcore(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.IsHardcore");

	URemnantCharacterManager_IsHardcore_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantCharacterManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.IsDeceasedCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::STATIC_IsDeceasedCharacter(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.IsDeceasedCharacter");

	URemnantCharacterManager_IsDeceasedCharacter_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantCharacterManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.HasBackupCharacters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::HasBackupCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.HasBackupCharacters");

	URemnantCharacterManager_HasBackupCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.HasActiveCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::HasActiveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.HasActiveCharacter");

	URemnantCharacterManager_HasActiveCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetTransientCharacters
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class USavedCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class USavedCharacter*> URemnantCharacterManager::GetTransientCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetTransientCharacters");

	URemnantCharacterManager_GetTransientCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetMaxCharacterCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantCharacterManager::GetMaxCharacterCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetMaxCharacterCount");

	URemnantCharacterManager_GetMaxCharacterCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetCharacters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class USavedCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class USavedCharacter*> URemnantCharacterManager::GetCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetCharacters");

	URemnantCharacterManager_GetCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetCharacterManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URemnantCharacterManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantCharacterManager* URemnantCharacterManager::STATIC_GetCharacterManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetCharacterManager");

	URemnantCharacterManager_GetCharacterManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantCharacterManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetCharacterInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USavedCharacter*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USavedCharacter* URemnantCharacterManager::GetCharacterInfo(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetCharacterInfo");

	URemnantCharacterManager_GetCharacterInfo_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetCharacterCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantCharacterManager::GetCharacterCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetCharacterCount");

	URemnantCharacterManager_GetCharacterCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetCharacterAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USavedCharacter*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USavedCharacter* URemnantCharacterManager::GetCharacterAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetCharacterAt");

	URemnantCharacterManager_GetCharacterAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USavedCharacter*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USavedCharacter* URemnantCharacterManager::GetCharacter(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetCharacter");

	URemnantCharacterManager_GetCharacter_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.GetActiveEquipmentVisuals
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USavedCharacter*         CharacterInfo                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>          OutVisuals                     (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<unsigned char>          OutLevels                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UClass*>          OutSkins                       (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
void URemnantCharacterManager::GetActiveEquipmentVisuals(class USavedCharacter* CharacterInfo, TArray<class UClass*>* OutVisuals, TArray<unsigned char>* OutLevels, TArray<class UClass*>* OutSkins)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetActiveEquipmentVisuals");

	URemnantCharacterManager_GetActiveEquipmentVisuals_Params params;
	params.CharacterInfo = CharacterInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVisuals != nullptr)
		*OutVisuals = params.OutVisuals;
	if (OutLevels != nullptr)
		*OutLevels = params.OutLevels;
	if (OutSkins != nullptr)
		*OutSkins = params.OutSkins;

}


// Function Remnant.RemnantCharacterManager.GetActiveCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USavedCharacter*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USavedCharacter* URemnantCharacterManager::GetActiveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.GetActiveCharacter");

	URemnantCharacterManager_GetActiveCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.DeleteTransientCharacters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::DeleteTransientCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.DeleteTransientCharacters");

	URemnantCharacterManager_DeleteTransientCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.DeleteTransientCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::DeleteTransientCharacter(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.DeleteTransientCharacter");

	URemnantCharacterManager_DeleteTransientCharacter_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.DeleteCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantCharacterManager::DeleteCharacter(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.DeleteCharacter");

	URemnantCharacterManager_DeleteCharacter_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.CreateTransientCharacter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  SaveGameClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ErrorCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SetActive                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ERemnantCharacterType          CharacterType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShouldSkipIntro                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartingDifficulty             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USavedCharacter*         ReferenceCharacter             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>          AllowedAccountAwards           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// class USavedCharacter*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USavedCharacter* URemnantCharacterManager::CreateTransientCharacter(const struct FString& Name, class UClass* SaveGameClass, int* ErrorCode, bool SetActive, ERemnantCharacterType CharacterType, bool ShouldSkipIntro, int StartingDifficulty, class USavedCharacter* ReferenceCharacter, TArray<class UClass*> AllowedAccountAwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.CreateTransientCharacter");

	URemnantCharacterManager_CreateTransientCharacter_Params params;
	params.Name = Name;
	params.SaveGameClass = SaveGameClass;
	params.SetActive = SetActive;
	params.CharacterType = CharacterType;
	params.ShouldSkipIntro = ShouldSkipIntro;
	params.StartingDifficulty = StartingDifficulty;
	params.ReferenceCharacter = ReferenceCharacter;
	params.AllowedAccountAwards = AllowedAccountAwards;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ErrorCode != nullptr)
		*ErrorCode = params.ErrorCode;


	return params.ReturnValue;
}


// Function Remnant.RemnantCharacterManager.CreateCharacter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  SaveGameClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ErrorCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SetActive                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ERemnantCharacterType          CharacterType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShouldSkipIntro                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartingDifficulty             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USavedCharacter*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USavedCharacter* URemnantCharacterManager::CreateCharacter(const struct FString& Name, class UClass* SaveGameClass, int* ErrorCode, bool SetActive, ERemnantCharacterType CharacterType, bool ShouldSkipIntro, int StartingDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCharacterManager.CreateCharacter");

	URemnantCharacterManager_CreateCharacter_Params params;
	params.Name = Name;
	params.SaveGameClass = SaveGameClass;
	params.SetActive = SetActive;
	params.CharacterType = CharacterType;
	params.ShouldSkipIntro = ShouldSkipIntro;
	params.StartingDifficulty = StartingDifficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ErrorCode != nullptr)
		*ErrorCode = params.ErrorCode;


	return params.ReturnValue;
}


// Function Remnant.RemnantCheatManager.UnlockAllWaypoints
// (Final, Exec, Native, Private)
void URemnantCheatManager::UnlockAllWaypoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.UnlockAllWaypoints");

	URemnantCheatManager_UnlockAllWaypoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.UnlockAllEmotes
// (Final, Exec, Native, Private)
void URemnantCheatManager::UnlockAllEmotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.UnlockAllEmotes");

	URemnantCheatManager_UnlockAllEmotes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.TravelToQuest
// (Final, Exec, Native, Private)
// Parameters:
// struct FString                 QuestName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ComponentName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantCheatManager::TravelToQuest(const struct FString& QuestName, const struct FString& ComponentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.TravelToQuest");

	URemnantCheatManager_TravelToQuest_Params params;
	params.QuestName = QuestName;
	params.ComponentName = ComponentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.ToggleShowBlood
// (Final, Exec, Native, Private)
void URemnantCheatManager::ToggleShowBlood()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.ToggleShowBlood");

	URemnantCheatManager_ToggleShowBlood_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.ToggleFogOfWar
// (Final, Exec, Native, Private)
void URemnantCheatManager::ToggleFogOfWar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.ToggleFogOfWar");

	URemnantCheatManager_ToggleFogOfWar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.ToggleDLC
// (Exec, Native, Public)
// Parameters:
// ELicensedContent               License                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantCheatManager::ToggleDLC(ELicensedContent License)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.ToggleDLC");

	URemnantCheatManager_ToggleDLC_Params params;
	params.License = License;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.SpawnDebugQuest
// (Exec, Native, Public)
// Parameters:
// struct FString                 NameOfBP                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantCheatManager::SpawnDebugQuest(const struct FString& NameOfBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.SpawnDebugQuest");

	URemnantCheatManager_SpawnDebugQuest_Params params;
	params.NameOfBP = NameOfBP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.ShowMatchmakingPowerLevel
// (Final, Exec, Native, Public)
void URemnantCheatManager::ShowMatchmakingPowerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.ShowMatchmakingPowerLevel");

	URemnantCheatManager_ShowMatchmakingPowerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.SetDifficulty
// (Exec, Native, Public)
// Parameters:
// int                            Difficulty                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantCheatManager::SetDifficulty(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.SetDifficulty");

	URemnantCheatManager_SetDifficulty_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.RaiseDifficulty
// (Exec, Native, Public)
void URemnantCheatManager::RaiseDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.RaiseDifficulty");

	URemnantCheatManager_RaiseDifficulty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.LowerDifficulty
// (Exec, Native, Public)
void URemnantCheatManager::LowerDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.LowerDifficulty");

	URemnantCheatManager_LowerDifficulty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.Joinability
// (Exec, Native, Public)
// Parameters:
// bool                           isJoinable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantCheatManager::Joinability(bool isJoinable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.Joinability");

	URemnantCheatManager_Joinability_Params params;
	params.isJoinable = isJoinable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.GiveAccountAward
// (Final, Exec, Native, Private)
// Parameters:
// struct FString                 NameOfBP                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantCheatManager::GiveAccountAward(const struct FString& NameOfBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.GiveAccountAward");

	URemnantCheatManager_GiveAccountAward_Params params;
	params.NameOfBP = NameOfBP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.AddScrap
// (Final, Exec, Native, Private)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantCheatManager::AddScrap(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.AddScrap");

	URemnantCheatManager_AddScrap_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantCheatManager.AddExperience
// (Final, Exec, Native, Private)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantCheatManager::AddExperience(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantCheatManager.AddExperience");

	URemnantCheatManager_AddExperience_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantFogOfWarComponent.UpdateMaterial
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstance               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSetMask                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ScaleOverride                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantFogOfWarComponent::UpdateMaterial(class UMaterialInstanceDynamic* MaterialInstance, const struct FVector& WorldLocation, bool bSetMask, float ScaleOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantFogOfWarComponent.UpdateMaterial");

	URemnantFogOfWarComponent_UpdateMaterial_Params params;
	params.MaterialInstance = MaterialInstance;
	params.WorldLocation = WorldLocation;
	params.bSetMask = bSetMask;
	params.ScaleOverride = ScaleOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantFogOfWarComponent.SetDebugLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantFogOfWarComponent::SetDebugLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantFogOfWarComponent.SetDebugLocation");

	URemnantFogOfWarComponent_SetDebugLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantFogOfWarComponent.LockToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantFogOfWarComponent::LockToActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantFogOfWarComponent.LockToActor");

	URemnantFogOfWarComponent_LockToActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantFogOfWarComponent.HasDebugLocation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantFogOfWarComponent::HasDebugLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantFogOfWarComponent.HasDebugLocation");

	URemnantFogOfWarComponent_HasDebugLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantFogOfWarComponent.GetLockActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* URemnantFogOfWarComponent::GetLockActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantFogOfWarComponent.GetLockActor");

	URemnantFogOfWarComponent_GetLockActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantFogOfWarComponent.ClearDebugLocation
// (Final, Native, Public, BlueprintCallable)
void URemnantFogOfWarComponent::ClearDebugLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantFogOfWarComponent.ClearDebugLocation");

	URemnantFogOfWarComponent_ClearDebugLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameInstance.OnOnlinePrivilegeChecked
// (Final, Native, Public)
void URemnantGameInstance::OnOnlinePrivilegeChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.OnOnlinePrivilegeChecked");

	URemnantGameInstance_OnOnlinePrivilegeChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameInstance.OnMainMenuLoaded
// (Final, Native, Public)
void URemnantGameInstance::OnMainMenuLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.OnMainMenuLoaded");

	URemnantGameInstance_OnMainMenuLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameInstance.OnDeviceChanged
// (Final, Native, Public)
// Parameters:
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EInputDevice                   NewDevice                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantGameInstance::OnDeviceChanged(int ControllerId, EInputDevice NewDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.OnDeviceChanged");

	URemnantGameInstance_OnDeviceChanged_Params params;
	params.ControllerId = ControllerId;
	params.NewDevice = NewDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameInstance.OnActiveProfileSet
// (Final, Native, Protected)
void URemnantGameInstance::OnActiveProfileSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.OnActiveProfileSet");

	URemnantGameInstance_OnActiveProfileSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameInstance.IsDemo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantGameInstance::IsDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.IsDemo");

	URemnantGameInstance_IsDemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantGameInstance.GetDemoMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ERemnantDemoMode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
ERemnantDemoMode URemnantGameInstance::GetDemoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.GetDemoMode");

	URemnantGameInstance_GetDemoMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantGameInstance.DoJoinViaPresence
// (Final, Native, Public, BlueprintCallable)
void URemnantGameInstance::DoJoinViaPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.DoJoinViaPresence");

	URemnantGameInstance_DoJoinViaPresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameInstance.DoAuth
// (Final, Native, Public, BlueprintCallable)
void URemnantGameInstance::DoAuth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.DoAuth");

	URemnantGameInstance_DoAuth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameInstance.CheckConnectionStatusChanges
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URemnantGameInstance::CheckConnectionStatusChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameInstance.CheckConnectionStatusChanges");

	URemnantGameInstance_CheckConnectionStatusChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameMode.TravelToZone
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            DestZoneID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   DestLink                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantGameMode::TravelToZone(int DestZoneID, const struct FName& DestLink, class AActor* Source, bool bForce, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.TravelToZone");

	ARemnantGameMode_TravelToZone_Params params;
	params.DestZoneID = DestZoneID;
	params.DestLink = DestLink;
	params.Source = Source;
	params.bForce = bForce;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameMode.TravelToLastCheckpoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantGameMode::TravelToLastCheckpoint(class AActor* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.TravelToLastCheckpoint");

	ARemnantGameMode_TravelToLastCheckpoint_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameMode.SetPostDeathScreenTime
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantGameMode::SetPostDeathScreenTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.SetPostDeathScreenTime");

	ARemnantGameMode_SetPostDeathScreenTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameMode.SetAsRootCheckpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FZoneLinkInfo           NewZoneLink                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           IgnoreActive                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantGameMode::SetAsRootCheckpoint(const struct FZoneLinkInfo& NewZoneLink, bool IgnoreActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.SetAsRootCheckpoint");

	ARemnantGameMode_SetAsRootCheckpoint_Params params;
	params.NewZoneLink = NewZoneLink;
	params.IgnoreActive = IgnoreActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantGameMode.SetAsRespawnZoneLink
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FZoneLinkInfo           NewZoneLink                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIgnoreWorldState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantGameMode::SetAsRespawnZoneLink(const struct FZoneLinkInfo& NewZoneLink, bool bIgnoreWorldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.SetAsRespawnZoneLink");

	ARemnantGameMode_SetAsRespawnZoneLink_Params params;
	params.NewZoneLink = NewZoneLink;
	params.bIgnoreWorldState = bIgnoreWorldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantGameMode.OnFullGameAvailable
// (Final, Native, Public)
void ARemnantGameMode::OnFullGameAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.OnFullGameAvailable");

	ARemnantGameMode_OnFullGameAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameMode.IsEveryoneEntitled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELicensedContent               License                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShowFailDialog                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           KickUnentitled                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantGameMode::IsEveryoneEntitled(ELicensedContent License, bool ShowFailDialog, bool KickUnentitled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.IsEveryoneEntitled");

	ARemnantGameMode_IsEveryoneEntitled_Params params;
	params.License = License;
	params.ShowFailDialog = ShowFailDialog;
	params.KickUnentitled = KickUnentitled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantGameMode.IncrementAllPlayersBossCounters
// (Final, Native, Public, BlueprintCallable)
void ARemnantGameMode::IncrementAllPlayersBossCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.IncrementAllPlayersBossCounters");

	ARemnantGameMode_IncrementAllPlayersBossCounters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameMode.GetRespawnZoneLink
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FZoneLinkInfo           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FZoneLinkInfo ARemnantGameMode::GetRespawnZoneLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.GetRespawnZoneLink");

	ARemnantGameMode_GetRespawnZoneLink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantGameMode.ActivateCheckpoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACheckpoint*             Checkpoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantGameMode::ActivateCheckpoint(class ACheckpoint* Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameMode.ActivateCheckpoint");

	ARemnantGameMode_ActivateCheckpoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameState.OnRep_ZoneTravelState
// (Final, Native, Protected)
void ARemnantGameState::OnRep_ZoneTravelState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameState.OnRep_ZoneTravelState");

	ARemnantGameState_OnRep_ZoneTravelState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameState.OnRep_ActivatedCheckpoint
// (Final, Native, Protected)
void ARemnantGameState::OnRep_ActivatedCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameState.OnRep_ActivatedCheckpoint");

	ARemnantGameState_OnRep_ActivatedCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantGameState.IsZoneTravelPending
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutTimeRemaining               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantGameState::STATIC_IsZoneTravelPending(class UObject* WorldContextObject, float* OutTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameState.IsZoneTravelPending");

	ARemnantGameState_IsZoneTravelPending_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ARemnantGameState>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTimeRemaining != nullptr)
		*OutTimeRemaining = params.OutTimeRemaining;


	return params.ReturnValue;
}


// Function Remnant.RemnantGameState.IsZoneTravelAvailable
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EZoneTravelLock                OutReason                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsTravelMenu                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AdditionalDistance             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantGameState::STATIC_IsZoneTravelAvailable(class UObject* WorldContextObject, EZoneTravelLock* OutReason, class AActor* Source, bool bIsTravelMenu, float AdditionalDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameState.IsZoneTravelAvailable");

	ARemnantGameState_IsZoneTravelAvailable_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Source = Source;
	params.bIsTravelMenu = bIsTravelMenu;
	params.AdditionalDistance = AdditionalDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ARemnantGameState>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutReason != nullptr)
		*OutReason = params.OutReason;


	return params.ReturnValue;
}


// Function Remnant.RemnantGameState.GetActivatedCheckpoint
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeDeactivatingCheckpoint (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACheckpoint*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACheckpoint* ARemnantGameState::STATIC_GetActivatedCheckpoint(class UObject* WorldContextObject, bool bIncludeDeactivatingCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantGameState.GetActivatedCheckpoint");

	ARemnantGameState_GetActivatedCheckpoint_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bIncludeDeactivatingCheckpoint = bIncludeDeactivatingCheckpoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ARemnantGameState>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantHUD.ShouldShowSubtitles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantHUD::ShouldShowSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantHUD.ShouldShowSubtitles");

	ARemnantHUD_ShouldShowSubtitles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantHUD.ShouldShowHealthBars
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantHUD::ShouldShowHealthBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantHUD.ShouldShowHealthBars");

	ARemnantHUD_ShouldShowHealthBars_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantHUD.OnStopPendingTravel
// (Event, Protected, BlueprintEvent)
void ARemnantHUD::OnStopPendingTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantHUD.OnStopPendingTravel");

	ARemnantHUD_OnStopPendingTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantHUD.OnStartPendingTravel
// (Event, Protected, BlueprintEvent)
void ARemnantHUD::OnStartPendingTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantHUD.OnStartPendingTravel");

	ARemnantHUD_OnStartPendingTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantHUD.HasInvalidDialog
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantHUD::HasInvalidDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantHUD.HasInvalidDialog");

	ARemnantHUD_HasInvalidDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantMiniMapDisplayActor.OnFogOfWarChanged
// (Final, Native, Protected)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantMiniMapDisplayActor::OnFogOfWarChanged(int X, int Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantMiniMapDisplayActor.OnFogOfWarChanged");

	ARemnantMiniMapDisplayActor_OnFogOfWarChanged_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantMiniMapDisplayActor.IsAnyMiniMapDisplayed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantMiniMapDisplayActor::STATIC_IsAnyMiniMapDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantMiniMapDisplayActor.IsAnyMiniMapDisplayed");

	ARemnantMiniMapDisplayActor_IsAnyMiniMapDisplayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ARemnantMiniMapDisplayActor>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantMiniMapWidget.UpdateWidgetVisibility
// (Final, Native, Public, BlueprintCallable)
void URemnantMiniMapWidget::UpdateWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantMiniMapWidget.UpdateWidgetVisibility");

	URemnantMiniMapWidget_UpdateWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantMiniMapWidget.ShouldIgnoreFogOfWar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantMiniMapWidget::ShouldIgnoreFogOfWar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantMiniMapWidget.ShouldIgnoreFogOfWar");

	URemnantMiniMapWidget_ShouldIgnoreFogOfWar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantMiniMapWidget.SetVisibleFromLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantMiniMapWidget::SetVisibleFromLevel(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantMiniMapWidget.SetVisibleFromLevel");

	URemnantMiniMapWidget_SetVisibleFromLevel_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantMiniMapWidget.IsWidgetVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantMiniMapWidget::IsWidgetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantMiniMapWidget.IsWidgetVisible");

	URemnantMiniMapWidget_IsWidgetVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPingActor.SetPingDetails
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ETailType                      Tail                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPingActor::SetPingDetails(float Duration, class UTexture2D* Icon, const struct FColor& Color, ETailType Tail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingActor.SetPingDetails");

	ARemnantPingActor_SetPingDetails_Params params;
	params.Duration = Duration;
	params.Icon = Icon;
	params.Color = Color;
	params.Tail = Tail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPingActor.OnCinematicEvent
// (Final, Native, Public)
// Parameters:
// class APlayerControllerGunfire* PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsInCinematic                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPingActor::OnCinematicEvent(class APlayerControllerGunfire* PlayerController, bool bIsInCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingActor.OnCinematicEvent");

	ARemnantPingActor_OnCinematicEvent_Params params;
	params.PlayerController = PlayerController;
	params.bIsInCinematic = bIsInCinematic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.PingSubContext.IsValidForPingType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingType                      Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPingSubContext::IsValidForPingType(EPingType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.PingSubContext.IsValidForPingType");

	UPingSubContext_IsValidForPingType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPingManager.IsCharacterOnVOCooldown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantPingManager::IsCharacterOnVOCooldown(class AActor* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingManager.IsCharacterOnVOCooldown");

	URemnantPingManager_IsCharacterOnVOCooldown_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPingManager.IsCharacterOnPingCooldown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantPingManager::IsCharacterOnPingCooldown(class AActor* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingManager.IsCharacterOnPingCooldown");

	URemnantPingManager_IsCharacterOnPingCooldown_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPingManager.GetRemainingCharacterPingCooldown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float URemnantPingManager::GetRemainingCharacterPingCooldown(class AActor* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingManager.GetRemainingCharacterPingCooldown");

	URemnantPingManager_GetRemainingCharacterPingCooldown_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPingManager.GetPingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URemnantPingManager*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantPingManager* URemnantPingManager::STATIC_GetPingManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingManager.GetPingManager");

	URemnantPingManager_GetPingManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantPingManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPingManager.GetPingFromCharacter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActionPing             OutPing                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            PingIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantPingManager::GetPingFromCharacter(class AActor* Character, struct FActionPing* OutPing, int* PingIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingManager.GetPingFromCharacter");

	URemnantPingManager_GetPingFromCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPing != nullptr)
		*OutPing = params.OutPing;
	if (PingIndex != nullptr)
		*PingIndex = params.PingIndex;


	return params.ReturnValue;
}


// Function Remnant.RemnantPingManager.GetCurrentPings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FActionPing>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FActionPing> URemnantPingManager::GetCurrentPings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingManager.GetCurrentPings");

	URemnantPingManager_GetCurrentPings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPingManager.Client_UpdateCharacterPing
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActionPing             NewPing                        (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void URemnantPingManager::Client_UpdateCharacterPing(class AActor* Character, const struct FActionPing& NewPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingManager.Client_UpdateCharacterPing");

	URemnantPingManager_Client_UpdateCharacterPing_Params params;
	params.Character = Character;
	params.NewPing = NewPing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPingManager.Client_MarkPlayerSoloPing
// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsSolo                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantPingManager::Client_MarkPlayerSoloPing(class AActor* Character, bool IsSolo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPingManager.Client_MarkPlayerSoloPing");

	URemnantPingManager_Client_MarkPlayerSoloPing_Params params;
	params.Character = Character;
	params.IsSolo = IsSolo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.UpdatePlayState
// (Final, Native, Protected)
void ARemnantPlayerController::UpdatePlayState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.UpdatePlayState");

	ARemnantPlayerController_UpdatePlayState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.UpdatePerformanceLevel
// (Final, Native, Protected)
void ARemnantPlayerController::UpdatePerformanceLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.UpdatePerformanceLevel");

	ARemnantPlayerController_UpdatePerformanceLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.TravelPlayerTo
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            DestZoneID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   DestLink                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::TravelPlayerTo(int DestZoneID, const struct FName& DestLink, bool bForce, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.TravelPlayerTo");

	ARemnantPlayerController_TravelPlayerTo_Params params;
	params.DestZoneID = DestZoneID;
	params.DestLink = DestLink;
	params.bForce = bForce;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.SwapCharacter
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FZoneLinkInfo           StartingWaypoint               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void ARemnantPlayerController::SwapCharacter(const struct FZoneLinkInfo& StartingWaypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.SwapCharacter");

	ARemnantPlayerController_SwapCharacter_Params params;
	params.StartingWaypoint = StartingWaypoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.SetReadyToTravel
// (Final, Native, Protected, BlueprintCallable)
void ARemnantPlayerController::SetReadyToTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.SetReadyToTravel");

	ARemnantPlayerController_SetReadyToTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.SetIntroComplete
// (Final, Native, Public, BlueprintCallable)
void ARemnantPlayerController::SetIntroComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.SetIntroComplete");

	ARemnantPlayerController_SetIntroComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerWorldResetComplete
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void ARemnantPlayerController::ServerWorldResetComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerWorldResetComplete");

	ARemnantPlayerController_ServerWorldResetComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerUpdateUsingMultiplayerFeatures
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void ARemnantPlayerController::ServerUpdateUsingMultiplayerFeatures()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerUpdateUsingMultiplayerFeatures");

	ARemnantPlayerController_ServerUpdateUsingMultiplayerFeatures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerUpdateLicensedContent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TArray<ELicensedContent>       Licenses                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerUpdateLicensedContent(TArray<ELicensedContent> Licenses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerUpdateLicensedContent");

	ARemnantPlayerController_ServerUpdateLicensedContent_Params params;
	params.Licenses = Licenses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerUnlockItemAward
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  ItemAward                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDoNotify                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerUnlockItemAward(class UClass* ItemAward, bool bDoNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerUnlockItemAward");

	ARemnantPlayerController_ServerUnlockItemAward_Params params;
	params.ItemAward = ItemAward;
	params.bDoNotify = bDoNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerUnlockAccountCurrency
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  CurrencyType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDoNotify                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerUnlockAccountCurrency(class UClass* CurrencyType, int Quantity, bool bDoNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerUnlockAccountCurrency");

	ARemnantPlayerController_ServerUnlockAccountCurrency_Params params;
	params.CurrencyType = CurrencyType;
	params.Quantity = Quantity;
	params.bDoNotify = bDoNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerStreamSwapCharacter
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TArray<unsigned char>          CharacterData                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerStreamSwapCharacter(TArray<unsigned char> CharacterData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerStreamSwapCharacter");

	ARemnantPlayerController_ServerStreamSwapCharacter_Params params;
	params.CharacterData = CharacterData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerStreamCharacterFinalize
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ARemnantPlayerController::ServerStreamCharacterFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerStreamCharacterFinalize");

	ARemnantPlayerController_ServerStreamCharacterFinalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerStreamCharacter
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TArray<unsigned char>          CharacterData                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerStreamCharacter(TArray<unsigned char> CharacterData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerStreamCharacter");

	ARemnantPlayerController_ServerStreamCharacter_Params params;
	params.CharacterData = CharacterData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerSetCurrentLock
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// EZoneTravelLock                NewLock                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNewIsSaving                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNewWantsTravelMenuAccess      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerSetCurrentLock(EZoneTravelLock NewLock, bool bNewIsSaving, bool bNewWantsTravelMenuAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerSetCurrentLock");

	ARemnantPlayerController_ServerSetCurrentLock_Params params;
	params.NewLock = NewLock;
	params.bNewIsSaving = bNewIsSaving;
	params.bNewWantsTravelMenuAccess = bNewWantsTravelMenuAccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerRespawnSwappedCharacter
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            ZoneID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ZoneNameId                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerRespawnSwappedCharacter(int ZoneID, const struct FName& ZoneNameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerRespawnSwappedCharacter");

	ARemnantPlayerController_ServerRespawnSwappedCharacter_Params params;
	params.ZoneID = ZoneID;
	params.ZoneNameId = ZoneNameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerRemoveTravelState
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
void ARemnantPlayerController::ServerRemoveTravelState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerRemoveTravelState");

	ARemnantPlayerController_ServerRemoveTravelState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerRemoveItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 NameOfBP                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerRemoveItem(const struct FString& NameOfBP, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerRemoveItem");

	ARemnantPlayerController_ServerRemoveItem_Params params;
	params.NameOfBP = NameOfBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerReliableCameraLocationUpdate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize     CamLoc                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerReliableCameraLocationUpdate(const struct FVector_NetQuantize& CamLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerReliableCameraLocationUpdate");

	ARemnantPlayerController_ServerReliableCameraLocationUpdate_Params params;
	params.CamLoc = CamLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerReadyToTravel
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ARemnantPlayerController::ServerReadyToTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerReadyToTravel");

	ARemnantPlayerController_ServerReadyToTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerReadyForWorldReset
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void ARemnantPlayerController::ServerReadyForWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerReadyForWorldReset");

	ARemnantPlayerController_ServerReadyForWorldReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerHandleSkipIntro
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ARemnantPlayerController::ServerHandleSkipIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerHandleSkipIntro");

	ARemnantPlayerController_ServerHandleSkipIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerGiveItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 NameOfBP                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LevelOverride                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoEquip                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerGiveItem(const struct FString& NameOfBP, int Quantity, int LevelOverride, bool bAutoEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerGiveItem");

	ARemnantPlayerController_ServerGiveItem_Params params;
	params.NameOfBP = NameOfBP;
	params.Quantity = Quantity;
	params.LevelOverride = LevelOverride;
	params.bAutoEquip = bAutoEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerFinalizeStreamSwapCharacter
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ARemnantPlayerController::ServerFinalizeStreamSwapCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerFinalizeStreamSwapCharacter");

	ARemnantPlayerController_ServerFinalizeStreamSwapCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerDestinationZoneLoaded
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
void ARemnantPlayerController::ServerDestinationZoneLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerDestinationZoneLoaded");

	ARemnantPlayerController_ServerDestinationZoneLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerClearWaitingForZones
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            SyncCounter                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerClearWaitingForZones(int SyncCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerClearWaitingForZones");

	ARemnantPlayerController_ServerClearWaitingForZones_Params params;
	params.SyncCounter = SyncCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerBeginPlay
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ARemnantPlayerController::ServerBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerBeginPlay");

	ARemnantPlayerController_ServerBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ServerAddExperience
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UProgressionComponent*   Progression                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ServerAddExperience(class UProgressionComponent* Progression, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ServerAddExperience");

	ARemnantPlayerController_ServerAddExperience_Params params;
	params.Progression = Progression;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.Respawn
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FZoneLinkInfo           StartingWaypoint               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void ARemnantPlayerController::Respawn(const struct FZoneLinkInfo& StartingWaypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.Respawn");

	ARemnantPlayerController_Respawn_Params params;
	params.StartingWaypoint = StartingWaypoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.RemoveAccountAwardListener
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ARemnantPlayerController::STATIC_RemoveAccountAwardListener(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.RemoveAccountAwardListener");

	ARemnantPlayerController_RemoveAccountAwardListener_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ARemnantPlayerController>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.RefreshAccountAwards
// (Final, Native, Public, BlueprintCallable)
void ARemnantPlayerController::RefreshAccountAwards()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.RefreshAccountAwards");

	ARemnantPlayerController_RefreshAccountAwards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.QueueValidClientSoftInventoryChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsItemRemoval                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::QueueValidClientSoftInventoryChange(int Quantity, int ItemLevel, bool IsItemRemoval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.QueueValidClientSoftInventoryChange");

	ARemnantPlayerController_QueueValidClientSoftInventoryChange_Params params;
	params.Quantity = Quantity;
	params.ItemLevel = ItemLevel;
	params.IsItemRemoval = IsItemRemoval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.QueueValidClientInventoryChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ItemBP                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsItemRemoval                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::QueueValidClientInventoryChange(class UClass* ItemBP, int Quantity, int ItemLevel, bool IsItemRemoval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.QueueValidClientInventoryChange");

	ARemnantPlayerController_QueueValidClientInventoryChange_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;
	params.ItemLevel = ItemLevel;
	params.IsItemRemoval = IsItemRemoval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.QueueManualQuestReward
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ARemnantQuest*           Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSkipDuplicates                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoEquip                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ERemnantQuestRewardType        RewardType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LevelOverride                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsArchetype                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWantsSaveOnAward              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::QueueManualQuestReward(class ARemnantQuest* Quest, bool bSkipDuplicates, bool bAutoEquip, ERemnantQuestRewardType RewardType, int Quantity, int LevelOverride, bool bIsArchetype, bool bWantsSaveOnAward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.QueueManualQuestReward");

	ARemnantPlayerController_QueueManualQuestReward_Params params;
	params.Quest = Quest;
	params.bSkipDuplicates = bSkipDuplicates;
	params.bAutoEquip = bAutoEquip;
	params.RewardType = RewardType;
	params.Quantity = Quantity;
	params.LevelOverride = LevelOverride;
	params.bIsArchetype = bIsArchetype;
	params.bWantsSaveOnAward = bWantsSaveOnAward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnSessionDisconnected
// (Final, Native, Protected)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNetDriver*              NetDriver                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::OnSessionDisconnected(class UWorld* InWorld, class UNetDriver* NetDriver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnSessionDisconnected");

	ARemnantPlayerController_OnSessionDisconnected_Params params;
	params.InWorld = InWorld;
	params.NetDriver = NetDriver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnServerFinalizeTravel
// (Event, Public, BlueprintEvent)
void ARemnantPlayerController::OnServerFinalizeTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnServerFinalizeTravel");

	ARemnantPlayerController_OnServerFinalizeTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnReadyToTravel
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            PendingZoneID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::OnReadyToTravel(int PendingZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnReadyToTravel");

	ARemnantPlayerController_OnReadyToTravel_Params params;
	params.PendingZoneID = PendingZoneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnPlayStateChanged
// (Final, Native, Protected)
// Parameters:
// struct FName                   PreviousState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::OnPlayStateChanged(const struct FName& PreviousState, const struct FName& NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnPlayStateChanged");

	ARemnantPlayerController_OnPlayStateChanged_Params params;
	params.PreviousState = PreviousState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnPlayInEditor
// (Event, Public, BlueprintEvent)
void ARemnantPlayerController::OnPlayInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnPlayInEditor");

	ARemnantPlayerController_OnPlayInEditor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnPlayerDied
// (Final, Native, Protected)
// Parameters:
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACharacterGunfire*       DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Cause                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::OnPlayerDied(unsigned char Reason, class ACharacterGunfire* DeadCharacter, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnPlayerDied");

	ARemnantPlayerController_OnPlayerDied_Params params;
	params.Reason = Reason;
	params.DeadCharacter = DeadCharacter;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnFinishWorldReset
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACheckpoint*             ActivatedCheckpoint            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::OnFinishWorldReset(class ACheckpoint* ActivatedCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnFinishWorldReset");

	ARemnantPlayerController_OnFinishWorldReset_Params params;
	params.ActivatedCheckpoint = ActivatedCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnFinishTravelLoad
// (Event, Public, BlueprintEvent)
void ARemnantPlayerController::OnFinishTravelLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnFinishTravelLoad");

	ARemnantPlayerController_OnFinishTravelLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnFinishTravel
// (Event, Public, BlueprintEvent)
void ARemnantPlayerController::OnFinishTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnFinishTravel");

	ARemnantPlayerController_OnFinishTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnFinishPlayStateTransition
// (Final, Native, Protected)
// Parameters:
// struct FName                   NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::OnFinishPlayStateTransition(const struct FName& NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnFinishPlayStateTransition");

	ARemnantPlayerController_OnFinishPlayStateTransition_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnDeceased
// (Event, Protected, BlueprintEvent)
void ARemnantPlayerController::OnDeceased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnDeceased");

	ARemnantPlayerController_OnDeceased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnBeginWorldReset
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACheckpoint*             ActivatedCheckpoint            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasDead                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::OnBeginWorldReset(class ACheckpoint* ActivatedCheckpoint, bool bWasDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnBeginWorldReset");

	ARemnantPlayerController_OnBeginWorldReset_Params params;
	params.ActivatedCheckpoint = ActivatedCheckpoint;
	params.bWasDead = bWasDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.OnBeginTravel
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            PendingZoneID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::OnBeginTravel(int PendingZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.OnBeginTravel");

	ARemnantPlayerController_OnBeginTravel_Params params;
	params.PendingZoneID = PendingZoneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.NetUpdateActiveCharacter
// (Final, Native, Protected, BlueprintCallable)
void ARemnantPlayerController::NetUpdateActiveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.NetUpdateActiveCharacter");

	ARemnantPlayerController_NetUpdateActiveCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.MarkRevived
// (Final, Native, Public, BlueprintCallable)
void ARemnantPlayerController::MarkRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.MarkRevived");

	ARemnantPlayerController_MarkRevived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.IsPlayerDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantPlayerController::IsPlayerDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.IsPlayerDead");

	ARemnantPlayerController_IsPlayerDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.IsIntroQuestDisabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantPlayerController::STATIC_IsIntroQuestDisabled(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.IsIntroQuestDisabled");

	ARemnantPlayerController_IsIntroQuestDisabled_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ARemnantPlayerController>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.IsIntroQuestComplete
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantPlayerController::STATIC_IsIntroQuestComplete(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.IsIntroQuestComplete");

	ARemnantPlayerController_IsIntroQuestComplete_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ARemnantPlayerController>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.HasServerBegunPlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantPlayerController::HasServerBegunPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.HasServerBegunPlay");

	ARemnantPlayerController_HasServerBegunPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.HasLicense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELicensedContent               License                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantPlayerController::HasLicense(ELicensedContent License)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.HasLicense");

	ARemnantPlayerController_HasLicense_Params params;
	params.License = License;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.HasGivenLicenses
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantPlayerController::HasGivenLicenses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.HasGivenLicenses");

	ARemnantPlayerController_HasGivenLicenses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.HandleSkipIntro
// (Event, Protected, BlueprintEvent)
void ARemnantPlayerController::HandleSkipIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.HandleSkipIntro");

	ARemnantPlayerController_HandleSkipIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.GiveQuestRewards
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantQuest*           Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnTable*             SpawnTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           SpawnTags                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// ERemnantQuestRewardType        RewardType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSkipDuplicates                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::GiveQuestRewards(class ARemnantQuest* Quest, class USpawnTable* SpawnTable, TArray<struct FName> SpawnTags, ERemnantQuestRewardType RewardType, int RandomSeed, bool bSkipDuplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GiveQuestRewards");

	ARemnantPlayerController_GiveQuestRewards_Params params;
	params.Quest = Quest;
	params.SpawnTable = SpawnTable;
	params.SpawnTags = SpawnTags;
	params.RewardType = RewardType;
	params.RandomSeed = RandomSeed;
	params.bSkipDuplicates = bSkipDuplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.GiveAccountAward
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewAward                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::GiveAccountAward(class UClass* NewAward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GiveAccountAward");

	ARemnantPlayerController_GiveAccountAward_Params params;
	params.NewAward = NewAward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.GetTimeSinceLastInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ARemnantPlayerController::GetTimeSinceLastInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GetTimeSinceLastInput");

	ARemnantPlayerController_GetTimeSinceLastInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.GetTargetZoneLink
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FZoneLinkInfo           OutZoneLink                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           bSkipTravelDestination         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantPlayerController::GetTargetZoneLink(struct FZoneLinkInfo* OutZoneLink, bool bSkipTravelDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GetTargetZoneLink");

	ARemnantPlayerController_GetTargetZoneLink_Params params;
	params.bSkipTravelDestination = bSkipTravelDestination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutZoneLink != nullptr)
		*OutZoneLink = params.OutZoneLink;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.GetRelevantInventoryComponentForItemType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ItemType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInventoryComponent* ARemnantPlayerController::GetRelevantInventoryComponentForItemType(class UClass* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GetRelevantInventoryComponentForItemType");

	ARemnantPlayerController_GetRelevantInventoryComponentForItemType_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.GetRelevantInventoryComponentForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInventoryComponent* ARemnantPlayerController::GetRelevantInventoryComponentForItem(class UClass* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GetRelevantInventoryComponentForItem");

	ARemnantPlayerController_GetRelevantInventoryComponentForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.GetPlayerInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UInventoryComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInventoryComponent* ARemnantPlayerController::GetPlayerInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GetPlayerInventory");

	ARemnantPlayerController_GetPlayerInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.GetCurrentZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* ARemnantPlayerController::GetCurrentZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GetCurrentZone");

	ARemnantPlayerController_GetCurrentZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.GetCurrentTravelLock
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EZoneTravelLock                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EZoneTravelLock ARemnantPlayerController::GetCurrentTravelLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GetCurrentTravelLock");

	ARemnantPlayerController_GetCurrentTravelLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.GetCurrentOrDeadPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* ARemnantPlayerController::GetCurrentOrDeadPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GetCurrentOrDeadPawn");

	ARemnantPlayerController_GetCurrentOrDeadPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.GatherPing
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FActionPing             OutPing                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// EPingGenerationResult          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EPingGenerationResult ARemnantPlayerController::GatherPing(struct FActionPing* OutPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.GatherPing");

	ARemnantPlayerController_GatherPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPing != nullptr)
		*OutPing = params.OutPing;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.EnableWidgetComponentInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::EnableWidgetComponentInteraction(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.EnableWidgetComponentInteraction");

	ARemnantPlayerController_EnableWidgetComponentInteraction_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ComputePowerLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ARemnantPlayerController::ComputePowerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ComputePowerLevel");

	ARemnantPlayerController_ComputePowerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.ComputeItemLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ARemnantPlayerController::ComputeItemLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ComputeItemLevel");

	ARemnantPlayerController_ComputeItemLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.ClientUpdateUsingMultiplayerFeatures
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientUpdateUsingMultiplayerFeatures(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientUpdateUsingMultiplayerFeatures");

	ARemnantPlayerController_ClientUpdateUsingMultiplayerFeatures_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientUpdateFogOfWar
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            ZoneID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVisitedCoordinates     VisitedCoordinatesMap          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientUpdateFogOfWar(int ZoneID, const struct FVisitedCoordinates& VisitedCoordinatesMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientUpdateFogOfWar");

	ARemnantPlayerController_ClientUpdateFogOfWar_Params params;
	params.ZoneID = ZoneID;
	params.VisitedCoordinatesMap = VisitedCoordinatesMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientUpdateAchievement
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// struct FAchievementId          AchievementName                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            Progress                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAchievementUpdateType         Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientUpdateAchievement(const struct FAchievementId& AchievementName, int Progress, EAchievementUpdateType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientUpdateAchievement");

	ARemnantPlayerController_ClientUpdateAchievement_Params params;
	params.AchievementName = AchievementName;
	params.Progress = Progress;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientSetWaitingForZones
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int                            SyncCounter                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientSetWaitingForZones(int SyncCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientSetWaitingForZones");

	ARemnantPlayerController_ClientSetWaitingForZones_Params params;
	params.SyncCounter = SyncCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientSetMusicState
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientSetMusicState(const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientSetMusicState");

	ARemnantPlayerController_ClientSetMusicState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientOnSessionChanged
// (Net, NetReliable, Native, Event, Public, NetClient)
void ARemnantPlayerController::ClientOnSessionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientOnSessionChanged");

	ARemnantPlayerController_ClientOnSessionChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientNotifyQuestReward
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FRemnantQuestReward     QuestReward                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientNotifyQuestReward(const struct FRemnantQuestReward& QuestReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientNotifyQuestReward");

	ARemnantPlayerController_ClientNotifyQuestReward_Params params;
	params.QuestReward = QuestReward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientLoadDestinationZone
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int                            DestZoneID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientLoadDestinationZone(int DestZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientLoadDestinationZone");

	ARemnantPlayerController_ClientLoadDestinationZone_Params params;
	params.DestZoneID = DestZoneID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientIncrementBossCounter
// (Net, NetReliable, Native, Event, Protected, NetClient)
void ARemnantPlayerController::ClientIncrementBossCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientIncrementBossCounter");

	ARemnantPlayerController_ClientIncrementBossCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientHandleDeceased
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// bool                           bExitToMenu                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientHandleDeceased(bool bExitToMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientHandleDeceased");

	ARemnantPlayerController_ClientHandleDeceased_Params params;
	params.bExitToMenu = bExitToMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientGiveAccountAward
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class UClass*                  NewAward                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientGiveAccountAward(class UClass* NewAward)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientGiveAccountAward");

	ARemnantPlayerController_ClientGiveAccountAward_Params params;
	params.NewAward = NewAward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientFinishWorldReset
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class ACheckpoint*             ActivatedCheckpoint            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientFinishWorldReset(class ACheckpoint* ActivatedCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientFinishWorldReset");

	ARemnantPlayerController_ClientFinishWorldReset_Params params;
	params.ActivatedCheckpoint = ActivatedCheckpoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientFinishTravel
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FTransform              Destination                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientFinishTravel(const struct FTransform& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientFinishTravel");

	ARemnantPlayerController_ClientFinishTravel_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientBeginWorldReset
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class ACheckpoint*             ActivatedCheckpoint            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasDead                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientBeginWorldReset(class ACheckpoint* ActivatedCheckpoint, bool bWasDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientBeginWorldReset");

	ARemnantPlayerController_ClientBeginWorldReset_Params params;
	params.ActivatedCheckpoint = ActivatedCheckpoint;
	params.bWasDead = bWasDead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClientBeginTravel
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// bool                           bRespawning                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PendingZoneID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClientBeginTravel(bool bRespawning, int PendingZoneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClientBeginTravel");

	ARemnantPlayerController_ClientBeginTravel_Params params;
	params.bRespawning = bRespawning;
	params.PendingZoneID = PendingZoneID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClearTravelLock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EZoneTravelLock                Lock                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClearTravelLock(EZoneTravelLock Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClearTravelLock");

	ARemnantPlayerController_ClearTravelLock_Params params;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClearPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           SetCurrentAsDead               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShouldClearDeadPawn            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ClearPawn(bool SetCurrentAsDead, bool ShouldClearDeadPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClearPawn");

	ARemnantPlayerController_ClearPawn_Params params;
	params.SetCurrentAsDead = SetCurrentAsDead;
	params.ShouldClearDeadPawn = ShouldClearDeadPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClearDeadPawn
// (Final, Native, Public, BlueprintCallable)
void ARemnantPlayerController::ClearDeadPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClearDeadPawn");

	ARemnantPlayerController_ClearDeadPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.ClearCachedArchetype
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
void ARemnantPlayerController::ClearCachedArchetype()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ClearCachedArchetype");

	ARemnantPlayerController_ClearCachedArchetype_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.CanRespawnPlayers
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantPlayerController::CanRespawnPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.CanRespawnPlayers");

	ARemnantPlayerController_CanRespawnPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.BroadcastPing
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FActionPing             PingRequest                    (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ARemnantPlayerController::BroadcastPing(const struct FActionPing& PingRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.BroadcastPing");

	ARemnantPlayerController_BroadcastPing_Params params;
	params.PingRequest = PingRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.BroadcastFinishedLevelSequence
// (Final, Native, Public)
// Parameters:
// struct FSequencerPlayerSettings DummySettings                  (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          CurrentSequence                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SequenceInstigator             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::BroadcastFinishedLevelSequence(const struct FSequencerPlayerSettings& DummySettings, class ULevelSequence* CurrentSequence, class AActor* SequenceInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.BroadcastFinishedLevelSequence");

	ARemnantPlayerController_BroadcastFinishedLevelSequence_Params params;
	params.DummySettings = DummySettings;
	params.CurrentSequence = CurrentSequence;
	params.SequenceInstigator = SequenceInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.BroadcastEmote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Emote                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::BroadcastEmote(class UClass* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.BroadcastEmote");

	ARemnantPlayerController_BroadcastEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.BroadcastClientFinishedLevelSequence
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FSequencerPlayerSettings SequenceSettings               (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*          CurrentSequence                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SequenceInstigator             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::BroadcastClientFinishedLevelSequence(const struct FSequencerPlayerSettings& SequenceSettings, class ULevelSequence* CurrentSequence, class AActor* SequenceInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.BroadcastClientFinishedLevelSequence");

	ARemnantPlayerController_BroadcastClientFinishedLevelSequence_Params params;
	params.SequenceSettings = SequenceSettings;
	params.CurrentSequence = CurrentSequence;
	params.SequenceInstigator = SequenceInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.AwardArchetype
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class URemnantArchetype*       ArchetypeClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ARemnantQuest*           Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ERemnantQuestRewardType        RewardType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseWhitelist                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>          WhitelistClasses               (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                           bAddTraits                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::AwardArchetype(class URemnantArchetype* ArchetypeClass, class ARemnantQuest* Quest, ERemnantQuestRewardType RewardType, bool bUseWhitelist, TArray<class UClass*> WhitelistClasses, bool bAddTraits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.AwardArchetype");

	ARemnantPlayerController_AwardArchetype_Params params;
	params.ArchetypeClass = ArchetypeClass;
	params.Quest = Quest;
	params.RewardType = RewardType;
	params.bUseWhitelist = bUseWhitelist;
	params.WhitelistClasses = WhitelistClasses;
	params.bAddTraits = bAddTraits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.AttemptPing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPingGenerationResult          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EPingGenerationResult ARemnantPlayerController::AttemptPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.AttemptPing");

	ARemnantPlayerController_AttemptPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerController.ApplyTravelLock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EZoneTravelLock                Lock                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantPlayerController::ApplyTravelLock(EZoneTravelLock Lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.ApplyTravelLock");

	ARemnantPlayerController_ApplyTravelLock_Params params;
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerController.AddAccountAwardListener
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ARemnantPlayerController::STATIC_AddAccountAwardListener(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerController.AddAccountAwardListener");

	ARemnantPlayerController_AddAccountAwardListener_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<ARemnantPlayerController>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerInventoryComponent.ServerOnClientExceptionUpdate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  ItemBP                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantPlayerInventoryComponent::ServerOnClientExceptionUpdate(class UClass* ItemBP, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.ServerOnClientExceptionUpdate");

	URemnantPlayerInventoryComponent_ServerOnClientExceptionUpdate_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerInventoryComponent.OnTrackedInstanceDataChanged
// (Final, Native, Protected)
void URemnantPlayerInventoryComponent::OnTrackedInstanceDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.OnTrackedInstanceDataChanged");

	URemnantPlayerInventoryComponent_OnTrackedInstanceDataChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerInventoryComponent.ModifyLevelForNewItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ItemBP                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantPlayerInventoryComponent::ModifyLevelForNewItem(class UClass* ItemBP, int ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.ModifyLevelForNewItem");

	URemnantPlayerInventoryComponent_ModifyLevelForNewItem_Params params;
	params.ItemBP = ItemBP;
	params.ItemLevel = ItemLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerInventoryComponent.MarkClientSoftInventoryChangeValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsItemRemoval                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantPlayerInventoryComponent::MarkClientSoftInventoryChangeValid(int Quantity, int ItemLevel, bool IsItemRemoval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.MarkClientSoftInventoryChangeValid");

	URemnantPlayerInventoryComponent_MarkClientSoftInventoryChangeValid_Params params;
	params.Quantity = Quantity;
	params.ItemLevel = ItemLevel;
	params.IsItemRemoval = IsItemRemoval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerInventoryComponent.MarkClientInventoryChangeValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ItemBP                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsItemRemoval                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantPlayerInventoryComponent::MarkClientInventoryChangeValid(class UClass* ItemBP, int Quantity, int ItemLevel, bool IsItemRemoval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.MarkClientInventoryChangeValid");

	URemnantPlayerInventoryComponent_MarkClientInventoryChangeValid_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;
	params.ItemLevel = ItemLevel;
	params.IsItemRemoval = IsItemRemoval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerInventoryComponent.IsItemCheatProtected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ItemBP                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantPlayerInventoryComponent::IsItemCheatProtected(class UClass* ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.IsItemCheatProtected");

	URemnantPlayerInventoryComponent_IsItemCheatProtected_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerInventoryComponent.IsCheatValidationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantPlayerInventoryComponent::IsCheatValidationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.IsCheatValidationEnabled");

	URemnantPlayerInventoryComponent_IsCheatValidationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerInventoryComponent.GetLevelForNewItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ItemBP                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantPlayerInventoryComponent::STATIC_GetLevelForNewItem(class AActor* Actor, class UClass* ItemBP, int ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.GetLevelForNewItem");

	URemnantPlayerInventoryComponent_GetLevelForNewItem_Params params;
	params.Actor = Actor;
	params.ItemBP = ItemBP;
	params.ItemLevel = ItemLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantPlayerInventoryComponent>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantPlayerInventoryComponent.ClientValidationTimeOut
// (Final, Native, Protected)
void URemnantPlayerInventoryComponent::ClientValidationTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.ClientValidationTimeOut");

	URemnantPlayerInventoryComponent_ClientValidationTimeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantPlayerInventoryComponent.AddProtectionTimeOut
// (Final, Native, Protected)
void URemnantPlayerInventoryComponent::AddProtectionTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantPlayerInventoryComponent.AddProtectionTimeOut");

	URemnantPlayerInventoryComponent_AddProtectionTimeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantProgressionComponent.AddProtectionTimeOut
// (Final, Native, Protected)
void URemnantProgressionComponent::AddProtectionTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantProgressionComponent.AddProtectionTimeOut");

	URemnantProgressionComponent_AddProtectionTimeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuest.OnRep_Status
// (Final, Native, Protected)
void ARemnantQuest::OnRep_Status()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.OnRep_Status");

	ARemnantQuest_OnRep_Status_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuest.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantQuest::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.IsLoaded");

	ARemnantQuest_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.HasLastCheckpoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantQuest::HasLastCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.HasLastCheckpoint");

	ARemnantQuest_HasLastCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.GiveRewardToPlayerController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantPlayerController* Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnTable*             SpawnTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SpawnTag                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           AdditionalTags                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// ERemnantQuestRewardType        RewardType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSkipDuplicates                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantQuest::GiveRewardToPlayerController(class ARemnantPlayerController* Player, class USpawnTable* SpawnTable, const struct FName& SpawnTag, TArray<struct FName> AdditionalTags, ERemnantQuestRewardType RewardType, int RandomSeed, bool bSkipDuplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GiveRewardToPlayerController");

	ARemnantQuest_GiveRewardToPlayerController_Params params;
	params.Player = Player;
	params.SpawnTable = SpawnTable;
	params.SpawnTag = SpawnTag;
	params.AdditionalTags = AdditionalTags;
	params.RewardType = RewardType;
	params.RandomSeed = RandomSeed;
	params.bSkipDuplicates = bSkipDuplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuest.GiveRewardToPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnTable*             SpawnTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SpawnTag                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           AdditionalTags                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// ERemnantQuestRewardType        RewardType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantQuest::GiveRewardToPlayer(class ARemnantCharacter* Player, class USpawnTable* SpawnTable, const struct FName& SpawnTag, TArray<struct FName> AdditionalTags, ERemnantQuestRewardType RewardType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GiveRewardToPlayer");

	ARemnantQuest_GiveRewardToPlayer_Params params;
	params.Player = Player;
	params.SpawnTable = SpawnTable;
	params.SpawnTag = SpawnTag;
	params.AdditionalTags = AdditionalTags;
	params.RewardType = RewardType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuest.GiveReward
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnTable*             SpawnTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SpawnTag                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           AdditionalTags                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// ERemnantQuestRewardType        RewardType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSkipDuplicates                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantQuest::GiveReward(class USpawnTable* SpawnTable, const struct FName& SpawnTag, TArray<struct FName> AdditionalTags, ERemnantQuestRewardType RewardType, bool bSkipDuplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GiveReward");

	ARemnantQuest_GiveReward_Params params;
	params.SpawnTable = SpawnTable;
	params.SpawnTag = SpawnTag;
	params.AdditionalTags = AdditionalTags;
	params.RewardType = RewardType;
	params.bSkipDuplicates = bSkipDuplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuest.GetRootQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* ARemnantQuest::GetRootQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GetRootQuest");

	ARemnantQuest_GetRootQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.GetQuestInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UInventoryComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInventoryComponent* ARemnantQuest::GetQuestInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GetQuestInventory");

	ARemnantQuest_GetQuestInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.GetObjectQuestValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  ObjectBP                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ObjectValue                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutSellScalar                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutPickupValue                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantQuest::GetObjectQuestValue(class UClass* ObjectBP, int* ObjectValue, float* OutSellScalar, int* OutPickupValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GetObjectQuestValue");

	ARemnantQuest_GetObjectQuestValue_Params params;
	params.ObjectBP = ObjectBP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectValue != nullptr)
		*ObjectValue = params.ObjectValue;
	if (OutSellScalar != nullptr)
		*OutSellScalar = params.OutSellScalar;
	if (OutPickupValue != nullptr)
		*OutPickupValue = params.OutPickupValue;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ARemnantQuest::GetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GetLevel");

	ARemnantQuest_GetLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.GetLastCheckpoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FZoneLinkInfo           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FZoneLinkInfo ARemnantQuest::GetLastCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GetLastCheckpoint");

	ARemnantQuest_GetLastCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.GetBiomeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ARemnantQuest::GetBiomeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GetBiomeName");

	ARemnantQuest_GetBiomeName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.GetAutoJoinZoneLinks
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TArray<struct FZoneLinkInfo>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FZoneLinkInfo> ARemnantQuest::GetAutoJoinZoneLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.GetAutoJoinZoneLinks");

	ARemnantQuest_GetAutoJoinZoneLinks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuest.DeactivateQuest
// (Final, Native, Public, BlueprintCallable)
void ARemnantQuest::DeactivateQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.DeactivateQuest");

	ARemnantQuest_DeactivateQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuest.AddQuestLootTags
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FName>           LootTags                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantQuest::AddQuestLootTags(TArray<struct FName>* LootTags, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.AddQuestLootTags");

	ARemnantQuest_AddQuestLootTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LootTags != nullptr)
		*LootTags = params.LootTags;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Remnant.RemnantQuest.ActivateQuest
// (Final, Native, Public, BlueprintCallable)
void ARemnantQuest::ActivateQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuest.ActivateQuest");

	ARemnantQuest_ActivateQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestComponent.IsZoneLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestComponent::IsZoneLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.IsZoneLoaded");

	URemnantQuestComponent_IsZoneLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestComponent.GetZone
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* URemnantQuestComponent::GetZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.GetZone");

	URemnantQuestComponent_GetZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestComponent.GetUniqueName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName URemnantQuestComponent::GetUniqueName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.GetUniqueName");

	URemnantQuestComponent_GetUniqueName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestComponent.GetRootQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* URemnantQuestComponent::GetRootQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.GetRootQuest");

	URemnantQuestComponent_GetRootQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestComponent.GetRemnantQuest
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* URemnantQuestComponent::GetRemnantQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.GetRemnantQuest");

	URemnantQuestComponent_GetRemnantQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestComponent.GetQuestZone
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URemnantQuestZone*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantQuestZone* URemnantQuestComponent::GetQuestZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.GetQuestZone");

	URemnantQuestComponent_GetQuestZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestComponent.GetQuestTile
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URemnantQuestTile*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantQuestTile* URemnantQuestComponent::GetQuestTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.GetQuestTile");

	URemnantQuestComponent_GetQuestTile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestComponent.GetQuestEntity
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URemnantQuestEntity*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantQuestEntity* URemnantQuestComponent::GetQuestEntity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.GetQuestEntity");

	URemnantQuestComponent_GetQuestEntity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestComponent.DebugTravelTo
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestComponent::DebugTravelTo(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.DebugTravelTo");

	URemnantQuestComponent_DebugTravelTo_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestComponent.DebugCanTravelTo
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestComponent::DebugCanTravelTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestComponent.DebugCanTravelTo");

	URemnantQuestComponent_DebugCanTravelTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestAIDirector.StopAllGroups
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                           DestroyActiveSpawns            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestAIDirector::StopAllGroups(bool DestroyActiveSpawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.StopAllGroups");

	URemnantQuestAIDirector_StopAllGroups_Params params;
	params.DestroyActiveSpawns = DestroyActiveSpawns;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestAIDirector.SetSpawnTable
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class USpawnTable*             SpawnTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestAIDirector::SetSpawnTable(class USpawnTable* SpawnTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.SetSpawnTable");

	URemnantQuestAIDirector_SetSpawnTable_Params params;
	params.SpawnTable = SpawnTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupRemoved
// (Final, Native, Private)
// Parameters:
// class UEncounterGroupInstance* EncounterGroup                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestAIDirector::OnEncounterGroupRemoved(class UEncounterGroupInstance* EncounterGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.OnEncounterGroupRemoved");

	URemnantQuestAIDirector_OnEncounterGroupRemoved_Params params;
	params.EncounterGroup = EncounterGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupActorSpawned
// (Final, Native, Private)
// Parameters:
// class UEncounterGroupInstance* EncounterGroup                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestAIDirector::OnEncounterGroupActorSpawned(class UEncounterGroupInstance* EncounterGroup, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.OnEncounterGroupActorSpawned");

	URemnantQuestAIDirector_OnEncounterGroupActorSpawned_Params params;
	params.EncounterGroup = EncounterGroup;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestAIDirector.OnEncounterGroupActorDead
// (Final, Native, Private)
// Parameters:
// class UEncounterGroupInstance* EncounterGroup                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestAIDirector::OnEncounterGroupActorDead(class UEncounterGroupInstance* EncounterGroup, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.OnEncounterGroupActorDead");

	URemnantQuestAIDirector_OnEncounterGroupActorDead_Params params;
	params.EncounterGroup = EncounterGroup;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestAIDirector.HasActiveSpawns
// (Final, Native, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IncludeQueuedSpawns            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestAIDirector::HasActiveSpawns(bool IncludeQueuedSpawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.HasActiveSpawns");

	URemnantQuestAIDirector_HasActiveSpawns_Params params;
	params.IncludeQueuedSpawns = IncludeQueuedSpawns;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestAIDirector.GetTotalSpawns
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                           IncludeQueuedSpawns            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantQuestAIDirector::GetTotalSpawns(bool IncludeQueuedSpawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.GetTotalSpawns");

	URemnantQuestAIDirector_GetTotalSpawns_Params params;
	params.IncludeQueuedSpawns = IncludeQueuedSpawns;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestAIDirector.EventPlayerExit
// (Final, Native, Private)
// Parameters:
// struct FEventRegionCharacter   Character                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void URemnantQuestAIDirector::EventPlayerExit(const struct FEventRegionCharacter& Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.EventPlayerExit");

	URemnantQuestAIDirector_EventPlayerExit_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestAIDirector.EventPlayerEnter
// (Final, Native, Private)
// Parameters:
// struct FEventRegionCharacter   Character                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void URemnantQuestAIDirector::EventPlayerEnter(const struct FEventRegionCharacter& Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.EventPlayerEnter");

	URemnantQuestAIDirector_EventPlayerEnter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestAIDirector.EventEncounterEvent
// (Final, Native, Private)
// Parameters:
// class UEncounterGroupInstance* EncounterGroup                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestAIDirector::EventEncounterEvent(class UEncounterGroupInstance* EncounterGroup, const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestAIDirector.EventEncounterEvent");

	URemnantQuestAIDirector_EventEncounterEvent_Params params;
	params.EncounterGroup = EncounterGroup;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.LootSourceInterface.OverrideLootTable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USpawnTable*             SpawnTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           SpawnTags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULootSourceInterface::OverrideLootTable(class USpawnTable* SpawnTable, TArray<struct FName> SpawnTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.LootSourceInterface.OverrideLootTable");

	ULootSourceInterface_OverrideLootTable_Params params;
	params.SpawnTable = SpawnTable;
	params.SpawnTags = SpawnTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.ZoneUnloaded
// (Final, Native, Protected)
void URemnantQuestEntity::ZoneUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.ZoneUnloaded");

	URemnantQuestEntity_ZoneUnloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.SetFactionAffiliation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  TargetFaction                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAffiliation                   Affiliation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Propogate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestEntity::SetFactionAffiliation(class UClass* TargetFaction, EAffiliation Affiliation, bool Propogate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.SetFactionAffiliation");

	URemnantQuestEntity_SetFactionAffiliation_Params params;
	params.TargetFaction = TargetFaction;
	params.Affiliation = Affiliation;
	params.Propogate = Propogate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.SetFaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewFaction                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestEntity::SetFaction(class UClass* NewFaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.SetFaction");

	URemnantQuestEntity_SetFaction_Params params;
	params.NewFaction = NewFaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.ResetSpawns
// (Final, Native, Public, BlueprintCallable)
void URemnantQuestEntity::ResetSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.ResetSpawns");

	URemnantQuestEntity_ResetSpawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.ReactivateSpawns
// (Final, Native, Public, BlueprintCallable)
void URemnantQuestEntity::ReactivateSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.ReactivateSpawns");

	URemnantQuestEntity_ReactivateSpawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.OnSpawnListLoaded
// (Final, Native, Protected)
void URemnantQuestEntity::OnSpawnListLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.OnSpawnListLoaded");

	URemnantQuestEntity_OnSpawnListLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.OnDead
// (Final, Native, Protected)
// Parameters:
// unsigned char                  Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACharacterGunfire*       Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Cause                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestEntity::OnDead(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.OnDead");

	URemnantQuestEntity_OnDead_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.OnActorRegistered
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestEntity::OnActorRegistered(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.OnActorRegistered");

	URemnantQuestEntity_OnActorRegistered_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.OnActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestEntity::OnActorDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.OnActorDestroyed");

	URemnantQuestEntity_OnActorDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.OnActorDead
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void URemnantQuestEntity::OnActorDead(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.OnActorDead");

	URemnantQuestEntity_OnActorDead_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEntity.GetZone
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* URemnantQuestEntity::GetZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.GetZone");

	URemnantQuestEntity_GetZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEntity.GetRootQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* URemnantQuestEntity::GetRootQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.GetRootQuest");

	URemnantQuestEntity_GetRootQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEntity.GetRemnantQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* URemnantQuestEntity::GetRemnantQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.GetRemnantQuest");

	URemnantQuestEntity_GetRemnantQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEntity.GetQuestZone
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URemnantQuestZone*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantQuestZone* URemnantQuestEntity::GetQuestZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.GetQuestZone");

	URemnantQuestEntity_GetQuestZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEntity.GetQuestTile
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URemnantQuestTile*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantQuestTile* URemnantQuestEntity::GetQuestTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.GetQuestTile");

	URemnantQuestEntity_GetQuestTile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEntity.GetNumSpawns
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantQuestEntity::GetNumSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.GetNumSpawns");

	URemnantQuestEntity_GetNumSpawns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEntity.GetActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class AActor*> URemnantQuestEntity::GetActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntity.GetActors");

	URemnantQuestEntity_GetActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEntityDialog.OnActorSpawned
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestEntityDialog::OnActorSpawned(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEntityDialog.OnActorSpawned");

	URemnantQuestEntityDialog_OnActorSpawned_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.SetMusicState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MusicState                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestEventRegion::SetMusicState(const struct FName& MusicState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.SetMusicState");

	URemnantQuestEventRegion_SetMusicState_Params params;
	params.MusicState = MusicState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.OnActorRegistered
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestEventRegion::OnActorRegistered(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.OnActorRegistered");

	URemnantQuestEventRegion_OnActorRegistered_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.LockEvent
// (Final, Native, Public, BlueprintCallable)
void URemnantQuestEventRegion::LockEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.LockEvent");

	URemnantQuestEventRegion_LockEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.IsEventRegionActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestEventRegion::IsEventRegionActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.IsEventRegionActive");

	URemnantQuestEventRegion_IsEventRegionActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEventRegion.IsComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestEventRegion::IsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.IsComplete");

	URemnantQuestEventRegion_IsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEventRegion.GetPlayersInRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ARemnantCharacter*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class ARemnantCharacter*> URemnantQuestEventRegion::GetPlayersInRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.GetPlayersInRegion");

	URemnantQuestEventRegion_GetPlayersInRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEventRegion.GetNumPlayersInRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantQuestEventRegion::GetNumPlayersInRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.GetNumPlayersInRegion");

	URemnantQuestEventRegion_GetNumPlayersInRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEventRegion.GetFirstPlayerInRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantCharacter* URemnantQuestEventRegion::GetFirstPlayerInRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.GetFirstPlayerInRegion");

	URemnantQuestEventRegion_GetFirstPlayerInRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEventRegion.GetEventRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AEventRegion*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AEventRegion* URemnantQuestEventRegion::GetEventRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.GetEventRegion");

	URemnantQuestEventRegion_GetEventRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEventRegion.GetAggroGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName URemnantQuestEventRegion::GetAggroGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.GetAggroGroup");

	URemnantQuestEventRegion_GetAggroGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestEventRegion.EventPlayerExit
// (Final, Native, Protected)
// Parameters:
// struct FEventRegionCharacter   Player                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void URemnantQuestEventRegion::EventPlayerExit(const struct FEventRegionCharacter& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.EventPlayerExit");

	URemnantQuestEventRegion_EventPlayerExit_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.EventPlayerEnter
// (Final, Native, Protected)
// Parameters:
// struct FEventRegionCharacter   Player                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
void URemnantQuestEventRegion::EventPlayerEnter(const struct FEventRegionCharacter& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.EventPlayerEnter");

	URemnantQuestEventRegion_EventPlayerEnter_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.EventOnEnd
// (Final, Native, Protected)
void URemnantQuestEventRegion::EventOnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.EventOnEnd");

	URemnantQuestEventRegion_EventOnEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.EventOnBegin
// (Final, Native, Protected)
void URemnantQuestEventRegion::EventOnBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.EventOnBegin");

	URemnantQuestEventRegion_EventOnBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.End
// (Final, Native, Public, BlueprintCallable)
void URemnantQuestEventRegion::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.End");

	URemnantQuestEventRegion_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.CompleteEvent
// (Final, Native, Public, BlueprintCallable)
void URemnantQuestEventRegion::CompleteEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.CompleteEvent");

	URemnantQuestEventRegion_CompleteEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestEventRegion.Begin
// (Final, Native, Public, BlueprintCallable)
void URemnantQuestEventRegion::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestEventRegion.Begin");

	URemnantQuestEventRegion_Begin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestLink.OnLinkDeactivated
// (Final, Native, Protected)
// Parameters:
// class UQuestComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestLink::OnLinkDeactivated(class UQuestComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestLink.OnLinkDeactivated");

	URemnantQuestLink_OnLinkDeactivated_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestLink.OnLinkActivated
// (Final, Native, Protected)
// Parameters:
// class UQuestComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestLink::OnLinkActivated(class UQuestComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestLink.OnLinkActivated");

	URemnantQuestLink_OnLinkActivated_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestManager.SortQuestList
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FRemnantQuestEntry> QuestList                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FRemnantQuestEntry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FRemnantQuestEntry> URemnantQuestManager::STATIC_SortQuestList(TArray<struct FRemnantQuestEntry> QuestList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.SortQuestList");

	URemnantQuestManager_SortQuestList_Params params;
	params.QuestList = QuestList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantQuestManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.IsQuestValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantQuest*           Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestManager::IsQuestValid(class ARemnantQuest* Quest, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.IsQuestValid");

	URemnantQuestManager_IsQuestValid_Params params;
	params.Quest = Quest;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetRootQuests
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ARemnantQuest*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ARemnantQuest*> URemnantQuestManager::GetRootQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetRootQuests");

	URemnantQuestManager_GetRootQuests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetRootQuestForSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            SlotID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* URemnantQuestManager::GetRootQuestForSlot(int SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetRootQuestForSlot");

	URemnantQuestManager_GetRootQuestForSlot_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetRegisteredRootQuestsForMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EQuestMode                     Mode                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRemnantQuestEntry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FRemnantQuestEntry> URemnantQuestManager::GetRegisteredRootQuestsForMode(EQuestMode Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetRegisteredRootQuestsForMode");

	URemnantQuestManager_GetRegisteredRootQuestsForMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetRegisteredRootQuests
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRemnantQuestEntry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FRemnantQuestEntry> URemnantQuestManager::GetRegisteredRootQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetRegisteredRootQuests");

	URemnantQuestManager_GetRegisteredRootQuests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetRegisteredQuests
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRemnantQuestEntry> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FRemnantQuestEntry> URemnantQuestManager::GetRegisteredQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetRegisteredQuests");

	URemnantQuestManager_GetRegisteredQuests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetRegisteredQuestByID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 QuestID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRemnantQuestEntry      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FRemnantQuestEntry URemnantQuestManager::GetRegisteredQuestByID(const struct FString& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetRegisteredQuestByID");

	URemnantQuestManager_GetRegisteredQuestByID_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetQuestsForActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IncludeInjectedQuests          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ARemnantQuest*>   Rtn                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void URemnantQuestManager::GetQuestsForActor(class AActor* Actor, bool IncludeInjectedQuests, TArray<class ARemnantQuest*>* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetQuestsForActor");

	URemnantQuestManager_GetQuestsForActor_Params params;
	params.Actor = Actor;
	params.IncludeInjectedQuests = IncludeInjectedQuests;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Remnant.RemnantQuestManager.GetLicenseForSoftQuest
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ELicensedContent               OutLicense                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestManager::GetLicenseForSoftQuest(ELicensedContent* OutLicense)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetLicenseForSoftQuest");

	URemnantQuestManager_GetLicenseForSoftQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLicense != nullptr)
		*OutLicense = params.OutLicense;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetCurrentQuestObjective
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantQuest*           Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuestObjective*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UQuestObjective* URemnantQuestManager::GetCurrentQuestObjective(class ARemnantQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetCurrentQuestObjective");

	URemnantQuestManager_GetCurrentQuestObjective_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.GetActiveRootQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* URemnantQuestManager::GetActiveRootQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.GetActiveRootQuest");

	URemnantQuestManager_GetActiveRootQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.DestroyRootQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantQuest*           Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestManager::DestroyRootQuest(class ARemnantQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.DestroyRootQuest");

	URemnantQuestManager_DestroyRootQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestManager.CreateRootQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 QuestID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Difficulty                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* URemnantQuestManager::CreateRootQuest(int SlotID, const struct FString& QuestID, int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.CreateRootQuest");

	URemnantQuestManager_CreateRootQuest_Params params;
	params.SlotID = SlotID;
	params.QuestID = QuestID;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestManager.ActivateRootQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ARemnantQuest*           Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestManager::ActivateRootQuest(class ARemnantQuest* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestManager.ActivateRootQuest");

	URemnantQuestManager_ActivateRootQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestSubQuest.SubQuestComplete
// (Final, Native, Protected)
// Parameters:
// class AQuest*                  Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EQuestResult                   Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestSubQuest::SubQuestComplete(class AQuest* Quest, EQuestResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestSubQuest.SubQuestComplete");

	URemnantQuestSubQuest_SubQuestComplete_Params params;
	params.Quest = Quest;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestSubQuest.OnLinkDeactivated
// (Final, Native, Public)
// Parameters:
// class UQuestComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestSubQuest::OnLinkDeactivated(class UQuestComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestSubQuest.OnLinkDeactivated");

	URemnantQuestSubQuest_OnLinkDeactivated_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestSubQuest.OnLinkActivated
// (Final, Native, Public)
// Parameters:
// class UQuestComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestSubQuest::OnLinkActivated(class UQuestComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestSubQuest.OnLinkActivated");

	URemnantQuestSubQuest_OnLinkActivated_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestSubQuest.GetSubQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* URemnantQuestSubQuest::GetSubQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestSubQuest.GetSubQuest");

	URemnantQuestSubQuest_GetSubQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestTile.SetTileActive
// (Final, Native, Protected)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestTile::SetTileActive(int ID, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTile.SetTileActive");

	URemnantQuestTile_SetTileActive_Params params;
	params.ID = ID;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestTile.GetZoneLink
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ZoneLinkNameID                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* URemnantQuestTile::GetZoneLink(const struct FName& ZoneLinkNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTile.GetZoneLink");

	URemnantQuestTile_GetZoneLink_Params params;
	params.ZoneLinkNameID = ZoneLinkNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestTile.GetTileCoord
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTileCoord              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTileCoord URemnantQuestTile::GetTileCoord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTile.GetTileCoord");

	URemnantQuestTile_GetTileCoord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestTile.GetTileAttribute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMapGenAttribute        Out                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestTile::GetTileAttribute(const struct FName& Key, struct FMapGenAttribute* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTile.GetTileAttribute");

	URemnantQuestTile_GetTileAttribute_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestTrigger.OnActorRegistered
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestTrigger::OnActorRegistered(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTrigger.OnActorRegistered");

	URemnantQuestTrigger_OnActorRegistered_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestTrigger.GetTrigger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AQuestTrigger*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AQuestTrigger* URemnantQuestTrigger::GetTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTrigger.GetTrigger");

	URemnantQuestTrigger_GetTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestTrigger.GetPlayersInTrigger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ARemnantCharacter*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class ARemnantCharacter*> URemnantQuestTrigger::GetPlayersInTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTrigger.GetPlayersInTrigger");

	URemnantQuestTrigger_GetPlayersInTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestTrigger.GetNumPlayersInTrigger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantQuestTrigger::GetNumPlayersInTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTrigger.GetNumPlayersInTrigger");

	URemnantQuestTrigger_GetNumPlayersInTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestTrigger.EventPlayerExit
// (Final, Native, Protected)
// Parameters:
// class ARemnantCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestTrigger::EventPlayerExit(class ARemnantCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTrigger.EventPlayerExit");

	URemnantQuestTrigger_EventPlayerExit_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestTrigger.EventPlayerEnter
// (Final, Native, Protected)
// Parameters:
// class ARemnantCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestTrigger::EventPlayerEnter(class ARemnantCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestTrigger.EventPlayerEnter");

	URemnantQuestTrigger_EventPlayerEnter_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.WaveComplete
// (Final, Native, Protected)
// Parameters:
// class UEncounterInstance*      Instance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestWaveEncounter::WaveComplete(class UEncounterInstance* Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.WaveComplete");

	URemnantQuestWaveEncounter_WaveComplete_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.Stop
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                           DestroyActiveSpawns            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestWaveEncounter::Stop(bool DestroyActiveSpawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.Stop");

	URemnantQuestWaveEncounter_Stop_Params params;
	params.DestroyActiveSpawns = DestroyActiveSpawns;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.SpawnWave
// (Final, Native, Protected)
void URemnantQuestWaveEncounter::SpawnWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.SpawnWave");

	URemnantQuestWaveEncounter_SpawnWave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.Resume
// (Final, Native, Private, BlueprintCallable)
void URemnantQuestWaveEncounter::Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.Resume");

	URemnantQuestWaveEncounter_Resume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.Pause
// (Final, Native, Private, BlueprintCallable)
void URemnantQuestWaveEncounter::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.Pause");

	URemnantQuestWaveEncounter_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.IsQuestWaveActive
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantQuestWaveEncounter::IsQuestWaveActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.IsQuestWaveActive");

	URemnantQuestWaveEncounter_IsQuestWaveActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantQuestWaveEncounter.EventPlayerExit
// (Final, Native, Protected)
// Parameters:
// struct FEventRegionCharacter   Character                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void URemnantQuestWaveEncounter::EventPlayerExit(const struct FEventRegionCharacter& Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.EventPlayerExit");

	URemnantQuestWaveEncounter_EventPlayerExit_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.EventPlayerEnter
// (Final, Native, Protected)
// Parameters:
// struct FEventRegionCharacter   Character                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
void URemnantQuestWaveEncounter::EventPlayerEnter(const struct FEventRegionCharacter& Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.EventPlayerEnter");

	URemnantQuestWaveEncounter_EventPlayerEnter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.EventOnEnd
// (Final, Native, Protected)
void URemnantQuestWaveEncounter::EventOnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.EventOnEnd");

	URemnantQuestWaveEncounter_EventOnEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestWaveEncounter.Begin
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestWaveEncounter::Begin(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestWaveEncounter.Begin");

	URemnantQuestWaveEncounter_Begin_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZone.ZoneUnloaded
// (Final, Native, Public)
void URemnantQuestZone::ZoneUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZone.ZoneUnloaded");

	URemnantQuestZone_ZoneUnloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZone.ZoneLoaded
// (Final, Native, Public)
void URemnantQuestZone::ZoneLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZone.ZoneLoaded");

	URemnantQuestZone_ZoneLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZone.TravelToParent
// (Final, Native, Public, BlueprintCallable)
void URemnantQuestZone::TravelToParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZone.TravelToParent");

	URemnantQuestZone_TravelToParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZone.SetSpawnTableOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USpawnTable*             SpawnTable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestZone::SetSpawnTableOverride(class USpawnTable* SpawnTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZone.SetSpawnTableOverride");

	URemnantQuestZone_SetSpawnTableOverride_Params params;
	params.SpawnTable = SpawnTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZone.PlayerExitedZone
// (Final, Native, Public)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestZone::PlayerExitedZone(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZone.PlayerExitedZone");

	URemnantQuestZone_PlayerExitedZone_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZone.PlayerEnteredZone
// (Final, Native, Public)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestZone::PlayerEnteredZone(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZone.PlayerEnteredZone");

	URemnantQuestZone_PlayerEnteredZone_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZone.ParentMapLoaded
// (Final, Native, Public)
void URemnantQuestZone::ParentMapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZone.ParentMapLoaded");

	URemnantQuestZone_ParentMapLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZone.MapLoaded
// (Final, Native, Public)
void URemnantQuestZone::MapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZone.MapLoaded");

	URemnantQuestZone_MapLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZoneLink.MulticastSetLinkActive
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AZoneActor*              Zone                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestZoneLink::MulticastSetLinkActive(class AZoneActor* Zone, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZoneLink.MulticastSetLinkActive");

	URemnantQuestZoneLink_MulticastSetLinkActive_Params params;
	params.Zone = Zone;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZoneLink.MapLoaded
// (Final, Native, Protected)
void URemnantQuestZoneLink::MapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZoneLink.MapLoaded");

	URemnantQuestZoneLink_MapLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZoneLink.DestinationZoneLoaded
// (Final, Native, Protected)
void URemnantQuestZoneLink::DestinationZoneLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZoneLink.DestinationZoneLoaded");

	URemnantQuestZoneLink_DestinationZoneLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZoneLink.DestinationMapLoaded
// (Final, Native, Protected)
void URemnantQuestZoneLink::DestinationMapLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZoneLink.DestinationMapLoaded");

	URemnantQuestZoneLink_DestinationMapLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZoneLink.DeactivateWaypoint
// (Final, Native, Public, BlueprintCallable)
void URemnantQuestZoneLink::DeactivateWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZoneLink.DeactivateWaypoint");

	URemnantQuestZoneLink_DeactivateWaypoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantQuestZoneLink.ActivateWaypoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           SetAsRespawnPoint              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantQuestZoneLink::ActivateWaypoint(bool SetAsRespawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantQuestZoneLink.ActivateWaypoint");

	URemnantQuestZoneLink_ActivateWaypoint_Params params;
	params.SetAsRespawnPoint = SetAsRespawnPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSkyboxManager.RegisterSkyboxModifierVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SkyboxModVolume                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantSkyboxManager::RegisterSkyboxModifierVolume(class AActor* SkyboxModVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSkyboxManager.RegisterSkyboxModifierVolume");

	URemnantSkyboxManager_RegisterSkyboxModifierVolume_Params params;
	params.SkyboxModVolume = SkyboxModVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSkyboxManager.RefreshModifierVolumes
// (Final, Native, Public, BlueprintCallable)
void URemnantSkyboxManager::RefreshModifierVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSkyboxManager.RefreshModifierVolumes");

	URemnantSkyboxManager_RefreshModifierVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSkyboxManager.OnPlayerExitVolume
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantSkyboxManager::OnPlayerExitVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSkyboxManager.OnPlayerExitVolume");

	URemnantSkyboxManager_OnPlayerExitVolume_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSkyboxManager.OnPlayerEnterVolume
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void URemnantSkyboxManager::OnPlayerEnterVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSkyboxManager.OnPlayerEnterVolume");

	URemnantSkyboxManager_OnPlayerEnterVolume_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSkyboxManager.IsPlayerInAnyModifierVolumes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ExcludedVolume                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantSkyboxManager::IsPlayerInAnyModifierVolumes(class AActor* Player, class AActor* ExcludedVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSkyboxManager.IsPlayerInAnyModifierVolumes");

	URemnantSkyboxManager_IsPlayerInAnyModifierVolumes_Params params;
	params.Player = Player;
	params.ExcludedVolume = ExcludedVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantSkyboxManager.InitSkyboxManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SkyboxActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemnantSkyboxManager::InitSkyboxManager(class AActor* SkyboxActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSkyboxManager.InitSkyboxManager");

	URemnantSkyboxManager_InitSkyboxManager_Params params;
	params.SkyboxActor = SkyboxActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSkyboxManager.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URemnantSkyboxManager*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantSkyboxManager* URemnantSkyboxManager::STATIC_GetInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSkyboxManager.GetInstance");

	URemnantSkyboxManager_GetInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantSkyboxManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantSpawnFilterManager.GetManagerInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URemnantSpawnFilterManager* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URemnantSpawnFilterManager* URemnantSpawnFilterManager::STATIC_GetManagerInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpawnFilterManager.GetManagerInstance");

	URemnantSpawnFilterManager_GetManagerInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantSpawnFilterManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantSpectatorPawn.OnValidTarget
// (Event, Public, BlueprintEvent)
void ARemnantSpectatorPawn::OnValidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.OnValidTarget");

	ARemnantSpectatorPawn_OnValidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSpectatorPawn.OnTargetUnavailable
// (Final, Native, Protected)
// Parameters:
// class USpectatorTargetComponent* SpectatorTarget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantSpectatorPawn::OnTargetUnavailable(class USpectatorTargetComponent* SpectatorTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.OnTargetUnavailable");

	ARemnantSpectatorPawn_OnTargetUnavailable_Params params;
	params.SpectatorTarget = SpectatorTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSpectatorPawn.OnSpectateTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantSpectatorPawn::OnSpectateTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.OnSpectateTarget");

	ARemnantSpectatorPawn_OnSpectateTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSpectatorPawn.OnLeaveTarget
// (Final, Native, Public, BlueprintCallable)
void ARemnantSpectatorPawn::OnLeaveTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.OnLeaveTarget");

	ARemnantSpectatorPawn_OnLeaveTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSpectatorPawn.OnInvalidTarget
// (Event, Public, BlueprintEvent)
void ARemnantSpectatorPawn::OnInvalidTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.OnInvalidTarget");

	ARemnantSpectatorPawn_OnInvalidTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSpectatorPawn.OnFinishTravel
// (Event, Public, BlueprintEvent)
void ARemnantSpectatorPawn::OnFinishTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.OnFinishTravel");

	ARemnantSpectatorPawn_OnFinishTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantSpectatorPawn.IsValidTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantSpectatorPawn::IsValidTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.IsValidTarget");

	ARemnantSpectatorPawn_IsValidTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantSpectatorPawn.GetNumAvailableTargets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ARemnantSpectatorPawn::GetNumAvailableTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.GetNumAvailableTargets");

	ARemnantSpectatorPawn_GetNumAvailableTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantSpectatorPawn.GetCurrentTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bOnlyIfValid                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* ARemnantSpectatorPawn::GetCurrentTarget(bool bOnlyIfValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantSpectatorPawn.GetCurrentTarget");

	ARemnantSpectatorPawn_GetCurrentTarget_Params params;
	params.bOnlyIfValid = bOnlyIfValid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantTraitsComponent.GetTraitsForLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTraitInfo>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FTraitInfo> URemnantTraitsComponent::GetTraitsForLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantTraitsComponent.GetTraitsForLevel");

	URemnantTraitsComponent_GetTraitsForLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantTraitsComponent.GetTraitLevelBands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> URemnantTraitsComponent::GetTraitLevelBands()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantTraitsComponent.GetTraitLevelBands");

	URemnantTraitsComponent_GetTraitLevelBands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantTraitsComponent.GetTraitByLevelAndCategory
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Category                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTraitInfo              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FTraitInfo URemnantTraitsComponent::GetTraitByLevelAndCategory(int Level, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantTraitsComponent.GetTraitByLevelAndCategory");

	URemnantTraitsComponent_GetTraitByLevelAndCategory_Params params;
	params.Level = Level;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantTraitsComponent.GetTotalAvailableTraits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantTraitsComponent::GetTotalAvailableTraits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantTraitsComponent.GetTotalAvailableTraits");

	URemnantTraitsComponent_GetTotalAvailableTraits_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantTraitsComponent.GetNumAvailableTraits
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantTraitsComponent::GetNumAvailableTraits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantTraitsComponent.GetNumAvailableTraits");

	URemnantTraitsComponent_GetNumAvailableTraits_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantUtil.IsGameSessionReady
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantUtil::STATIC_IsGameSessionReady(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantUtil.IsGameSessionReady");

	URemnantUtil_IsGameSessionReady_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantUtil.GetGameSeed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantUtil::STATIC_GetGameSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantUtil.GetGameSeed");

	URemnantUtil_GetGameSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantUtil.GetBaseZoneLinkByLabel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Label                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZoneLinkInfo           OutZoneLink                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantUtil::STATIC_GetBaseZoneLinkByLabel(class UObject* WorldContextObject, const struct FString& Label, struct FZoneLinkInfo* OutZoneLink)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantUtil.GetBaseZoneLinkByLabel");

	URemnantUtil_GetBaseZoneLinkByLabel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Label = Label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutZoneLink != nullptr)
		*OutZoneLink = params.OutZoneLink;


	return params.ReturnValue;
}


// Function Remnant.RemnantUtil.GetBaseZoneLink
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZoneLinkInfo           OutZoneLink                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantUtil::STATIC_GetBaseZoneLink(class UObject* WorldContextObject, struct FZoneLinkInfo* OutZoneLink)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantUtil.GetBaseZoneLink");

	URemnantUtil_GetBaseZoneLink_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutZoneLink != nullptr)
		*OutZoneLink = params.OutZoneLink;


	return params.ReturnValue;
}


// Function Remnant.RemnantUtil.GetBaseZoneID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URemnantUtil::STATIC_GetBaseZoneID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantUtil.GetBaseZoneID");

	URemnantUtil_GetBaseZoneID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantUtil.GetBaseZoneActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* URemnantUtil::STATIC_GetBaseZoneActor(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantUtil.GetBaseZoneActor");

	URemnantUtil_GetBaseZoneActor_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantUtil.CanPlayerExitGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URemnantUtil::STATIC_CanPlayerExitGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantUtil.CanPlayerExitGame");

	URemnantUtil_CanPlayerExitGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<URemnantUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.ShowReticule
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantWeaponMod::ShowReticule()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.ShowReticule");

	ARemnantWeaponMod_ShowReticule_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.SetMinHoldTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantWeaponMod::SetMinHoldTime(float HoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.SetMinHoldTime");

	ARemnantWeaponMod_SetMinHoldTime_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnUse
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnUse");

	ARemnantWeaponMod_OnUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnStartCustomIdle
// (Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnStartCustomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnStartCustomIdle");

	ARemnantWeaponMod_OnStartCustomIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnSecondaryActivate
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnSecondaryActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnSecondaryActivate");

	ARemnantWeaponMod_OnSecondaryActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnPreviewStart
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnPreviewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnPreviewStart");

	ARemnantWeaponMod_OnPreviewStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnPreviewEnd
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnPreviewEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnPreviewEnd");

	ARemnantWeaponMod_OnPreviewEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnPreFireEnd
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnPreFireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnPreFireEnd");

	ARemnantWeaponMod_OnPreFireEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnPreFireBegin
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnPreFireBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnPreFireBegin");

	ARemnantWeaponMod_OnPreFireBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnPreActivate
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnPreActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnPreActivate");

	ARemnantWeaponMod_OnPreActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnFireEnd
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnFireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnFireEnd");

	ARemnantWeaponMod_OnFireEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnFireBegin
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnFireBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnFireBegin");

	ARemnantWeaponMod_OnFireBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnFire
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 to                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          WeaponSpread                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantWeaponMod::OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnFire");

	ARemnantWeaponMod_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnFinishLoadingAssets
// (Final, Native, Protected)
void ARemnantWeaponMod::OnFinishLoadingAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnFinishLoadingAssets");

	ARemnantWeaponMod_OnFinishLoadingAssets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnEndUse
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnEndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnEndUse");

	ARemnantWeaponMod_OnEndUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnEndCustomIdle
// (Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnEndCustomIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnEndCustomIdle");

	ARemnantWeaponMod_OnEndCustomIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnDeactivate
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnDeactivate");

	ARemnantWeaponMod_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnChargesChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Charges                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantWeaponMod::OnChargesChanged(int Charges)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnChargesChanged");

	ARemnantWeaponMod_OnChargesChanged_Params params;
	params.Charges = Charges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnCharacterHitTarget
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ARemnantWeaponMod::OnCharacterHitTarget(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnCharacterHitTarget");

	ARemnantWeaponMod_OnCharacterHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnBeginUse
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnBeginUse");

	ARemnantWeaponMod_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.OnActivate
// (Native, Event, Public, BlueprintEvent)
void ARemnantWeaponMod::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.OnActivate");

	ARemnantWeaponMod_OnActivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.ModifyModPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantWeaponMod::ModifyModPower(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.ModifyModPower");

	ARemnantWeaponMod_ModifyModPower_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.IsUseState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantWeaponMod::IsUseState(const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.IsUseState");

	ARemnantWeaponMod_IsUseState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.IsPreviewing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantWeaponMod::IsPreviewing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.IsPreviewing");

	ARemnantWeaponMod_IsPreviewing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.GetWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ARemnantRangedWeapon*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantRangedWeapon* ARemnantWeaponMod::GetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.GetWeapon");

	ARemnantWeaponMod_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.GetUseState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName ARemnantWeaponMod::GetUseState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.GetUseState");

	ARemnantWeaponMod_GetUseState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.GetModAssetAsClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   AssetName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* ARemnantWeaponMod::GetModAssetAsClass(const struct FName& AssetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.GetModAssetAsClass");

	ARemnantWeaponMod_GetModAssetAsClass_Params params;
	params.AssetName = AssetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.GetModAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   AssetName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ARemnantWeaponMod::GetModAsset(const struct FName& AssetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.GetModAsset");

	ARemnantWeaponMod_GetModAsset_Params params;
	params.AssetName = AssetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.GetModActiveRemainingPct
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ARemnantWeaponMod::GetModActiveRemainingPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.GetModActiveRemainingPct");

	ARemnantWeaponMod_GetModActiveRemainingPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.GetClientAimVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 AimOrigin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 AimEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantWeaponMod::GetClientAimVector(struct FVector* AimOrigin, struct FVector* AimEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.GetClientAimVector");

	ARemnantWeaponMod_GetClientAimVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AimOrigin != nullptr)
		*AimOrigin = params.AimOrigin;
	if (AimEnd != nullptr)
		*AimEnd = params.AimEnd;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.CanUse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantWeaponMod::CanUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.CanUse");

	ARemnantWeaponMod_CanUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.CanDeactivateMod
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantWeaponMod::CanDeactivateMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.CanDeactivateMod");

	ARemnantWeaponMod_CanDeactivateMod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.CalculateClientAimVector
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 AimOrigin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 AimEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantWeaponMod::CalculateClientAimVector(struct FVector* AimOrigin, struct FVector* AimEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.CalculateClientAimVector");

	ARemnantWeaponMod_CalculateClientAimVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AimOrigin != nullptr)
		*AimOrigin = params.AimOrigin;
	if (AimEnd != nullptr)
		*AimEnd = params.AimEnd;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.AreAssetsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARemnantWeaponMod::AreAssetsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.AreAssetsLoaded");

	ARemnantWeaponMod_AreAssetsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.RemnantWeaponMod.ApplyDamageInfoToModPower
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                          ModPowerScalar                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnorePenalties               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantWeaponMod::ApplyDamageInfoToModPower(const struct FDamageInfo& DamageInfo, float ModPowerScalar, bool bForce, bool bIgnorePenalties)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.ApplyDamageInfoToModPower");

	ARemnantWeaponMod_ApplyDamageInfoToModPower_Params params;
	params.DamageInfo = DamageInfo;
	params.ModPowerScalar = ModPowerScalar;
	params.bForce = bForce;
	params.bIgnorePenalties = bIgnorePenalties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.RemnantWeaponMod.AddModPower
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BonusModPowerMod               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARemnantWeaponMod::AddModPower(float Damage, float BonusModPowerMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.RemnantWeaponMod.AddModPower");

	ARemnantWeaponMod_AddModPower_Params params;
	params.Damage = Damage;
	params.BonusModPowerMod = BonusModPowerMod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.SpectatorTargetComponent.OnSpectatorTargetUnavailable
// (Final, Native, Public, BlueprintCallable)
void USpectatorTargetComponent::OnSpectatorTargetUnavailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.SpectatorTargetComponent.OnSpectatorTargetUnavailable");

	USpectatorTargetComponent_OnSpectatorTargetUnavailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.UtilityItem.UseCharge
// (Final, Native, Public, BlueprintCallable)
void AUtilityItem::UseCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.UtilityItem.UseCharge");

	AUtilityItem_UseCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.UtilityItem.Recharge
// (Final, Native, Public, BlueprintCallable)
void AUtilityItem::Recharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.UtilityItem.Recharge");

	AUtilityItem_Recharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.UtilityItem.GetCooldownPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AUtilityItem::GetCooldownPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.UtilityItem.GetCooldownPct");

	AUtilityItem_GetCooldownPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.UtilityItem.GetCharges
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AUtilityItem::GetCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.UtilityItem.GetCharges");

	AUtilityItem_GetCharges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.WorldResetInterface.OnWorldReset
// (Event, Public, BlueprintEvent)
void UWorldResetInterface::OnWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.WorldResetInterface.OnWorldReset");

	UWorldResetInterface_OnWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.WorldResetInterface.OnNotifyAllWorldReset
// (Event, Public, BlueprintEvent)
void UWorldResetInterface::OnNotifyAllWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.WorldResetInterface.OnNotifyAllWorldReset");

	UWorldResetInterface_OnNotifyAllWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.WorldResetUtil.IsWorldResetInProgress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldResetUtil::STATIC_IsWorldResetInProgress(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.WorldResetUtil.IsWorldResetInProgress");

	UWorldResetUtil_IsWorldResetInProgress_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWorldResetUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.WorldResetUtil.GetWorldResetColorIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UWorldResetUtil::STATIC_GetWorldResetColorIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.WorldResetUtil.GetWorldResetColorIndex");

	UWorldResetUtil_GetWorldResetColorIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UWorldResetUtil>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.UpdateLevelScaling
// (Final, Native, Protected, BlueprintCallable)
void AZoneActor::UpdateLevelScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.UpdateLevelScaling");

	AZoneActor_UpdateLevelScaling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.UnloadZone
// (Final, Native, Public, BlueprintCallable)
void AZoneActor::UnloadZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.UnloadZone");

	AZoneActor_UnloadZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.OnResourcesLoad
// (Final, Native, Protected)
void AZoneActor::OnResourcesLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.OnResourcesLoad");

	AZoneActor_OnResourcesLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.OnRep_ServerState
// (Final, Native, Protected)
void AZoneActor::OnRep_ServerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.OnRep_ServerState");

	AZoneActor_OnRep_ServerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.OnRep_Level
// (Final, Native, Protected)
void AZoneActor::OnRep_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.OnRep_Level");

	AZoneActor_OnRep_Level_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.OnMapGenInitialized
// (Final, Native, Protected)
void AZoneActor::OnMapGenInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.OnMapGenInitialized");

	AZoneActor_OnMapGenInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.OnMapGenFullyLoaded
// (Final, Native, Protected)
void AZoneActor::OnMapGenFullyLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.OnMapGenFullyLoaded");

	AZoneActor_OnMapGenFullyLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.OnMapGenFailed
// (Final, Native, Protected)
void AZoneActor::OnMapGenFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.OnMapGenFailed");

	AZoneActor_OnMapGenFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.OnFinalizeLoad
// (Final, Native, Protected)
void AZoneActor::OnFinalizeLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.OnFinalizeLoad");

	AZoneActor_OnFinalizeLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.LoadZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Link                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZoneActor::LoadZone(const struct FName& Link)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.LoadZone");

	AZoneActor_LoadZone_Params params;
	params.Link = Link;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneActor.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZoneActor::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.IsLoaded");

	AZoneActor_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.IsFullyUnloaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZoneActor::IsFullyUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.IsFullyUnloaded");

	AZoneActor_IsFullyUnloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.IsChildZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZoneActor::IsChildZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.IsChildZone");

	AZoneActor_IsChildZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.HasFailedLoad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZoneActor::HasFailedLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.HasFailedLoad");

	AZoneActor_HasFailedLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.GetZoneStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EZoneStatus                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EZoneStatus AZoneActor::GetZoneStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.GetZoneStatus");

	AZoneActor_GetZoneStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.GetZoneLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AZoneActor::GetZoneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.GetZoneLevel");

	AZoneActor_GetZoneLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.GetUniqueName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AZoneActor::GetUniqueName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.GetUniqueName");

	AZoneActor_GetUniqueName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.GetTOD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AZoneActor::GetTOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.GetTOD");

	AZoneActor_GetTOD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.GetQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ARemnantQuest*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARemnantQuest* AZoneActor::GetQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.GetQuest");

	AZoneActor_GetQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.GetParentZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* AZoneActor::GetParentZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.GetParentZone");

	AZoneActor_GetParentZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.GetItemLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AZoneActor::GetItemLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.GetItemLevel");

	AZoneActor_GetItemLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneActor.ContainsActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZoneActor::ContainsActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneActor.ContainsActor");

	AZoneActor_ContainsActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneManager.UnlockAllWaypoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UZoneManager::UnlockAllWaypoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.UnlockAllWaypoints");

	UZoneManager_UnlockAllWaypoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneManager.GetZoneForSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* UZoneManager::GetZoneForSlot(int SlotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.GetZoneForSlot");

	UZoneManager_GetZoneForSlot_Params params;
	params.SlotID = SlotID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneManager.GetZoneForActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* UZoneManager::STATIC_GetZoneForActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.GetZoneForActor");

	UZoneManager_GetZoneForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UZoneManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneManager.GetZoneByNameID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   NameID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* UZoneManager::STATIC_GetZoneByNameID(class UObject* WorldContextObject, const struct FName& NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.GetZoneByNameID");

	UZoneManager_GetZoneByNameID_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UZoneManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneManager.GetZoneByID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* UZoneManager::STATIC_GetZoneByID(class UObject* WorldContextObject, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.GetZoneByID");

	UZoneManager_GetZoneByID_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UZoneManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneManager.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UZoneManager*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UZoneManager* UZoneManager::STATIC_GetInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.GetInstance");

	UZoneManager_GetInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UZoneManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneManager.GetBiomeForActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UZoneManager::STATIC_GetBiomeForActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.GetBiomeForActor");

	UZoneManager_GetBiomeForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UZoneManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneManager.DestroyZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AZoneActor*              Zone                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZoneManager::DestroyZone(class AZoneActor* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.DestroyZone");

	UZoneManager_DestroyZone_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneManager.CreateZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ZoneActorBP                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SeedOverride                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* UZoneManager::CreateZone(int SlotID, class UClass* ZoneActorBP, int SeedOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneManager.CreateZone");

	UZoneManager_CreateZone_Params params;
	params.SlotID = SlotID;
	params.ZoneActorBP = ZoneActorBP;
	params.SeedOverride = SeedOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.TravelToWaypoint
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   LinkNameID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZoneLinkComponent::TravelToWaypoint(const struct FName& LinkNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.TravelToWaypoint");

	UZoneLinkComponent_TravelToWaypoint_Params params;
	params.LinkNameID = LinkNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneLinkComponent.TravelToDestinationZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Instant                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZoneLinkComponent::TravelToDestinationZone(bool Force, bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.TravelToDestinationZone");

	UZoneLinkComponent_TravelToDestinationZone_Params params;
	params.Force = Force;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneLinkComponent.OnRep_NameID
// (Final, Native, Public)
void UZoneLinkComponent::OnRep_NameID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.OnRep_NameID");

	UZoneLinkComponent_OnRep_NameID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneLinkComponent.OnRep_IsRespawnZoneLink
// (Final, Native, Public)
void UZoneLinkComponent::OnRep_IsRespawnZoneLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.OnRep_IsRespawnZoneLink");

	UZoneLinkComponent_OnRep_IsRespawnZoneLink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneLinkComponent.IsWaypoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UZoneLinkComponent::IsWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.IsWaypoint");

	UZoneLinkComponent_IsWaypoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.IsRespawnZoneLink
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UZoneLinkComponent::IsRespawnZoneLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.IsRespawnZoneLink");

	UZoneLinkComponent_IsRespawnZoneLink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.IsLinkActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UZoneLinkComponent::IsLinkActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.IsLinkActive");

	UZoneLinkComponent_IsLinkActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.IsDestinationZoneLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UZoneLinkComponent::IsDestinationZoneLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.IsDestinationZoneLoaded");

	UZoneLinkComponent_IsDestinationZoneLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.HasBeenUsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UZoneLinkComponent::HasBeenUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.HasBeenUsed");

	UZoneLinkComponent_HasBeenUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EZoneLinkType                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EZoneLinkType UZoneLinkComponent::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.GetType");

	UZoneLinkComponent_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.GetSpawnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASpawnPoint*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASpawnPoint* UZoneLinkComponent::GetSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.GetSpawnPoint");

	UZoneLinkComponent_GetSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.GetLinkInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FZoneLinkInfo           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FZoneLinkInfo UZoneLinkComponent::GetLinkInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.GetLinkInfo");

	UZoneLinkComponent_GetLinkInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.GetDestinationZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AZoneActor*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AZoneActor* UZoneLinkComponent::GetDestinationZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.GetDestinationZone");

	UZoneLinkComponent_GetDestinationZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.GetAccessibleWaypoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FZoneLinkInfo>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FZoneLinkInfo> UZoneLinkComponent::GetAccessibleWaypoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.GetAccessibleWaypoints");

	UZoneLinkComponent_GetAccessibleWaypoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Remnant.ZoneLinkComponent.ActivateLink
// (Final, Native, Public, BlueprintCallable)
void UZoneLinkComponent::ActivateLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneLinkComponent.ActivateLink");

	UZoneLinkComponent_ActivateLink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneRegion.OnRegionExit
// (Event, Public, BlueprintEvent)
void AZoneRegion::OnRegionExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneRegion.OnRegionExit");

	AZoneRegion_OnRegionExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneRegion.OnRegionEnter
// (Event, Public, BlueprintEvent)
void AZoneRegion::OnRegionEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneRegion.OnRegionEnter");

	AZoneRegion_OnRegionEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Remnant.ZoneRegion.Contains
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AZoneRegion::Contains(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant.ZoneRegion.Contains");

	AZoneRegion_Contains_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
