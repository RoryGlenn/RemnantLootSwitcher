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
// Enums
//---------------------------------------------------------------------------

// Enum GunfireSaveSystem.EPersistenceHasResult
enum class EPersistenceHasResult : uint8_t
{
	Empty                          = 0,
	Exists                         = 1,
	Corrupt                        = 2,
	Unknown                        = 3,
	MAX                            = 4,

};

// Enum GunfireSaveSystem.EPersistenceSaveResult
enum class EPersistenceSaveResult : uint8_t
{
	Success                        = 0,
	Disabled                       = 1,
	Busy                           = 2,
	Unknown                        = 3,
	MAX                            = 4,

};

// Enum GunfireSaveSystem.EPersistenceLoadResult
enum class EPersistenceLoadResult : uint8_t
{
	Success                        = 0,
	DoesNotExist                   = 1,
	Corrupt                        = 2,
	TooNew                         = 3,
	Unknown                        = 4,
	MAX                            = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GunfireSaveSystem.SaveGameUserSetting
// 0x0020
struct FSaveGameUserSetting
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct GunfireSaveSystem.PersistenceKey
// 0x0010
struct FPersistenceKey
{
	struct FName                                       ContainerKey;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           PersistentID;                                              // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct GunfireSaveSystem.SaveGameAchievementProgress
// 0x0014
struct FSaveGameAchievementProgress
{
	struct FName                                       AchievementId;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_575N[0x8];                                     // 0x000C(0x0008) MISSED OFFSET (PADDING)

};
// ScriptStruct GunfireSaveSystem.PersistentReference
// 0x0018
struct FPersistentReference
{
	struct FPersistenceKey                             Key;                                                       // 0x0000(0x0010) (SaveGame, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class AActor*                                      CachedActor;                                               // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};
// ScriptStruct GunfireSaveSystem.PersistenceBlob
// 0x0010
struct FPersistenceBlob
{
	unsigned char                                      UnknownData_08YA[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
