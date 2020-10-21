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

// Class GunfireSaveSystem.GunfireSaveSystemSettings
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UGunfireSaveSystemSettings : public UDeveloperSettings
{
public:
	unsigned char                                      SaveGameClass[0x28];                                       // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty GunfireSaveSystem.GunfireSaveSystemSettings.SaveGameClass
	unsigned char                                      SaveProfileClass[0x28];                                    // 0x0060(0x0028) UNKNOWN PROPERTY: SoftClassProperty GunfireSaveSystem.GunfireSaveSystemSettings.SaveProfileClass


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.GunfireSaveSystemSettings");
		return ptr;
	}


};

// Class GunfireSaveSystem.LevelScriptActorGunfire
// 0x0008 (FullSize[0x0340] - InheritedSize[0x0338])
class ALevelScriptActorGunfire : public ALevelScriptActor
{
public:
	uint64_t                                           UniqueIDGenerator;                                         // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.LevelScriptActorGunfire");
		return ptr;
	}


};

// Class GunfireSaveSystem.PersistenceCallbackProxy
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UPersistenceCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	class UPersistenceManager*                         PersistenceManager;                                        // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceCallbackProxy");
		return ptr;
	}


};

// Class GunfireSaveSystem.CommitSaveWithResultCallbackProxy
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UCommitSaveWithResultCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13IQ[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.CommitSaveWithResultCallbackProxy");
		return ptr;
	}


	static class UCommitSaveWithResultCallbackProxy* STATIC_CommitSaveWithResult(class UObject* WorldContextObject, const struct FString& Reason);
};

// Class GunfireSaveSystem.LoadSaveCallbackProxy
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class ULoadSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_19SJ[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.LoadSaveCallbackProxy");
		return ptr;
	}


	static class ULoadSaveCallbackProxy* STATIC_LoadSave(class UObject* WorldContextObject, int Slot);
};

// Class GunfireSaveSystem.PersistenceManager
// 0x0260 (FullSize[0x0290] - InheritedSize[0x0030])
class UPersistenceManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_8X8J[0x98];                                    // 0x0030(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnBackgroundWorkBegin;                                     // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBackgroundWorkEnd;                                       // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVO0[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USaveGameWorld*                              CurrentData;                                               // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USaveGameProfile*                            UserProfile;                                               // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class ULevel*, struct FName>                  LoadedLevels;                                              // 0x0108(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L0KN[0x58];                                    // 0x0158(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULevel*>                              CachedUnloads;                                             // 0x01B0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class ULevel*>                              CachedLoads;                                               // 0x01C0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DO2J[0x8];                                     // 0x01D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, bool>                          ClassCache;                                                // 0x01D8(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XQOL[0x68];                                    // 0x0228(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceManager");
		return ptr;
	}


};

// Class GunfireSaveSystem.LoadProfileSaveCallbackProxy
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class ULoadProfileSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.LoadProfileSaveCallbackProxy");
		return ptr;
	}


	static class ULoadProfileSaveCallbackProxy* STATIC_LoadProfileSave(class UObject* WorldContextObject);
};

// Class GunfireSaveSystem.SaveGamePersistence
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USaveGamePersistence : public USaveGame
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.SaveGamePersistence");
		return ptr;
	}


	void PreCommit(class UPersistenceManager* PersistenceManager);
};

// Class GunfireSaveSystem.ReadSaveCallbackProxy
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UReadSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRJ2[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.ReadSaveCallbackProxy");
		return ptr;
	}


	static class UReadSaveCallbackProxy* STATIC_ReadSave(class UObject* WorldContextObject, int Slot);
};

// Class GunfireSaveSystem.HasSaveCallbackProxy
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UHasSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnComplete;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4RQT[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.HasSaveCallbackProxy");
		return ptr;
	}


	static class UHasSaveCallbackProxy* STATIC_HasSave(class UObject* WorldContextObject, int Slot);
};

// Class GunfireSaveSystem.DeleteSaveCallbackProxy
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UDeleteSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V251[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.DeleteSaveCallbackProxy");
		return ptr;
	}


	static class UDeleteSaveCallbackProxy* STATIC_DeleteSave(class UObject* WorldContextObject, int Slot);
};

// Class GunfireSaveSystem.DeleteProfileSaveCallbackProxy
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UDeleteProfileSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.DeleteProfileSaveCallbackProxy");
		return ptr;
	}


	static class UDeleteProfileSaveCallbackProxy* STATIC_DeleteProfileSave(class UObject* WorldContextObject);
};

// Class GunfireSaveSystem.HasProfileBackupCallbackProxy
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UHasProfileBackupCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    HasBackup;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    NoBackup;                                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.HasProfileBackupCallbackProxy");
		return ptr;
	}


	static class UHasProfileBackupCallbackProxy* STATIC_HasProfileBackup(class UObject* WorldContextObject);
};

// Class GunfireSaveSystem.RestoreProfileBackupCallbackProxy
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class URestoreProfileBackupCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.RestoreProfileBackupCallbackProxy");
		return ptr;
	}


	static class URestoreProfileBackupCallbackProxy* STATIC_RestoreProfileBackup(class UObject* WorldContextObject);
};

// Class GunfireSaveSystem.HasSlotBackupCallbackProxy
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UHasSlotBackupCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    HasBackup;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    NoBackup;                                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XZX3[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.HasSlotBackupCallbackProxy");
		return ptr;
	}


	static class UHasSlotBackupCallbackProxy* STATIC_HasSlotBackup(class UObject* WorldContextObject, int Slot);
};

// Class GunfireSaveSystem.RestoreSlotBackupCallbackProxy
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class URestoreSlotBackupCallbackProxy : public UPersistenceCallbackProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UW9Q[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.RestoreSlotBackupCallbackProxy");
		return ptr;
	}


	static class URestoreSlotBackupCallbackProxy* STATIC_RestoreSlotBackup(class UObject* WorldContextObject, int Slot);
};

// Class GunfireSaveSystem.SaveGameProfile
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class USaveGameProfile : public USaveGamePersistence
{
public:
	TArray<struct FSaveGameUserSetting>                UserSettings;                                              // 0x0028(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FSaveGameAchievementProgress>        AchievementProgress;                                       // 0x0038(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.SaveGameProfile");
		return ptr;
	}


};

// Class GunfireSaveSystem.SaveGameWorld
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class USaveGameWorld : public USaveGamePersistence
{
public:
	bool                                               RequiresFullGame;                                          // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B82S[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           UniqueIDGenerator;                                         // 0x0030(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPersistenceContainer*>               Containers;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.SaveGameWorld");
		return ptr;
	}


};

// Class GunfireSaveSystem.PersistenceBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPersistenceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceBlueprintFunctionLibrary");
		return ptr;
	}


	static void STATIC_SetReference(struct FPersistentReference* Reference, class AActor* InActor);
	static void STATIC_SetDisableCommit(class UObject* WorldContextObject, bool DisableCommit);
	static class AActor* STATIC_GetReference(class UObject* WorldContextObject, struct FPersistentReference* Reference);
	static class USaveGameProfile* STATIC_GetProfileSave(class UObject* WorldContextObject);
	static class UPersistenceManager* STATIC_GetPersistenceManager(class UObject* WorldContextObject);
	static class USaveGameWorld* STATIC_GetCurrentSave(class UObject* WorldContextObject);
	static void STATIC_CopyReference(const struct FPersistentReference& from, struct FPersistentReference* to);
	static void STATIC_CommitSave(class UObject* WorldContextObject, const struct FString& Reason);
	static void STATIC_ClearReference(struct FPersistentReference* Reference);
};

// Class GunfireSaveSystem.PersistenceComponent
// 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
class UPersistenceComponent : public UActorComponent
{
public:
	uint64_t                                           UniqueId;                                                  // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       SaveKey;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               HasModifiedSaveValues;                                     // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S8YT[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               PersistTransform;                                          // 0x010C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PersistDestroyed;                                          // 0x010D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5S0N[0x2];                                     // 0x010E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceComponent");
		return ptr;
	}


};

// Class GunfireSaveSystem.PersistenceContainer
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UPersistenceContainer : public UObject
{
public:
	struct FName                                       Key;                                                       // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<unsigned char>                              RawData;                                                   // 0x0030(0x0010) (ZeroConstructor, SaveGame, Deprecated, Protected, NativeAccessSpecifierProtected)
	struct FPersistenceBlob                            Blob;                                                      // 0x0040(0x0010) (SaveGame, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K1BJ[0x40];                                    // 0x0050(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceContainer");
		return ptr;
	}


};

// Class GunfireSaveSystem.PersistenceSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UPersistenceSettings : public UObject
{
public:
	bool                                               AllowEditorSaving;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutomaticallyCreateSave;                                   // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z8YP[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
