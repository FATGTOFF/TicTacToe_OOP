#ifndef PLAYER_H
#define PLAYER_H
#include "TicTacToe.h"

class Player : public TicTacToe
{
	private:
		USHORT player;
		USHORT choice;
		bool winner;
		bool tie;
		bool computer;

	public:
		Player();
		void turn();
		void displayTable();
		bool determineWinner();
		void initialMenu(USHORT&);
		void notifyWinner();
		void clearScreen();

};
#endif
