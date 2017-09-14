/*
Jonah Moon
CS/IS 137
Homework 1

****************************************************************************************
						TicTacToe
----------------------------------------------------------------------------------------
	-boardArr     : int[3][3]
	-player1      : string
	-player2      : string
----------------------------------------------------------------------------------------
	+TicTacToe()
	+showBoard() : void
	+makeMove(playerNum : int, row : int, column : int) : bool
	+setPlayer1(name : string)
	+setPlayer2(name : string)
	+getPlayer1(name : string)
	+getPlayer1(name : string)
*/

#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <string>
using namespace std;

class TicTacToe
{
	private:

		int boardArr[3][3];
		string player1;
		string player2;
		int winner;
		

	public:
		TicTacToe();
		void showBoard();
		void moveMenu();
		void nameSetUp();
		void showWinner();
		void startMenu();
		bool makeMove(int, int, int);
		bool setPlayer1(string);
		bool setPlayer2(string);
		string getPlayer1();
		string getPlayer2();
		int gameWinner();
		int checkGame();

};
#endif