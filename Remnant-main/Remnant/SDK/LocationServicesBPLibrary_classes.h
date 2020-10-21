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

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULocationServices : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServices");
		return ptr;
	}


	static bool STATIC_StopLocationServices();
	static bool STATIC_StartLocationServices();
	static bool STATIC_IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
	static bool STATIC_InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	static class ULocationServicesImpl* STATIC_GetLocationServicesImpl();
	static struct FLocationServicesData STATIC_GetLastKnownLocation();
	static bool STATIC_AreLocationServicesEnabled();
};

// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServicesImpl");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
