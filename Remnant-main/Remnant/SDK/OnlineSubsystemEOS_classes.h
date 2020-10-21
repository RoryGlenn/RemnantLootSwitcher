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

// Class OnlineSubsystemEOS.NetConnectionEOS
// 0x0008 (FullSize[0x18F0] - InheritedSize[0x18E8])
class UNetConnectionEOS : public UIpConnection
{
public:
	unsigned char                                      UnknownData_J8V7[0x8];                                     // 0x18E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetConnectionEOS");
		return ptr;
	}


};

// Class OnlineSubsystemEOS.NetDriverEOS
// 0x0008 (FullSize[0x0770] - InheritedSize[0x0768])
class UNetDriverEOS : public UIpNetDriver
{
public:
	bool                                               bIsPassthrough;                                            // 0x0768(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsUsingP2PSockets;                                        // 0x0769(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6LM1[0x6];                                     // 0x076A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetDriverEOS");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
