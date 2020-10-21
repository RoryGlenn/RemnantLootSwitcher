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

// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (FullSize[0x0730] - InheritedSize[0x0720])
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                             // 0x0720(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRRT[0xC];                                     // 0x0724(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HTML5Networking.WebSocketNetDriver");
		return ptr;
	}


};

// Class HTML5Networking.WebSocketConnection
// 0x0010 (FullSize[0x1898] - InheritedSize[0x1888])
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_8QJG[0x10];                                    // 0x1888(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HTML5Networking.WebSocketConnection");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
