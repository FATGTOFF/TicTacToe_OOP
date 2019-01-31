#include <iostream>
#include <iomanip>
#include "Grid.h"

void Grid::displayTable(const char table1[][cols])
{
	TicTacToe::displayTable(table1);
	//std::cout << "\t\t\t  ----------------------\n";
	//for (int x = 0; x < rows; x++)
	//{
	//	std::cout << "\t\t\t  |";
	//	for (int y = 0; y < cols; y++)
	//	{
	//		std::cout << std::setw(4) << table1[x][y] << "  |";
	//	}
	//	std::cout << std::endl;
	//	std::cout << "\t\t\t  ----------------------\n";
	//}
}

void Grid::prepareInitialTable(/*const*/ char[][cols])
{
	for (size_t row = 0; row < rows; row++)
	{
		for (size_t col = 0; col < cols; col++)
		{
			table[row][col] = counter + '0'; // '0' is int 48.
			counter++;
		}
	}
}

Grid::Grid() : TicTacToe()
{
	counter = 1;
	prepareInitialTable(table);
	//for (size_t row = 0; row < rows; row++)
	//{
	//	for (size_t col = 0; col < cols; col++)
	//	{
	//		table[row][col] = counter;
	//		counter++;
	//	}
	//}
	/*TicTacToe::*/displayTable(table);

}

Grid::~Grid()
{
}

//void Grid::updateTable(UINT c)
//{
//	
//}
