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

// BlueprintGeneratedClass PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C
// 0x0001 (FullSize[0x0031] - InheritedSize[0x0030])
class UPlayStateEffect_LoadingScreen_C : public UPlayStateEffect
{
public:
	bool                                               Show_Loading_Screen;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C");
		return ptr;
	}


	bool TickTransition(class UPlayStateComponent* Component, float DeltaSeconds);
	struct FString GetEditorLabel();
	void Apply(class UPlayStateComponent* Component, class UPlayStateEffect* Previous);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
