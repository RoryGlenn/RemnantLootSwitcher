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

// BlueprintGeneratedClass Interactive_Dragon_Crystal_Survival.Interactive_Dragon_Crystal_Survival_C
// 0x00B0 (FullSize[0x0570] - InheritedSize[0x04C0])
class AInteractive_Dragon_Crystal_Survival_C : public AInteractive_DragonCrystal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             UI_Node;                                                   // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_WayPoint_Island_Survival_Blast_Activate;                 // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Loop_Rock_4;                                           // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Loop_Rock_3;                                           // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Loop_Rock_2;                                           // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Loop_Main;                                             // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_WayPoint_Island_Survival_Glow;                           // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTweenComponent*                             Tween1;                                                    // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Survival_Shell_Main;                                   // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Survival_Shell_Rock_2;                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Survival_Shell_Rock_3;                                 // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Survival_Shell_Rock_4;                                 // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_WayPoint_Island_Blast_3;                                 // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                    // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Animate_PP_On_Sphere_Radius_C70C4A184FB23F9D4B8EDAAADBFD28EE; // 0x0540(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Animate_PP_On_Light_Intensity_C70C4A184FB23F9D4B8EDAAADBFD28EE; // 0x0544(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Animate_PP_On_PP_Blend_Radius_C70C4A184FB23F9D4B8EDAAADBFD28EE; // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Animate_PP_On__Direction_C70C4A184FB23F9D4B8EDAAADBFD28EE; // 0x054C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S04P[0x3];                                     // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Animate_PP_On;                                             // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Animate_PP_Radius_Off_Sphere_Radius_4D1F121D44563F806E910A92F439D703; // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Animate_PP_Radius_Off_Light_Intensity_4D1F121D44563F806E910A92F439D703; // 0x055C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Animate_PP_Radius_Off_PP_Blend_Radius_4D1F121D44563F806E910A92F439D703; // 0x0560(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Animate_PP_Radius_Off__Direction_4D1F121D44563F806E910A92F439D703; // 0x0564(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_91RX[0x3];                                     // 0x0565(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Animate_PP_Radius_Off;                                     // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Dragon_Crystal_Survival.Interactive_Dragon_Crystal_Survival_C");
		return ptr;
	}


	void PlayActivateVFX();
	void Animate_PP_Radius_Off__FinishedFunc();
	void Animate_PP_Radius_Off__UpdateFunc();
	void Animate_PP_On__FinishedFunc();
	void Animate_PP_On__UpdateFunc();
	void OnBeginActivation();
	void OnBeginGrab(class ARemnantCharacter* Player);
	void State_Active();
	void MultiDisableWaypoint();
	void ActivateIdleVFX();
	void OnActivate();
	void OnStateChange_Event_1(const struct FName& StateName, const struct FName& PreviousStateName);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Interactive_Dragon_Crystal_Survival(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
