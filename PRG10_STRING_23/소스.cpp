#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
	ifstream inputFile;
	ifstream outputFile;
	string line;

	inputFile.open("inFile.dat");
	assert(inputFile);
	int maxSize = 0;
	while (!inputFile.eof())
	{
		getline(inputFile, line);
		if (line.size() > maxSize)
		{
			maxSize = line.size();
		}

	}
	inputFile.close();

	inputFile.open("inFile.dat");
	assert(inputFile);
	outputFile.open("outFile.dat");
	assert(outputFile);
	while (!inputFile.eof());
	{
		getline(inputFile, line);
		string temp(maxSize - line.size(), ' ');
		line.insert(0, temp);
		line.append("\n");
		outputFile << line;

	}

	inputFile.close();
	outputFile.close();

	return 0;
}
