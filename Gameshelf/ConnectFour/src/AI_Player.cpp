#pragma once
#include "../include/ConnectFour_Classes.hpp"

pair<int, int> AI_Player::getBestMove()
{


	for (short i = 0; i < 7; i++)
	{
		for (short j = 0; j < 6; j++) {
			if (AICopyOfBoard->getCell(i, j) == 0) {
				move.first = i;
				move.second = j;

				AICopyOfBoard->update_board(i, j, 'o');


				

				AICopyOfBoard->update_board(i, j, 0);
			}
			else if(AICopyOfBoard->getCell(i, j) == 'X'){

			}
		}
	}
	return pair<int, int>();
}

AI_Player::AI_Player(ConnectFourBoard* brdPtr) : Player(2, 'o'), AICopyOfBoard(brdPtr) {
}
 


