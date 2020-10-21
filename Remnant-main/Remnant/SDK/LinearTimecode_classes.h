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

// Class LinearTimecode.LinearTimecodeComponent
// 0x0068 (FullSize[0x02C0] - InheritedSize[0x0258])
class ULinearTimecodeComponent : public USceneComponent
{
public:
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDropTimecode                               DropTimecode;                                              // 0x0260(0x001C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4OTF[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTimecodeChange;                                          // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B3DL[0x30];                                    // 0x0290(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.LinearTimecodeComponent");
		return ptr;
	}


	static void STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int FrameNumber, struct FDropTimecode* OutTimecode);
	static void STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int* FrameNumber);
	int GetDropFrameNumber();
};

// Class LinearTimecode.DropTimecodeToStringConversion
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.DropTimecodeToStringConversion");
		return ptr;
	}


	static struct FString STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
