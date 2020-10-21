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

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UChromaSDKPluginAnimation1DObject : public UObject
{
public:
	unsigned char                                      UnknownData_1DB4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<EChromaSDKDevice1DEnum>                Device;                                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_27BO[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChromaSDKColorFrame1D>              Frames;                                                    // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NX19[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject");
		return ptr;
	}


	void Unload();
	bool IsLoaded();
};

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UChromaSDKPluginAnimation2DObject : public UObject
{
public:
	unsigned char                                      UnknownData_C4P4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<EChromaSDKDevice2DEnum>                Device;                                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZYY4[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChromaSDKColorFrame2D>              Frames;                                                    // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZL9O[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject");
		return ptr;
	}


	void Unload();
	bool IsLoaded();
};

// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary");
		return ptr;
	}


	static void STATIC_UnloadAnimationName(const struct FString& animationName);
	static void STATIC_UnloadAnimation(int AnimationID);
	static void STATIC_TrimStartFramesName(const struct FString& animationName, int numberOfFrames);
	static void STATIC_TrimStartFrames(int AnimationID, int numberOfFrames);
	static void STATIC_TrimFrameName(const struct FString& animationName, int frameId);
	static void STATIC_TrimFrame(int AnimationID, int frameId);
	static void STATIC_TrimEndFramesName(const struct FString& animationName, int lastFrameId);
	static void STATIC_TrimEndFrames(int AnimationID, int lastFrameId);
	static struct FLinearColor STATIC_ToLinearColor(int colorParam);
	static int STATIC_ToBGR(const struct FLinearColor& colorParam);
	static void STATIC_SubtractNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	static void STATIC_SubtractNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	static void STATIC_SubtractNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_SubtractNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	static void STATIC_SubtractNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	static void STATIC_SubtractNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	static void STATIC_SubtractNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	static void STATIC_SubtractNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_SubtractNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	static void STATIC_SubtractNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
	static void STATIC_StopAnimationType(TEnumAsByte<EChromaSDKDeviceEnum> Device);
	static void STATIC_StopAnimations(TArray<struct FString> animationNames);
	static void STATIC_StopAnimationComposite(const struct FString& animationName);
	static void STATIC_StopAnimation(const struct FString& animationName);
	static void STATIC_StopAll();
	static void STATIC_SetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed> led, const struct FLinearColor& colorParam, TArray<struct FChromaSDKColors>* Colors);
	static void STATIC_SetKeysNonZeroColorName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	static void STATIC_SetKeysNonZeroColorAllFramesName(const struct FString& animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	static void STATIC_SetKeysNonZeroColorAllFrames(int AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	static void STATIC_SetKeysNonZeroColor(int AnimationID, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	static void STATIC_SetKeysColorRGBName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, int red, int green, int blue);
	static void STATIC_SetKeysColorRGB(int AnimationID, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, int red, int green, int blue);
	static void STATIC_SetKeysColorName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	static void STATIC_SetKeysColorAllFramesRGBName(const struct FString& animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, int red, int green, int blue);
	static void STATIC_SetKeysColorAllFramesRGB(int AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, int red, int green, int blue);
	static void STATIC_SetKeysColorAllFramesName(const struct FString& animationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	static void STATIC_SetKeysColorAllFrames(int AnimationID, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	static void STATIC_SetKeysColor(int AnimationID, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyNonZeroColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyNonZeroColorAllFramesName(const struct FString& animationName, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyNonZeroColorAllFrames(int AnimationID, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyNonZeroColor(int AnimationID, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyColorAllFramesName(const struct FString& animationName, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyColorAllFrames(int AnimationID, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyColor(int AnimationID, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	static void STATIC_SetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam, TArray<struct FChromaSDKColors>* Colors);
	static void STATIC_SetChromaCustomFlagName(const struct FString& animationName, bool flag);
	static void STATIC_SetChromaCustomColorAllFramesName(const struct FString& animationName);
	static void STATIC_ReverseAllFramesName(const struct FString& animationName);
	static void STATIC_ReverseAllFrames(int AnimationID);
	static void STATIC_ReduceFramesName(const struct FString& animationName, int N);
	static void STATIC_ReduceFrames(int AnimationID, int N);
	static void STATIC_PreviewFrameName(const struct FString& animationName, int frameId);
	static int STATIC_PreviewFrame(int AnimationID, int frameId);
	static void STATIC_PlayAnimations(TArray<struct FString> animationNames, bool Loop);
	static void STATIC_PlayAnimationName(const struct FString& animationName, bool Loop);
	static void STATIC_PlayAnimationComposite(const struct FString& animationName, bool Loop);
	static void STATIC_PlayAnimation(const struct FString& animationName, bool Loop);
	static void STATIC_OverrideFrameDurationName(const struct FString& animationName, float Duration);
	static void STATIC_OffsetNonZeroColorsName(const struct FString& animationName, int frameId, int red, int green, int blue);
	static void STATIC_OffsetNonZeroColorsAllFramesName(const struct FString& animationName, int red, int green, int blue);
	static void STATIC_OffsetNonZeroColorsAllFrames(int AnimationID, int red, int green, int blue);
	static void STATIC_OffsetNonZeroColors(int AnimationID, int frameId, int red, int green, int blue);
	static void STATIC_OffsetColorsName(const struct FString& animationName, int frameId, int red, int green, int blue);
	static void STATIC_OffsetColorsAllFramesName(const struct FString& animationName, int red, int green, int blue);
	static void STATIC_OffsetColorsAllFrames(int AnimationID, int red, int green, int blue);
	static void STATIC_OffsetColors(int AnimationID, int frameId, int red, int green, int blue);
	static void STATIC_MultiplyTargetColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	static void STATIC_MultiplyTargetColorLerpAllFrames(int AnimationID, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	static void STATIC_MultiplyNonZeroTargetColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	static void STATIC_MultiplyNonZeroTargetColorLerpAllFrames(int AnimationID, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	static void STATIC_MultiplyIntensityRGBName(const struct FString& animationName, int frameId, int red, int green, int blue);
	static void STATIC_MultiplyIntensityRGB(int AnimationID, int frameId, int red, int green, int blue);
	static void STATIC_MultiplyIntensityName(const struct FString& animationName, int frameId, float Intensity);
	static void STATIC_MultiplyIntensityColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam);
	static void STATIC_MultiplyIntensityColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam);
	static void STATIC_MultiplyIntensityColorAllFrames(int AnimationID, const struct FLinearColor& colorParam);
	static void STATIC_MultiplyIntensityColor(int AnimationID, int frameId, const struct FLinearColor& colorParam);
	static void STATIC_MultiplyIntensityAllFramesRGBName(const struct FString& animationName, float redIntensity, float greenIntensity, float blueIntensity);
	static void STATIC_MultiplyIntensityAllFramesRGB(int AnimationID, float redIntensity, float greenIntensity, float blueIntensity);
	static void STATIC_MultiplyIntensityAllFramesName(const struct FString& animationName, float Intensity);
	static void STATIC_MultiplyIntensityAllFrames(int AnimationID, float Intensity);
	static void STATIC_MultiplyIntensity(int AnimationID, int frameId, float Intensity);
	static void STATIC_MultiplyColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	static void STATIC_MultiplyColorLerpAllFrames(int AnimationID, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	static void STATIC_MakeBlankFramesRGBName(const struct FString& animationName, int frameCount, float Duration, int red, int green, int blue);
	static void STATIC_MakeBlankFramesRGB(int AnimationID, int frameCount, float Duration, int red, int green, int blue);
	static void STATIC_MakeBlankFramesRandomName(const struct FString& animationName, int frameCount, float Duration);
	static void STATIC_MakeBlankFramesRandomBlackAndWhiteName(const struct FString& animationName, int frameCount, float Duration);
	static void STATIC_MakeBlankFramesRandomBlackAndWhite(int AnimationID, int frameCount, float Duration);
	static void STATIC_MakeBlankFramesRandom(int AnimationID, int frameCount, float Duration);
	static void STATIC_MakeBlankFramesName(const struct FString& animationName, int frameCount, float Duration, const struct FLinearColor& colorParam);
	static void STATIC_MakeBlankFrames(int AnimationID, int frameCount, float Duration, const struct FLinearColor& colorParam);
	static void STATIC_LoadAnimationName(const struct FString& animationName);
	static void STATIC_LoadAnimation(int AnimationID);
	static int STATIC_LerpColorBGR(int from, int to, float T);
	static struct FLinearColor STATIC_LerpColor(const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2, float T);
	static float STATIC_Lerp(float Start, float End, float amt);
	static bool STATIC_IsPlatformWindows();
	static bool STATIC_IsInitialized();
	static bool STATIC_IsAnimationTypePlaying(TEnumAsByte<EChromaSDKDeviceEnum> Device);
	static bool STATIC_IsAnimationPlaying(const struct FString& animationName);
	static void STATIC_InvertColorsAllFramesName(const struct FString& animationName);
	static void STATIC_InvertColorsAllFrames(int AnimationID);
	static void STATIC_InsertFrameName(const struct FString& animationName, int sourceFrame, int targetFrame);
	static void STATIC_InsertFrame(int AnimationID, int sourceFrame, int targetFrame);
	static void STATIC_InsertDelayName(const struct FString& animationName, int frameId, int Delay);
	static void STATIC_InsertDelay(int AnimationID, int frameId, int Delay);
	static struct FLinearColor STATIC_GetRGB(int red, int green, int blue);
	static int STATIC_GetPlayingAnimationId(int Index);
	static int STATIC_GetPlayingAnimationCount();
	static struct FLinearColor STATIC_GetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed> led, TArray<struct FChromaSDKColors>* Colors);
	static int STATIC_GetMaxRow(TEnumAsByte<EChromaSDKDevice2DEnum> Device);
	static int STATIC_GetMaxLeds(TEnumAsByte<EChromaSDKDevice1DEnum> Device);
	static int STATIC_GetMaxColumn(TEnumAsByte<EChromaSDKDevice2DEnum> Device);
	static struct FLinearColor STATIC_GetKeyColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key);
	static struct FLinearColor STATIC_GetKeyColor(int AnimationID, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key);
	static TEnumAsByte<EChromaSDKKeyboardKey> STATIC_GetKeyboardRazerKey(const struct FKey& Key);
	static struct FLinearColor STATIC_GetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey> Key, TArray<struct FChromaSDKColors>* Colors);
	static int STATIC_GetFrameCountName(const struct FString& animationName);
	static int STATIC_GetFrameCount(int AnimationID);
	static struct FString STATIC_GetAnimationName(int AnimationID);
	static int STATIC_GetAnimationIdByIndex(int Index);
	static int STATIC_GetAnimationId(const struct FString& animationName);
	static int STATIC_GetAnimationCount();
	static int STATIC_GetAnimation(const struct FString& animationName);
	static void STATIC_FillZeroColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue);
	static void STATIC_FillZeroColorRGB(int AnimationID, int frameId, int red, int green, int blue);
	static void STATIC_FillZeroColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam);
	static void STATIC_FillZeroColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue);
	static void STATIC_FillZeroColorAllFramesRGB(int AnimationID, int red, int green, int blue);
	static void STATIC_FillZeroColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam);
	static void STATIC_FillZeroColorAllFrames(int AnimationID, const struct FLinearColor& colorParam);
	static void STATIC_FillZeroColor(int AnimationID, int frameId, const struct FLinearColor& colorParam);
	static void STATIC_FillThresholdRGBColorsAllFramesRGBName(const struct FString& animationName, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue);
	static void STATIC_FillThresholdRGBColorsAllFramesRGB(int AnimationID, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue);
	static void STATIC_FillThresholdColorsMinMaxAllFramesRGBName(const struct FString& animationName, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue);
	static void STATIC_FillThresholdColorsMinMaxAllFramesRGB(int AnimationID, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue);
	static void STATIC_FillThresholdColorsAllFramesRGBName(const struct FString& animationName, int Threshold, int red, int green, int blue);
	static void STATIC_FillThresholdColorsAllFramesRGB(int AnimationID, int Threshold, int red, int green, int blue);
	static void STATIC_FillThresholdColorsAllFramesName(const struct FString& animationName, int Threshold, const struct FLinearColor& colorParam);
	static void STATIC_FillThresholdColorsAllFrames(int AnimationID, int Threshold, const struct FLinearColor& colorParam);
	static void STATIC_FillRandomColorsName(const struct FString& animationName, int frameId);
	static void STATIC_FillRandomColorsBlackAndWhiteName(const struct FString& animationName, int frameId);
	static void STATIC_FillRandomColorsBlackAndWhiteAllFramesName(const struct FString& animationName);
	static void STATIC_FillRandomColorsBlackAndWhiteAllFrames(int AnimationID);
	static void STATIC_FillRandomColorsBlackAndWhite(int AnimationID, int frameId);
	static void STATIC_FillRandomColorsAllFramesName(const struct FString& animationName);
	static void STATIC_FillRandomColorsAllFrames(int AnimationID);
	static void STATIC_FillRandomColors(int AnimationID, int frameId);
	static void STATIC_FillNonZeroColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue);
	static void STATIC_FillNonZeroColorRGB(int AnimationID, int frameId, int red, int green, int blue);
	static void STATIC_FillNonZeroColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam);
	static void STATIC_FillNonZeroColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue);
	static void STATIC_FillNonZeroColorAllFramesRGB(int AnimationID, int red, int green, int blue);
	static void STATIC_FillNonZeroColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam);
	static void STATIC_FillNonZeroColorAllFrames(int AnimationID, const struct FLinearColor& colorParam);
	static void STATIC_FillNonZeroColor(int AnimationID, int frameId, const struct FLinearColor& colorParam);
	static void STATIC_FillColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue);
	static void STATIC_FillColorRGB(int AnimationID, int frameId, int red, int green, int blue);
	static void STATIC_FillColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam);
	static void STATIC_FillColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue);
	static void STATIC_FillColorAllFramesRGB(int AnimationID, int red, int green, int blue);
	static void STATIC_FillColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam);
	static void STATIC_FillColorAllFrames(int AnimationID, const struct FLinearColor& colorParam);
	static void STATIC_FillColor(int AnimationID, int frameId, const struct FLinearColor& colorParam);
	static void STATIC_FadeStartFramesName(const struct FString& animationName, int fade);
	static void STATIC_FadeStartFrames(int AnimationID, int fade);
	static void STATIC_FadeEndFramesName(const struct FString& animationName, int fade);
	static void STATIC_FadeEndFrames(int AnimationID, int fade);
	static void STATIC_DuplicateMirrorFramesName(const struct FString& animationName);
	static void STATIC_DuplicateMirrorFrames(int AnimationID);
	static void STATIC_DuplicateFramesName(const struct FString& animationName);
	static void STATIC_DuplicateFrames(int AnimationID);
	static void STATIC_DuplicateFirstFrameName(const struct FString& animationName, int frameCount);
	static void STATIC_DuplicateFirstFrame(int AnimationID, int frameCount);
	static TArray<struct FChromaSDKColors> STATIC_CreateRandomColorsBlackAndWhite2D(TEnumAsByte<EChromaSDKDevice2DEnum> Device);
	static TArray<struct FLinearColor> STATIC_CreateRandomColorsBlackAndWhite1D(TEnumAsByte<EChromaSDKDevice1DEnum> Device);
	static TArray<struct FChromaSDKColors> STATIC_CreateRandomColors2D(TEnumAsByte<EChromaSDKDevice2DEnum> Device);
	static TArray<struct FLinearColor> STATIC_CreateRandomColors1D(TEnumAsByte<EChromaSDKDevice1DEnum> Device);
	static TArray<struct FChromaSDKColors> STATIC_CreateColors2D(TEnumAsByte<EChromaSDKDevice2DEnum> Device);
	static TArray<struct FLinearColor> STATIC_CreateColors1D(TEnumAsByte<EChromaSDKDevice1DEnum> Device);
	static void STATIC_CopyNonZeroTargetAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	static void STATIC_CopyNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	static void STATIC_CopyNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	static void STATIC_CopyNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_CopyNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	static void STATIC_CopyNonZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
	static void STATIC_CopyNonZeroKeysColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys);
	static void STATIC_CopyNonZeroKeysColorAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys);
	static void STATIC_CopyNonZeroKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys);
	static void STATIC_CopyNonZeroKeysColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys);
	static void STATIC_CopyNonZeroKeyColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key);
	static void STATIC_CopyNonZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key);
	static void STATIC_CopyNonZeroAllKeysOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId, int Offset);
	static void STATIC_CopyNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int Offset);
	static void STATIC_CopyNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	static void STATIC_CopyNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	static void STATIC_CopyNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	static void STATIC_CopyNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_CopyNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	static void STATIC_CopyNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
	static void STATIC_CopyKeysColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys);
	static void STATIC_CopyKeysColorAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys);
	static void STATIC_CopyKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys);
	static void STATIC_CopyKeysColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TArray<TEnumAsByte<EChromaSDKKeyboardKey>> Keys);
	static void STATIC_CopyKeyColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key);
	static void STATIC_CopyKeyColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TEnumAsByte<EChromaSDKKeyboardKey> Key);
	static void STATIC_CopyAnimationName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_CopyAnimation(int sourceAnimationId, const struct FString& targetAnimationName);
	static void STATIC_CopyAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	static void STATIC_CopyAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_CopyAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	static void STATIC_CopyAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
	static void STATIC_CloseAnimationName(const struct FString& animationName);
	static void STATIC_CloseAnimation(int AnimationID);
	static void STATIC_ClearAnimationType(TEnumAsByte<EChromaSDKDeviceEnum> Device);
	static void STATIC_ClearAll();
	static int STATIC_ChromaSDKUnInit();
	static int STATIC_ChromaSDKSetEffect(const struct FChromaSDKGuid& EffectId);
	static int STATIC_ChromaSDKInit();
	static int STATIC_ChromaSDKDeleteEffect(const struct FChromaSDKGuid& EffectId);
	static struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectStatic(TEnumAsByte<EChromaSDKDeviceEnum> Device, const struct FLinearColor& colorParam);
	static struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectNone(TEnumAsByte<EChromaSDKDeviceEnum> Device);
	static struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectKeyboardCustom2D(TArray<struct FChromaSDKColors> Colors);
	static struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom2D(TEnumAsByte<EChromaSDKDevice2DEnum> Device, TArray<struct FChromaSDKColors> Colors);
	static struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom1D(TEnumAsByte<EChromaSDKDevice1DEnum> Device, TArray<struct FLinearColor> Colors);
	static void STATIC_AppendAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_AppendAllFrames(int sourceAnimationId, int targetAnimationId);
	static void STATIC_AddNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	static void STATIC_AddNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	static void STATIC_AddNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_AddNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	static void STATIC_AddNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	static void STATIC_AddNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	static void STATIC_AddNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	static void STATIC_AddNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	static void STATIC_AddNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	static void STATIC_AddNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
