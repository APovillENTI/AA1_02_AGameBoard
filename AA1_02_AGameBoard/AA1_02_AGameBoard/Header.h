#pragma once
enum mapElem { PARED, PINCHO, GEMA, LIBRE, PLAYER };

void InitializeMap(mapElem** &map, int& rows, int& cols, int& pinchos, int& gems);

int RandomRange(int min, int max);

void DrawMap(mapElem** map, int rows, int cols);

void DeleteMap(mapElem** map, int rows);