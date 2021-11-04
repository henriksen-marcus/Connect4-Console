#pragma once

#include <iostream>
#include <vector>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <utility>
#include <fstream>
#include "termcolor.hpp"
#include <sstream>
#include "Player.h"


void mainMenu();
void middleMenu(Player*, Player*);
void createPlayers(Player*, Player*);
void connect4(bool*, Player*&, Player*&, Player*&);
void printBoard(std::vector<std::vector<int>>*, bool*, Player*&, Player*&, Player*&);
void checkInput(std::vector<std::vector<int>>*, Player*&, Player*&, Player*&);
void insertMarker(std::vector<std::vector<int>>*, Player*&, Player*&, Player*&);
std::pair <bool, int> checkWin(std::vector<std::vector<int>>*);

void saveGame(std::vector<std::vector<int>>*, Player*&, Player*&);
void loadGame();


// Color defenitions, printRed, printGreen aso.
#define pR termcolor::bright_red
#define pG termcolor::bright_green
#define pB termcolor::bright_blue
#define pC termcolor::bright_cyan
#define pY termcolor::bright_yellow
#define pW termcolor::bright_white
#define pT termcolor::on_white
#define reset termcolor::reset

#define ROW_HEIGHT 6
#define ROW_WIDTH 7