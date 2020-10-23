#include "ConfigFile.h"

#include <sys/stat.h>

// Line 1:  Number of load outs
// Line 2:  Load out name for the first load out
// Line 3:  Hand gun
// Line 4:  Long gun
// Line 5:  Melee 
// Line 6:  Helmet
// Line 7:  Chest
// Line 8:  Legs
// Line 9:  Amulet
// Line 10: Ring 1
// Line 11: Ring 2
// Line 12: Key Value

void ConfigFile::PrintConfig(std::list<std::string> config)
{
	// prints the list
	std::list<std::string>::const_iterator pos;

	for (pos = config.begin(); pos != config.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}

int ConfigFile::ReadFile(std::string readFileName, std::vector<TypeLoadOut>* CurrentLoadOutsInIMGUI)
{
	std::string							   line;
	std::ifstream						   readFile;
	std::list<std::string>				   listReadIn;
	std::vector<TypeLoadOut>			   loadOuts;
	ConfigFile 							   configurationFile;
	struct stat statbuf;
	
	int	numOfLoadOuts = 0;
	int colonCount    = 0;
	int	j			  = 0;

	try
	{
		// if the loadout already exists, don't create a new one
		if(stat(readFileName.c_str(), &statbuf) != 0)
		{
			return 0;
		}
		
		std::cout << "Loading Configuration File" << std::endl;
		readFile.open(readFileName, std::ios::in | std::ios::out);
	}
	catch (int error)
	{
		printf("An exception occurred. Exception number %d\n: ", error);
		return 0;
	}

	// iterate over each line of the configuration file and put it into listReadIn
	while (getline(readFile, line))
	{
		listReadIn.push_back(line);
	}

	readFile.close();

	// if the list is NOT empty, get the front of it
	if (!listReadIn.empty())
	{
		numOfLoadOuts = std::stoi(listReadIn.front());

		listReadIn.pop_front();

		// count how many ":" there are because that will indicate how many times we need to push the entire loadout back
		std::list<std::string>::const_iterator pos;

		for (pos = listReadIn.begin(); pos != listReadIn.end(); ++pos)
		{
			if (*pos == ":")
			{
				colonCount++;
			}
		}

		// we are using ":" as a token. This separates the different load outs
		while (j < colonCount)
		{
			if(listReadIn.front() == ":") listReadIn.pop_front();

			std::string loadOutName	= listReadIn.front();		listReadIn.pop_front();
			std::string handgun		= listReadIn.front();		listReadIn.pop_front();
			std::string LongGun		= listReadIn.front();		listReadIn.pop_front();
			std::string Melee		= listReadIn.front();		listReadIn.pop_front();
			std::string Helmet		= listReadIn.front();		listReadIn.pop_front();
			std::string Chest		= listReadIn.front();		listReadIn.pop_front();
			std::string Legs		= listReadIn.front();		listReadIn.pop_front();
			std::string Amulet		= listReadIn.front();		listReadIn.pop_front();
			std::string Ring1		= listReadIn.front();		listReadIn.pop_front();
			std::string Ring2		= listReadIn.front();		listReadIn.pop_front();
			std::string keyText		= listReadIn.front();		listReadIn.pop_front();
			int KeyV				= stoi(listReadIn.front()); listReadIn.pop_front();
			
			loadOuts.push_back( { loadOutName, handgun, LongGun, Melee, Helmet, Chest, Legs, Amulet, Ring1, Ring2, keyText, KeyV } );
			j++;
		}
	}

	*CurrentLoadOutsInIMGUI = loadOuts;
	return numOfLoadOuts;
}


void ConfigFile::WriteFile(std::string writeFileName, int numOfLoadOuts, std::vector<TypeLoadOut> currentLoadOuts)
{
	std::ofstream writeFile;
	writeFile.open(writeFileName);
	
	try
	{
		writeFile << numOfLoadOuts << std::endl;

		for (int i = 0; i < numOfLoadOuts; i++)
		{
			writeFile << currentLoadOuts[i].loadOutName << std::endl;
			writeFile << currentLoadOuts[i].handgun		<< std::endl;
			writeFile << currentLoadOuts[i].LongGun		<< std::endl;
			writeFile << currentLoadOuts[i].Melee		<< std::endl;
			writeFile << currentLoadOuts[i].Helmet		<< std::endl;
			writeFile << currentLoadOuts[i].Chest		<< std::endl;
			writeFile << currentLoadOuts[i].Legs		<< std::endl;
			writeFile << currentLoadOuts[i].Amulet		<< std::endl;
			writeFile << currentLoadOuts[i].Ring1		<< std::endl;
			writeFile << currentLoadOuts[i].Ring2		<< std::endl;
			writeFile << currentLoadOuts[i].keyText		<< std::endl;
			writeFile << currentLoadOuts[i].KeyV		<< std::endl;
			writeFile << ":"							<< std::endl;
		}
	}
	catch(int error)
	{
		printf("Errno: %d", error);
	}
	
	writeFile.close();
}


void ConfigFile::SetNumLoadOuts(int set)
{
	numOfLoadOuts = set;
}

int ConfigFile::GetNumLoadOuts()
{
	return numOfLoadOuts;
}

void ConfigFile::SetGlobalLoadOutIndex(int set)
{
	globalLoadOutIndex = set;
}

int ConfigFile::GetGlobalLoadOutIndex()
{
	return globalLoadOutIndex;
}
