#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

enum mapElem {PARED, PINCHO, GEMA, LIBRE};

void main()
{
	mapElem** map;
	int rows, cols;
	int totalSquares;

	InitializeMap(map, rows, cols);
	totalSquares = rows * cols;
}

void InitializeMap(mapElem** map, int& rows, int& cols)
{
	int aux, i = 0;
	ifstream SetupFile("Initialize.txt");
	if (SetupFile.is_open())
	{
		while (SetupFile >> aux)
		{
			if (i == 0)
				cols = aux;
			else
				rows = aux;
			i++;
		}
		cout << "Cols: " << cols << " Rows: " << rows << endl;
	}
	else
		cout << "Unable to open file";

	map = new mapElem* [rows];
	for (int i = 0; i < rows; ++i) {
		map[i] = new mapElem[cols];
	}
}

void DrawMap()
{}

void DeleteMap(char** map, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] map[i];
	}
	delete[] map;
	map = nullptr;
}
