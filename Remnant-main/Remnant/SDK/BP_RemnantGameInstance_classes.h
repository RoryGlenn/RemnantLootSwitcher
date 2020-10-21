#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RemnantGameInstance.BP_RemnantGameInstance_C
// 0x00E0 (FullSize[0x03F0] - InheritedSize[0x0310])
class UBP_RemnantGameInstance_C : public URemnantGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FText>                               StatusChangeDialogQueue;                                   // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSinglePlayer;                                            // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForceShow;                                                 // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JVBM[0x6];                                     // 0x032A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               MatchmakingEventQueue;                                     // 0x0330(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGfeSDKHighlightDefinition>          HighlightDefinitions;                                      // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventOnPreQuitToMainMenu;                                  // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	unsigned char                                      DialogJoinGame[0x28];                                      // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_RemnantGameInstance.BP_RemnantGameInstance_C.DialogJoinGame
	unsigned char                                      DialogPressAnyKey[0x28];                                   // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_RemnantGameInstance.BP_RemnantGameInstance_C.DialogPressAnyKey


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantGameInstance.BP_RemnantGameInstance_C");
		return ptr;
	}


	void SpawnControllerDialog();
	void SpawnStatusChangeDialog(const struct FText& Message);
	void AddStatusChangeDialog(const struct FText& Message);
	void OnFailure_439D53B841727DC5E85A82B7BA56C0C0(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_439D53B841727DC5E85A82B7BA56C0C0(EGfeSDKReturnCode GfeSdkReturnCode, const struct FGfeSDKCreateResponse& GfeSdkProperties);
	void OnFailure_52FD5A90473978B64A90089314AE6DE0(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_52FD5A90473978B64A90089314AE6DE0(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnFailure_943CEC884E25F69E09D832B4BA241281(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_943CEC884E25F69E09D832B4BA241281(EGfeSDKReturnCode GfeSdkReturnCode);
	void ReceiveInit();
	void CreatePersistenceIOWidget();
	void OnControllerConnectionChanged_Event_1(bool Connected);
	void ReceiveShutdown();
	void CheckConnectionStatusChanges();
	void OnStatusChanged_Event_1();
	void StatusChangeDialogResult(const struct FName& Result);
	void CheckStatusChangeDialogQueue();
	void CheckConnectionStatus();
	void OnOnlineUnavailable_Event_1();
	void OnShowEventMessage_Event_1(const struct FText& Heading, const struct FText& Message);
	void OnWaitDialog_Event_1(bool Show);
	void OnNetWaitDialog_Event_1(bool Show);
	void OnPreQuitToMainMenu();
	void OnShowMatchmakingEventMessage_Event_1(const struct FText& Heading, const struct FText& Message, bool AlwaysOnTop);
	void OnPresenceJoinResult_Event_1(EPresenceJoinResult Result);
	void OnDialogResult_Event_1(const struct FName& Result);
	void OnWaitCustomLoginDialog_Event_1(bool Show);
	void OnLoginCompleted_Event_1();
	void OnExternalAuthFail_Event_1();
	void OnFullGameAvailable();
	void ExecuteUbergraph_BP_RemnantGameInstance(int EntryPoint);
	void EventOnPreQuitToMainMenu__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
