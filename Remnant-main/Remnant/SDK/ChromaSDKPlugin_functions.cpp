// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
// (Final, Native, Public, BlueprintCallable)
void UChromaSDKPluginAnimation1DObject::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload");

	UChromaSDKPluginAnimation1DObject_Unload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChromaSDKPluginAnimation1DObject::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded");

	UChromaSDKPluginAnimation1DObject_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
// (Final, Native, Public, BlueprintCallable)
void UChromaSDKPluginAnimation2DObject::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload");

	UChromaSDKPluginAnimation2DObject_Unload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChromaSDKPluginAnimation2DObject::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded");

	UChromaSDKPluginAnimation2DObject_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_UnloadAnimationName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName");

	UChromaSDKPluginBPLibrary_UnloadAnimationName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_UnloadAnimation(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation");

	UChromaSDKPluginBPLibrary_UnloadAnimation_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            numberOfFrames                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_TrimStartFramesName(const struct FString& animationName, int numberOfFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFramesName");

	UChromaSDKPluginBPLibrary_TrimStartFramesName_Params params;
	params.animationName = animationName;
	params.numberOfFrames = numberOfFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            numberOfFrames                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_TrimStartFrames(int AnimationID, int numberOfFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFrames");

	UChromaSDKPluginBPLibrary_TrimStartFrames_Params params;
	params.AnimationID = AnimationID;
	params.numberOfFrames = numberOfFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_TrimFrameName(const struct FString& animationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrameName");

	UChromaSDKPluginBPLibrary_TrimFrameName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_TrimFrame(int AnimationID, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrame");

	UChromaSDKPluginBPLibrary_TrimFrame_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            lastFrameId                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_TrimEndFramesName(const struct FString& animationName, int lastFrameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFramesName");

	UChromaSDKPluginBPLibrary_TrimEndFramesName_Params params;
	params.animationName = animationName;
	params.lastFrameId = lastFrameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            lastFrameId                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_TrimEndFrames(int AnimationID, int lastFrameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFrames");

	UChromaSDKPluginBPLibrary_TrimEndFrames_Params params;
	params.AnimationID = AnimationID;
	params.lastFrameId = lastFrameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToLinearColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            colorParam                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_ToLinearColor(int colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToLinearColor");

	UChromaSDKPluginBPLibrary_ToLinearColor_Params params;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToBGR
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_ToBGR(const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToBGR");

	UChromaSDKPluginBPLibrary_ToBGR_Params params;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SubtractNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeys");

	UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_StopAnimationType(TEnumAsByte<EChromaSDKDeviceEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType");

	UChromaSDKPluginBPLibrary_StopAnimationType_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         animationNames                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_StopAnimations(TArray<struct FString> animationNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations");

	UChromaSDKPluginBPLibrary_StopAnimations_Params params;
	params.animationNames = animationNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_StopAnimationComposite(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite");

	UChromaSDKPluginBPLibrary_StopAnimationComposite_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_StopAnimation(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation");

	UChromaSDKPluginBPLibrary_StopAnimation_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll
// (Final, Native, Static, Public, BlueprintCallable)
void UChromaSDKPluginBPLibrary::STATIC_StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll");

	UChromaSDKPluginBPLibrary_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKMouseLed> led                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed> led, const struct FLinearColor& colorParam, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor");

	UChromaSDKPluginBPLibrary_SetMouseLedColor_Params params;
	params.led = led;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysNonZeroColorName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorName");

	UChromaSDKPluginBPLibrary_SetKeysNonZeroColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysNonZeroColorAllFramesName(const struct FString& animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFramesName_Params params;
	params.animationName = animationName;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysNonZeroColorAllFrames(int AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFrames");

	UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysNonZeroColor(int AnimationID, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColor");

	UChromaSDKPluginBPLibrary_SetKeysNonZeroColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGBName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorRGBName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGBName");

	UChromaSDKPluginBPLibrary_SetKeysColorRGBName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGB
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorRGB(int AnimationID, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGB");

	UChromaSDKPluginBPLibrary_SetKeysColorRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName");

	UChromaSDKPluginBPLibrary_SetKeysColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGBName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFramesRGBName(const struct FString& animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGBName");

	UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.Keys = Keys;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGB
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFramesRGB(int AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGB");

	UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.Keys = Keys;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFramesName(const struct FString& animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetKeysColorAllFramesName_Params params;
	params.animationName = animationName;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysColorAllFrames(int AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames");

	UChromaSDKPluginBPLibrary_SetKeysColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeysColor(int AnimationID, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor");

	UChromaSDKPluginBPLibrary_SetKeysColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Keys = Keys;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyNonZeroColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorName");

	UChromaSDKPluginBPLibrary_SetKeyNonZeroColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyNonZeroColorAllFramesName(const struct FString& animationName, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFramesName_Params params;
	params.animationName = animationName;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyNonZeroColorAllFrames(int AnimationID, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFrames");

	UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyNonZeroColor(int AnimationID, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColor");

	UChromaSDKPluginBPLibrary_SetKeyNonZeroColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName");

	UChromaSDKPluginBPLibrary_SetKeyColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorAllFramesName(const struct FString& animationName, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetKeyColorAllFramesName_Params params;
	params.animationName = animationName;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyColorAllFrames(int AnimationID, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames");

	UChromaSDKPluginBPLibrary_SetKeyColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyColor(int AnimationID, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor");

	UChromaSDKPluginBPLibrary_SetKeyColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor");

	UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params params;
	params.Key = Key;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomFlagName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           flag                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetChromaCustomFlagName(const struct FString& animationName, bool flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomFlagName");

	UChromaSDKPluginBPLibrary_SetChromaCustomFlagName_Params params;
	params.animationName = animationName;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomColorAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_SetChromaCustomColorAllFramesName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomColorAllFramesName");

	UChromaSDKPluginBPLibrary_SetChromaCustomColorAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_ReverseAllFramesName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFramesName");

	UChromaSDKPluginBPLibrary_ReverseAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_ReverseAllFrames(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFrames");

	UChromaSDKPluginBPLibrary_ReverseAllFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            N                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_ReduceFramesName(const struct FString& animationName, int N)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFramesName");

	UChromaSDKPluginBPLibrary_ReduceFramesName_Params params;
	params.animationName = animationName;
	params.N = N;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            N                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_ReduceFrames(int AnimationID, int N)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFrames");

	UChromaSDKPluginBPLibrary_ReduceFrames_Params params;
	params.AnimationID = AnimationID;
	params.N = N;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_PreviewFrameName(const struct FString& animationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrameName");

	UChromaSDKPluginBPLibrary_PreviewFrameName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_PreviewFrame(int AnimationID, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrame");

	UChromaSDKPluginBPLibrary_PreviewFrame_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         animationNames                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_PlayAnimations(TArray<struct FString> animationNames, bool Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations");

	UChromaSDKPluginBPLibrary_PlayAnimations_Params params;
	params.animationNames = animationNames;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_PlayAnimationName(const struct FString& animationName, bool Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationName");

	UChromaSDKPluginBPLibrary_PlayAnimationName_Params params;
	params.animationName = animationName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_PlayAnimationComposite(const struct FString& animationName, bool Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite");

	UChromaSDKPluginBPLibrary_PlayAnimationComposite_Params params;
	params.animationName = animationName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_PlayAnimation(const struct FString& animationName, bool Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation");

	UChromaSDKPluginBPLibrary_PlayAnimation_Params params;
	params.animationName = animationName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OverrideFrameDurationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OverrideFrameDurationName(const struct FString& animationName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OverrideFrameDurationName");

	UChromaSDKPluginBPLibrary_OverrideFrameDurationName_Params params;
	params.animationName = animationName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OffsetNonZeroColorsName(const struct FString& animationName, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsName");

	UChromaSDKPluginBPLibrary_OffsetNonZeroColorsName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OffsetNonZeroColorsAllFramesName(const struct FString& animationName, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFramesName");

	UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFramesName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OffsetNonZeroColorsAllFrames(int AnimationID, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFrames");

	UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OffsetNonZeroColors(int AnimationID, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColors");

	UChromaSDKPluginBPLibrary_OffsetNonZeroColors_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OffsetColorsName(const struct FString& animationName, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsName");

	UChromaSDKPluginBPLibrary_OffsetColorsName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OffsetColorsAllFramesName(const struct FString& animationName, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFramesName");

	UChromaSDKPluginBPLibrary_OffsetColorsAllFramesName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OffsetColorsAllFrames(int AnimationID, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFrames");

	UChromaSDKPluginBPLibrary_OffsetColorsAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_OffsetColors(int AnimationID, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColors");

	UChromaSDKPluginBPLibrary_OffsetColors_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyTargetColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyTargetColorLerpAllFrames(int AnimationID, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyNonZeroTargetColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyNonZeroTargetColorLerpAllFrames(int AnimationID, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityRGBName(const struct FString& animationName, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGBName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityRGBName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityRGB(int AnimationID, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGB");

	UChromaSDKPluginBPLibrary_MultiplyIntensityRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityName(const struct FString& animationName, int frameId, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityColorName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityColorAllFrames(int AnimationID, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityColor(int AnimationID, int frameId, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColor");

	UChromaSDKPluginBPLibrary_MultiplyIntensityColor_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          redIntensity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          greenIntensity                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          blueIntensity                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityAllFramesRGBName(const struct FString& animationName, float redIntensity, float greenIntensity, float blueIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGBName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.redIntensity = redIntensity;
	params.greenIntensity = greenIntensity;
	params.blueIntensity = blueIntensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          redIntensity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          greenIntensity                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          blueIntensity                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityAllFramesRGB(int AnimationID, float redIntensity, float greenIntensity, float blueIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGB");

	UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.redIntensity = redIntensity;
	params.greenIntensity = greenIntensity;
	params.blueIntensity = blueIntensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityAllFramesName(const struct FString& animationName, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesName_Params params;
	params.animationName = animationName;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensityAllFrames(int AnimationID, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyIntensityAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyIntensity(int AnimationID, int frameId, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensity");

	UChromaSDKPluginBPLibrary_MultiplyIntensity_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFramesName");

	UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam1                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam2                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MultiplyColorLerpAllFrames(int AnimationID, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFrames");

	UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRGBName(const struct FString& animationName, int frameCount, float Duration, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGBName");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRGBName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;
	params.Duration = Duration;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRGB(int AnimationID, int frameCount, float Duration, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGB");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;
	params.Duration = Duration;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRandomName(const struct FString& animationName, int frameCount, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomName");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRandomName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhiteName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRandomBlackAndWhiteName(const struct FString& animationName, int frameCount, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhiteName");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhiteName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRandomBlackAndWhite(int AnimationID, int frameCount, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhite");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhite_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesRandom(int AnimationID, int frameCount, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandom");

	UChromaSDKPluginBPLibrary_MakeBlankFramesRandom_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFramesName(const struct FString& animationName, int frameCount, float Duration, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesName");

	UChromaSDKPluginBPLibrary_MakeBlankFramesName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;
	params.Duration = Duration;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_MakeBlankFrames(int AnimationID, int frameCount, float Duration, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFrames");

	UChromaSDKPluginBPLibrary_MakeBlankFrames_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;
	params.Duration = Duration;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_LoadAnimationName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName");

	UChromaSDKPluginBPLibrary_LoadAnimationName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_LoadAnimation(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation");

	UChromaSDKPluginBPLibrary_LoadAnimation_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColorBGR
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            from                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            to                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_LerpColorBGR(int from, int to, float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColorBGR");

	UChromaSDKPluginBPLibrary_LerpColorBGR_Params params;
	params.from = from;
	params.to = to;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            colorParam1                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam2                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_LerpColor(const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2, float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColor");

	UChromaSDKPluginBPLibrary_LerpColor_Params params;
	params.colorParam1 = colorParam1;
	params.colorParam2 = colorParam2;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.Lerp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          amt                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UChromaSDKPluginBPLibrary::STATIC_Lerp(float Start, float End, float amt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.Lerp");

	UChromaSDKPluginBPLibrary_Lerp_Params params;
	params.Start = Start;
	params.End = End;
	params.amt = amt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChromaSDKPluginBPLibrary::STATIC_IsPlatformWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows");

	UChromaSDKPluginBPLibrary_IsPlatformWindows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChromaSDKPluginBPLibrary::STATIC_IsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized");

	UChromaSDKPluginBPLibrary_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChromaSDKPluginBPLibrary::STATIC_IsAnimationTypePlaying(TEnumAsByte<EChromaSDKDeviceEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying");

	UChromaSDKPluginBPLibrary_IsAnimationTypePlaying_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UChromaSDKPluginBPLibrary::STATIC_IsAnimationPlaying(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying");

	UChromaSDKPluginBPLibrary_IsAnimationPlaying_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_InvertColorsAllFramesName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFramesName");

	UChromaSDKPluginBPLibrary_InvertColorsAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_InvertColorsAllFrames(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFrames");

	UChromaSDKPluginBPLibrary_InvertColorsAllFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            sourceFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_InsertFrameName(const struct FString& animationName, int sourceFrame, int targetFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrameName");

	UChromaSDKPluginBPLibrary_InsertFrameName_Params params;
	params.animationName = animationName;
	params.sourceFrame = sourceFrame;
	params.targetFrame = targetFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            sourceFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_InsertFrame(int AnimationID, int sourceFrame, int targetFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrame");

	UChromaSDKPluginBPLibrary_InsertFrame_Params params;
	params.AnimationID = AnimationID;
	params.sourceFrame = sourceFrame;
	params.targetFrame = targetFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_InsertDelayName(const struct FString& animationName, int frameId, int Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelayName");

	UChromaSDKPluginBPLibrary_InsertDelayName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_InsertDelay(int AnimationID, int frameId, int Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelay");

	UChromaSDKPluginBPLibrary_InsertDelay_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetRGB
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetRGB(int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetRGB");

	UChromaSDKPluginBPLibrary_GetRGB_Params params;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetPlayingAnimationId(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId");

	UChromaSDKPluginBPLibrary_GetPlayingAnimationId_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetPlayingAnimationCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount");

	UChromaSDKPluginBPLibrary_GetPlayingAnimationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMouseLedColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKMouseLed> led                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed> led, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMouseLedColor");

	UChromaSDKPluginBPLibrary_GetMouseLedColor_Params params;
	params.led = led;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetMaxRow(TEnumAsByte<EChromaSDKDevice2DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow");

	UChromaSDKPluginBPLibrary_GetMaxRow_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetMaxLeds(TEnumAsByte<EChromaSDKDevice1DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds");

	UChromaSDKPluginBPLibrary_GetMaxLeds_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetMaxColumn(TEnumAsByte<EChromaSDKDevice2DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn");

	UChromaSDKPluginBPLibrary_GetMaxColumn_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetKeyColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName");

	UChromaSDKPluginBPLibrary_GetKeyColorName_Params params;
	params.animationName = animationName;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetKeyColor(int AnimationID, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor");

	UChromaSDKPluginBPLibrary_GetKeyColor_Params params;
	params.AnimationID = AnimationID;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRazerKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<EChromaSDKKeyboardKey> UChromaSDKPluginBPLibrary::STATIC_GetKeyboardRazerKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRazerKey");

	UChromaSDKPluginBPLibrary_GetKeyboardRazerKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardKeyColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UChromaSDKPluginBPLibrary::STATIC_GetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey> Key, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardKeyColor");

	UChromaSDKPluginBPLibrary_GetKeyboardKeyColor_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Colors != nullptr)
		*Colors = params.Colors;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetFrameCountName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName");

	UChromaSDKPluginBPLibrary_GetFrameCountName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetFrameCount(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount");

	UChromaSDKPluginBPLibrary_GetFrameCount_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UChromaSDKPluginBPLibrary::STATIC_GetAnimationName(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName");

	UChromaSDKPluginBPLibrary_GetAnimationName_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetAnimationIdByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex");

	UChromaSDKPluginBPLibrary_GetAnimationIdByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetAnimationId(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId");

	UChromaSDKPluginBPLibrary_GetAnimationId_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetAnimationCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount");

	UChromaSDKPluginBPLibrary_GetAnimationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_GetAnimation(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimation");

	UChromaSDKPluginBPLibrary_GetAnimation_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGBName");

	UChromaSDKPluginBPLibrary_FillZeroColorRGBName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorRGB(int AnimationID, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGB");

	UChromaSDKPluginBPLibrary_FillZeroColorRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorName");

	UChromaSDKPluginBPLibrary_FillZeroColorName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorAllFramesRGB(int AnimationID, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesName");

	UChromaSDKPluginBPLibrary_FillZeroColorAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillZeroColorAllFrames(int AnimationID, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFrames");

	UChromaSDKPluginBPLibrary_FillZeroColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillZeroColor(int AnimationID, int frameId, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColor");

	UChromaSDKPluginBPLibrary_FillZeroColor_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            redThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            greenThreshold                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blueThreshold                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillThresholdRGBColorsAllFramesRGBName(const struct FString& animationName, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.redThreshold = redThreshold;
	params.greenThreshold = greenThreshold;
	params.blueThreshold = blueThreshold;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            redThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            greenThreshold                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blueThreshold                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillThresholdRGBColorsAllFramesRGB(int AnimationID, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.redThreshold = redThreshold;
	params.greenThreshold = greenThreshold;
	params.blueThreshold = blueThreshold;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minRed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minGreen                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minBlue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxRed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxGreen                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxBlue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsMinMaxAllFramesRGBName(const struct FString& animationName, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.minThreshold = minThreshold;
	params.minRed = minRed;
	params.minGreen = minGreen;
	params.minBlue = minBlue;
	params.maxThreshold = maxThreshold;
	params.maxRed = maxRed;
	params.maxGreen = maxGreen;
	params.maxBlue = maxBlue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minRed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minGreen                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            minBlue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxThreshold                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxRed                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxGreen                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxBlue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsMinMaxAllFramesRGB(int AnimationID, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.minThreshold = minThreshold;
	params.minRed = minRed;
	params.minGreen = minGreen;
	params.minBlue = minBlue;
	params.maxThreshold = maxThreshold;
	params.maxRed = maxRed;
	params.maxGreen = maxGreen;
	params.maxBlue = maxBlue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsAllFramesRGBName(const struct FString& animationName, int Threshold, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.Threshold = Threshold;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsAllFramesRGB(int AnimationID, int Threshold, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.Threshold = Threshold;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsAllFramesName(const struct FString& animationName, int Threshold, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesName");

	UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesName_Params params;
	params.animationName = animationName;
	params.Threshold = Threshold;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Threshold                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillThresholdColorsAllFrames(int AnimationID, int Threshold, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFrames");

	UChromaSDKPluginBPLibrary_FillThresholdColorsAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.Threshold = Threshold;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsName(const struct FString& animationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsName");

	UChromaSDKPluginBPLibrary_FillRandomColorsName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsBlackAndWhiteName(const struct FString& animationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteName");

	UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsBlackAndWhiteAllFramesName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFramesName");

	UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsBlackAndWhiteAllFrames(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFrames");

	UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsBlackAndWhite(int AnimationID, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhite");

	UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhite_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsAllFramesName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFramesName");

	UChromaSDKPluginBPLibrary_FillRandomColorsAllFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillRandomColorsAllFrames(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFrames");

	UChromaSDKPluginBPLibrary_FillRandomColorsAllFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillRandomColors(int AnimationID, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColors");

	UChromaSDKPluginBPLibrary_FillRandomColors_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGBName");

	UChromaSDKPluginBPLibrary_FillNonZeroColorRGBName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorRGB(int AnimationID, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGB");

	UChromaSDKPluginBPLibrary_FillNonZeroColorRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorName");

	UChromaSDKPluginBPLibrary_FillNonZeroColorName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorAllFramesRGB(int AnimationID, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesName");

	UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColorAllFrames(int AnimationID, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFrames");

	UChromaSDKPluginBPLibrary_FillNonZeroColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillNonZeroColor(int AnimationID, int frameId, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColor");

	UChromaSDKPluginBPLibrary_FillNonZeroColor_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGBName");

	UChromaSDKPluginBPLibrary_FillColorRGBName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillColorRGB(int AnimationID, int frameId, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGB");

	UChromaSDKPluginBPLibrary_FillColorRGB_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorName");

	UChromaSDKPluginBPLibrary_FillColorName_Params params;
	params.animationName = animationName;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGBName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGBName");

	UChromaSDKPluginBPLibrary_FillColorAllFramesRGBName_Params params;
	params.animationName = animationName;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            red                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            green                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            blue                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillColorAllFramesRGB(int AnimationID, int red, int green, int blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGB");

	UChromaSDKPluginBPLibrary_FillColorAllFramesRGB_Params params;
	params.AnimationID = AnimationID;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesName");

	UChromaSDKPluginBPLibrary_FillColorAllFramesName_Params params;
	params.animationName = animationName;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFrames
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillColorAllFrames(int AnimationID, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFrames");

	UChromaSDKPluginBPLibrary_FillColorAllFrames_Params params;
	params.AnimationID = AnimationID;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FillColor(int AnimationID, int frameId, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColor");

	UChromaSDKPluginBPLibrary_FillColor_Params params;
	params.AnimationID = AnimationID;
	params.frameId = frameId;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            fade                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FadeStartFramesName(const struct FString& animationName, int fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFramesName");

	UChromaSDKPluginBPLibrary_FadeStartFramesName_Params params;
	params.animationName = animationName;
	params.fade = fade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            fade                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FadeStartFrames(int AnimationID, int fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFrames");

	UChromaSDKPluginBPLibrary_FadeStartFrames_Params params;
	params.AnimationID = AnimationID;
	params.fade = fade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            fade                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FadeEndFramesName(const struct FString& animationName, int fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFramesName");

	UChromaSDKPluginBPLibrary_FadeEndFramesName_Params params;
	params.animationName = animationName;
	params.fade = fade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            fade                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_FadeEndFrames(int AnimationID, int fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFrames");

	UChromaSDKPluginBPLibrary_FadeEndFrames_Params params;
	params.AnimationID = AnimationID;
	params.fade = fade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_DuplicateMirrorFramesName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFramesName");

	UChromaSDKPluginBPLibrary_DuplicateMirrorFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_DuplicateMirrorFrames(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFrames");

	UChromaSDKPluginBPLibrary_DuplicateMirrorFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_DuplicateFramesName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFramesName");

	UChromaSDKPluginBPLibrary_DuplicateFramesName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_DuplicateFrames(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFrames");

	UChromaSDKPluginBPLibrary_DuplicateFrames_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrameName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_DuplicateFirstFrameName(const struct FString& animationName, int frameCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrameName");

	UChromaSDKPluginBPLibrary_DuplicateFirstFrameName_Params params;
	params.animationName = animationName;
	params.frameCount = frameCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_DuplicateFirstFrame(int AnimationID, int frameCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrame");

	UChromaSDKPluginBPLibrary_DuplicateFirstFrame_Params params;
	params.AnimationID = AnimationID;
	params.frameCount = frameCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColorsBlackAndWhite2D(TEnumAsByte<EChromaSDKDevice2DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite2D");

	UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite2D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite1D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColorsBlackAndWhite1D(TEnumAsByte<EChromaSDKDevice1DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite1D");

	UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite1D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColors2D(TEnumAsByte<EChromaSDKDevice2DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D");

	UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateRandomColors1D(TEnumAsByte<EChromaSDKDevice1DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D");

	UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::STATIC_CreateColors2D(TEnumAsByte<EChromaSDKDevice2DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D");

	UChromaSDKPluginBPLibrary_CreateColors2D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::STATIC_CreateColors1D(TEnumAsByte<EChromaSDKDevice1DEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D");

	UChromaSDKPluginBPLibrary_CreateColors1D_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysName");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeys");

	UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeysColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeysColor_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameIndex = frameIndex;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeyColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeyColorName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor");

	UChromaSDKPluginBPLibrary_CopyNonZeroKeyColor_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffsetName");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffset");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysName");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeys");

	UChromaSDKPluginBPLibrary_CopyNonZeroAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName");

	UChromaSDKPluginBPLibrary_CopyKeysColorName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameIndex = frameIndex;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName");

	UChromaSDKPluginBPLibrary_CopyKeysColorAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames");

	UChromaSDKPluginBPLibrary_CopyKeysColorAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyKeysColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor");

	UChromaSDKPluginBPLibrary_CopyKeysColor_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameIndex = frameIndex;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyKeyColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName");

	UChromaSDKPluginBPLibrary_CopyKeyColorName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<EChromaSDKKeyboardKey> Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyKeyColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor");

	UChromaSDKPluginBPLibrary_CopyKeyColor_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameIndex = frameIndex;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyAnimationName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimationName");

	UChromaSDKPluginBPLibrary_CopyAnimationName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyAnimation(int sourceAnimationId, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimation");

	UChromaSDKPluginBPLibrary_CopyAnimation_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysName");

	UChromaSDKPluginBPLibrary_CopyAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_CopyAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_CopyAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CopyAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeys");

	UChromaSDKPluginBPLibrary_CopyAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 animationName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CloseAnimationName(const struct FString& animationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName");

	UChromaSDKPluginBPLibrary_CloseAnimationName_Params params;
	params.animationName = animationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AnimationID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_CloseAnimation(int AnimationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation");

	UChromaSDKPluginBPLibrary_CloseAnimation_Params params;
	params.AnimationID = AnimationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_ClearAnimationType(TEnumAsByte<EChromaSDKDeviceEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType");

	UChromaSDKPluginBPLibrary_ClearAnimationType_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll
// (Final, Native, Static, Public, BlueprintCallable)
void UChromaSDKPluginBPLibrary::STATIC_ClearAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll");

	UChromaSDKPluginBPLibrary_ClearAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKUnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit");

	UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid          EffectId                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKSetEffect(const struct FChromaSDKGuid& EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect");

	UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params params;
	params.EffectId = EffectId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit");

	UChromaSDKPluginBPLibrary_ChromaSDKInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid          EffectId                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UChromaSDKPluginBPLibrary::STATIC_ChromaSDKDeleteEffect(const struct FChromaSDKGuid& EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect");

	UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params params;
	params.EffectId = EffectId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            colorParam                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectStatic(TEnumAsByte<EChromaSDKDeviceEnum> Device, const struct FLinearColor& colorParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params params;
	params.Device = Device;
	params.colorParam = colorParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDeviceEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectNone(TEnumAsByte<EChromaSDKDeviceEnum> Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectKeyboardCustom2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FChromaSDKColors> Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectKeyboardCustom2D(TArray<struct FChromaSDKColors> Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectKeyboardCustom2D");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectKeyboardCustom2D_Params params;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice2DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FChromaSDKColors> Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectCustom2D(TEnumAsByte<EChromaSDKDevice2DEnum> Device, TArray<struct FChromaSDKColors> Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params params;
	params.Device = Device;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EChromaSDKDevice1DEnum> Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>    Colors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FChromaSDKEffectResult  ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::STATIC_ChromaSDKCreateEffectCustom1D(TEnumAsByte<EChromaSDKDevice1DEnum> Device, TArray<struct FLinearColor> Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D");

	UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params params;
	params.Device = Device;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AppendAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFramesName");

	UChromaSDKPluginBPLibrary_AppendAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AppendAllFrames(int sourceAnimationId, int targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFrames");

	UChromaSDKPluginBPLibrary_AppendAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysName");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffsetName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffsetName");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffsetName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffset");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffset_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sourceAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 targetAnimationName            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesName");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesName_Params params;
	params.sourceAnimationName = sourceAnimationName;
	params.targetAnimationName = targetAnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFrames");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFrames_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sourceAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            targetAnimationId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            frameId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChromaSDKPluginBPLibrary::STATIC_AddNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeys");

	UChromaSDKPluginBPLibrary_AddNonZeroAllKeys_Params params;
	params.sourceAnimationId = sourceAnimationId;
	params.targetAnimationId = targetAnimationId;
	params.frameId = frameId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UChromaSDKPluginBPLibrary>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
