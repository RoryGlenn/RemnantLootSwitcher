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

// BlueprintGeneratedClass PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C
// 0x0001 (FullSize[0x0031] - InheritedSize[0x0030])
class UPlayStateEffect_WorldReset_C : public UPlayStateEffect
{
public:
	TEnumAsByte<EWorldResetState>                      State;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C");
		return ptr;
	}


	bool TickTransition(class UPlayStateComponent* Component, float DeltaSeconds);
	void Apply(class UPlayStateComponent* Component, class UPlayStateEffect* Previous);
	struct FString GetEditorLabel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
