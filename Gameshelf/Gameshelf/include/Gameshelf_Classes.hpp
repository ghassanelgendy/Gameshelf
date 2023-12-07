#pragma once
#ifndef _Gamesshelf_Classes_H
#define _Gamesshelf_Classes_H
#include"../../Gameboard/include/BoardGame_Classes.hpp"
#include"../../ConnectFour/include/ConnectFour_Classes.hpp"
#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>

class Game {
public:
	static void init_ConnectFour();
	static void init_3x3_XO();
	static void init_5x5_XO();
	static void init_pyramic_XO();
};

#endif