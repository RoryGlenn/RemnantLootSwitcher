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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct NotificationEntry.NotificationEntry
// 0x0058
struct FNotificationEntry
{
	TEnumAsByte<ENotificationType>                     Type_2_B7280C3A4EA1A2D6CF0458AFD39D67D1;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JQGV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Trait_5_797781FD47E59BB81584CCA5DD54FBA9;                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text_8_4F02340648A0BDBCEDC0DCBB44047512;                   // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Prompt_11_1A34370E44F141C5BEFAF288B73850B6;                // 0x0028(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      Item_14_23A96BCC45B7116D3978B88E32CF2DF1;                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value_18_8BB72D4547CD30546B3682B2C180A251;                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AccountAward_21_2C16E6DC4BA39264E824A2BB23B1CEC0;          // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WR2W[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Emote_25_AFBDC38E46E0AF8C1E75D2930484181B;                 // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
