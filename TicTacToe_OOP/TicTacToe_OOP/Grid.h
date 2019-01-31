#ifndef GRID_H
#define GRID_H
#include "TicTacToe.h"

class Grid : public TicTacToe
{
	private:
		//static const int rows = 3;
		//static const int cols = 3;
		public:
		//char table[rows][cols];
		int counter;

		
		void prepareInitialTable(/*const*/ char[][cols]);

	public:
		Grid();
		~Grid();
		void displayTable(const char[][cols]);
		//void updateTable(UINT);
};
#endif
