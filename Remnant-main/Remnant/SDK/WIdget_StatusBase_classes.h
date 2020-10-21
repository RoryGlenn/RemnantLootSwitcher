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

// WidgetBlueprintGeneratedClass WIdget_StatusBase.WIdget_StatusBase_C
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class UWIdget_StatusBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WIdget_StatusBase.WIdget_StatusBase_C");
		return ptr;
	}


	void Add_Existing_Actions(class UActionComponent** Action_Component);
	void Get_Action_Component(class UActionComponent** Action_Component);
	void On_Action_Added(class UActionBase* Action);
	void ExecuteUbergraph_WIdget_StatusBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
