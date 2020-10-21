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

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.MakePlayerIDAndName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FName                   NameID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Name                           (Parm, OutParm)
void UWidget_CheckpointNotifications_C::MakePlayerIDAndName(const struct FString& PlayerName, const struct FString& Prefix, struct FName* NameID, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.MakePlayerIDAndName");

	UWidget_CheckpointNotifications_C_MakePlayerIDAndName_Params params;
	params.PlayerName = PlayerName;
	params.Prefix = Prefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NameID != nullptr)
		*NameID = params.NameID;
	if (Name != nullptr)
		*Name = params.Name;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.AddCustomNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TimeOverride                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   CustomText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              CustomIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CheckpointNotifications_C::AddCustomNotification(const struct FName& NameID, float TimeOverride, const struct FText& CustomText, class UTexture2D* CustomIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.AddCustomNotification");

	UWidget_CheckpointNotifications_C_AddCustomNotification_Params params;
	params.NameID = NameID;
	params.TimeOverride = TimeOverride;
	params.CustomText = CustomText;
	params.CustomIcon = CustomIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.ClearAllNotifications
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_CheckpointNotifications_C::ClearAllNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.ClearAllNotifications");

	UWidget_CheckpointNotifications_C_ClearAllNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.RemoveNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CheckpointNotifications_C::RemoveNotification(const struct FName& NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.RemoveNotification");

	UWidget_CheckpointNotifications_C_RemoveNotification_Params params;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.CanAddNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_CheckpointNotifications_C::CanAddNotification(const struct FName& NameID, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.CanAddNotification");

	UWidget_CheckpointNotifications_C_CanAddNotification_Params params;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.AddNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TimeOverride                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CheckpointNotifications_C::AddNotification(const struct FName& NameID, float TimeOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.AddNotification");

	UWidget_CheckpointNotifications_C_AddNotification_Params params;
	params.NameID = NameID;
	params.TimeOverride = TimeOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_CheckpointNotifications_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.Construct");

	UWidget_CheckpointNotifications_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.PlayerJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_CheckpointNotifications_C::PlayerJoined(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.PlayerJoined");

	UWidget_CheckpointNotifications_C_PlayerJoined_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.PlayerLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWidget_CheckpointNotifications_C::PlayerLeft(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.PlayerLeft");

	UWidget_CheckpointNotifications_C_PlayerLeft_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.ExecuteUbergraph_Widget_CheckpointNotifications
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_CheckpointNotifications_C::ExecuteUbergraph_Widget_CheckpointNotifications(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.ExecuteUbergraph_Widget_CheckpointNotifications");

	UWidget_CheckpointNotifications_C_ExecuteUbergraph_Widget_CheckpointNotifications_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
