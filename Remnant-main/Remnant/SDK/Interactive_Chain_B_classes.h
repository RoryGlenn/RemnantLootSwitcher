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

// BlueprintGeneratedClass Interactive_Chain_B.Interactive_Chain_B_C
// 0x0039 (FullSize[0x04B1] - InheritedSize[0x0478])
class AInteractive_Chain_B_C : public AInteractive_Bell_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Hanging_Lantern_Fire_Loop;                                 // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Fire_Small;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Snow_Hut_MeatHook_A;                                    // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                ChainLength;                                               // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VQI2[0x4];                                     // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Meat_Mesh;                                                 // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Light_;                                                    // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Chain_B.Interactive_Chain_B_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void MulticastPushBell(const struct FVector& Source, const struct FVector& Velocity);
	void ExecuteUbergraph_Interactive_Chain_B(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
