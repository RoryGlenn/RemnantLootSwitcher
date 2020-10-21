// Name: Remnant, Version: 6

#include <iostream>

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

std::string UObject::GetName() const
{
	std::string name(Name.GetName());
	if (Name.Number > 0)
	{
		name += '_' + std::to_string(Name.Number);
	}

	auto pos = name.rfind('/');
	if (pos == std::string::npos)
	{
		return name;
	}
	
	return name.substr(pos + 1);
}

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	//std::cout << "0\n";
	//UFT::UClass* super = nullptr;
	//std::cout << "1\n";
	//
	//if(Class) // <----------------------- ERROR
	//{
	//	std::cout << "2\n";
	//	super = Class; // <-------------- ERROR
	//	std::cout << "3\n";
	//}

	//for(;;)
	//{
	//	if(!super)
	//	{
	//		std::cout << "4\n";
	//		break;
	//	}
	//	
	//	if(super == cmp)
	//	{
	//		std::cout << "5\n";
	//		return true;
	//	}

	//	std::cout << "6\n";
	//	super = static_cast<UClass*>(super->SuperField);
	//	std::cout << "7\n";
	//}

	//std::cout << "8\n";
	//return false;
	
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
	
}

// Function CoreUObject.Object.ExecuteUbergraph
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObject::ExecuteUbergraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");

	UObject_ExecuteUbergraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
