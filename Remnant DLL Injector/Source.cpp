#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <comdef.h>

#include "imgui-master/imgui.h"

using std::cout;
using std::endl;

// get process ID
DWORD GetProcessId(const char* processName)
{
	DWORD processID = 0;

	// gets all the running processes
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	// make sure the process is not null or invalid
	if (hSnap != INVALID_HANDLE_VALUE)
	{
		PROCESSENTRY32 processEntry;
		processEntry.dwSize = sizeof(processEntry);

		// gets the first process
		if (Process32First(hSnap, &processEntry))
		{
			do
			{
				// converts WCHAR* to const char* in order to use _stricmp() below
				_bstr_t processEntry_szExeFile(processEntry.szExeFile);
				const char* processEntry_szExeFile_char = processEntry_szExeFile;
				
				// string insensitive compare (non-case sensitive)
				if (!_stricmp(processEntry_szExeFile_char, processName))
				{
					// found the process id we are looking for
					processID = processEntry.th32ProcessID;
					break;
				}

				// gets the next process
			} while (Process32Next(hSnap, &processEntry));
		}
	}

	CloseHandle(hSnap);
	return processID;
}


int main()
{
	const char* dllPath = R"(C:\Users\Rory Glenn\Desktop\LootSwitcher\Remnant-main\x64\Debug\Remnant.dll)"; //  put a path to any DLL here
	const char* processName = "Remnant-Win64-Shipping.exe";													  // you can put any game title here
	DWORD processID = 0;

	// while processID is not found
	while(!processID)
	{
		processID = GetProcessId(processName);
		Sleep(30);
	}

	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, processID);

	if(hProcess && hProcess != INVALID_HANDLE_VALUE)
	{
		// allocate memory in an external process via hProcess
		void* location = VirtualAllocEx(hProcess, 0, MAX_PATH, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

		// if location is not 0
		if(location)
		{
			WriteProcessMemory(hProcess, location, dllPath, strlen(dllPath) + 1, 0);
		}
		
		// creates a remote thread in the target process
		HANDLE hThread = CreateRemoteThread(hProcess, 0, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, location, 0, 0);
		
		if(hThread)
		{
			CloseHandle(hThread);
		}
	}

	if(hProcess)
	{
		CloseHandle(hProcess);
	}

	return 0;
}