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

// BlueprintGeneratedClass BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C
// 0x0011 (FullSize[0x03B9] - InheritedSize[0x03A8])
class ABP_ProjectileVisualization_Base_C : public AProjectileVisualization
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckLineOfSightForImpactColor;                            // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C");
		return ptr;
	}


	bool PreDraw(const struct FProjectileVisualizationParams& Params, struct FProjectileVisualizationContext* Context);
	void GetRadius(float* Radius);
	void PostDrawPath(const struct FProjectileVisualizationParams& Params, const struct FProjectileVisualizationContext& Context, const struct FLinearColor& DrawColor);
	void ExecuteUbergraph_BP_ProjectileVisualization_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
