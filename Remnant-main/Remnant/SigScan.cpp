
//#include <cstdint>
//#include <Psapi.h>
//#include <string>
//#include <Windows.h>
//
//
//
//uintptr_t FindPattern(uintptr_t start, size_t length, const unsigned char* pattern, const char* mask)
//{
//    size_t pos = 0;
//    auto maskLength = std::strlen(mask) - 1;
//    auto startAdress = start;
//    for (auto it = startAdress; it < startAdress + length; ++it)
//    {
//        if (*reinterpret_cast<unsigned char*>(it) == pattern[pos] || mask[pos] == '?')
//        {
//            if (mask[pos + 1] == '\0')
//            {
//                return it - maskLength;
//            }
//            pos++;
//        }
//        else
//        {
//            pos = 0;
//        }
//    }
//    return -1;
//}
//
//uintptr_t FindPattern(HMODULE module, const unsigned char* pattern, const char* mask)
//{
//    MODULEINFO info = { };
//    GetModuleInformation(GetCurrentProcess(), module, &info, sizeof(MODULEINFO));
//    return FindPattern(reinterpret_cast<uintptr_t>(module), info.SizeOfImage, pattern, mask);
//}
//
//
//// so instead of UFT::InitSDK() just put these
//
//// Point GNames to pattern
//auto NamesAddress = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x48\x89\x1D\x00\xB5\xAA\x02\x48\x00\x00\x00\x00"), "xxx?xxxx????");
//UFT::FName::GNames = reinterpret_cast<UFT::TNameEntryArray*>(NamesAddress + *reinterpret_cast<uint32_t*>(NamesAddress + 3) + 7);
//
//// Point GObjects to pattern
//auto ObjectsAddress = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x48\x8B\x05\x00\x00\x00\x03\x48\x8B\x0C\xC8"), "xxx???xxxxx");
//UFT::UObject::GObjects = reinterpret_cast<UFT::TUObjectArray*>(ObjectsAddress + *reinterpret_cast<uint32_t*>(ObjectsAddress + 3) + 7);