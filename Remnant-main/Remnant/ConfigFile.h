#pragma once
#include <list>
#include <string>
#include <iostream>
#include <ostream>
#include <fstream>
#include <vector>


struct TypeLoadOut
{
	std::string loadOutName = "New Loadout";
	std::string handgun		= "";
	std::string LongGun		= "";
	std::string Melee		= "";
	std::string Helmet		= "";
	std::string Chest		= "";
	std::string Legs		= "";
	std::string Amulet		= "";
	std::string Ring1		= "";
	std::string Ring2		= "";
	std::string keyText		= "UnBound";
	int			KeyV;
	bool		textEdit;
};

class ConfigFile
{
	
private:
	int numOfLoadOuts	   = 1;
	int globalLoadOutIndex = 0;
	
public:
	void PrintConfig(std::list<std::string> config);
	int  ReadFile(std::string readFile, std::vector<TypeLoadOut>* CurrentLoadOutsInIMGUI);
	void WriteFile(std::string writeFileName, int numOfLoadOuts, std::vector<TypeLoadOut> currentLoadOuts);
	void SetNumLoadOuts(int set);
	int  GetNumLoadOuts();
	void SetGlobalLoadOutIndex(int set);
	int  GetGlobalLoadOutIndex();
};


