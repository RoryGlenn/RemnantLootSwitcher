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

// WidgetBlueprintGeneratedClass Widget_CheckpointNotifications.Widget_CheckpointNotifications_C
// 0x0017 (FullSize[0x0260] - InheritedSize[0x0249])
class UWidget_CheckpointNotifications_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData_WJ4V[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                List;                                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CheckpointNotifications.Widget_CheckpointNotifications_C");
		return ptr;
	}


	void MakePlayerIDAndName(const struct FString& PlayerName, const struct FString& Prefix, struct FName* NameID, struct FText* Name);
	void AddCustomNotification(const struct FName& NameID, float TimeOverride, const struct FText& CustomText, class UTexture2D* CustomIcon);
	void ClearAllNotifications();
	void RemoveNotification(const struct FName& NameID);
	void CanAddNotification(const struct FName& NameID, bool* Out);
	void AddNotification(const struct FName& NameID, float TimeOverride);
	void Construct();
	void PlayerJoined(const struct FString& PlayerName);
	void PlayerLeft(const struct FString& PlayerName);
	void ExecuteUbergraph_Widget_CheckpointNotifications(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
