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

// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginPersistenceAuth
// (Native, Public, BlueprintCallable)
void UGunfireCrossplayManager::LoginPersistenceAuth()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginPersistenceAuth");

	UGunfireCrossplayManager_LoginPersistenceAuth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginEpicFromSteam
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCreateHeadlessAccount         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGunfireCrossplayManager::LoginEpicFromSteam(bool bCreateHeadlessAccount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginEpicFromSteam");

	UGunfireCrossplayManager_LoginEpicFromSteam_Params params;
	params.bCreateHeadlessAccount = bCreateHeadlessAccount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LinkEpicFromSteam
// (Native, Public, BlueprintCallable)
void UGunfireCrossplayManager::LinkEpicFromSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LinkEpicFromSteam");

	UGunfireCrossplayManager_LinkEpicFromSteam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.GetGunfireCrossplayManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGunfireCrossplayManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGunfireCrossplayManager* UGunfireCrossplayManager::STATIC_GetGunfireCrossplayManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.GetGunfireCrossplayManager");

	UGunfireCrossplayManager_GetGunfireCrossplayManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject<UGunfireCrossplayManager>();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.DeletePersistenceAuth
// (Native, Public, BlueprintCallable)
void UGunfireCrossplayManager::DeletePersistenceAuth()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.DeletePersistenceAuth");

	UGunfireCrossplayManager_DeletePersistenceAuth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.BeginCrossplayLogin
// (Native, Public, BlueprintCallable)
void UGunfireCrossplayManager::BeginCrossplayLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.BeginCrossplayLogin");

	UGunfireCrossplayManager_BeginCrossplayLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
