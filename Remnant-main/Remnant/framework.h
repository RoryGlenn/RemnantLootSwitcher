#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include "SDK.h"
#include <windows.h>
#include <vector>
#include <locale>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <stdio.h>
//#include <detours.h>
#include "Detours/detours.h"
#include <chrono>
#include <fstream>

static __forceinline UFT::UGameplayStatics& GetGameplayStatics() { return *(UFT::UGameplayStatics*)UFT::UGameplayStatics::StaticClass(); };
static __forceinline UFT::UKismetMathLibrary& GetKismetMathLibrary() { return *(UFT::UKismetMathLibrary*)UFT::UKismetMathLibrary::StaticClass(); };
static __forceinline UFT::UKismetSystemLibrary& GetKismetSystemLibrary() { return *(UFT::UKismetSystemLibrary*)UFT::UKismetSystemLibrary::StaticClass(); };
static __forceinline UFT::UKismetTextLibrary& GetKismetTextLibrary() { return *(UFT::UKismetTextLibrary*)UFT::UKismetTextLibrary::StaticClass(); };