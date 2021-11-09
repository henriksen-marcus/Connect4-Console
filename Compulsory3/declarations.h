#pragma once

#include <iostream>
#include <vector>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <tuple>
#include "Player.h"
#include "termcolor.hpp"


void mainMenu();
void middleMenu(Player*, Player*, bool);
void createPlayers(Player*, Player*, bool);
void connect4(bool, Player*&, Player*&, Player*&);
bool saveGamePrompt(std::vector<std::vector<int>>*, Player*, Player*, Player*, bool);
void boardUpdate(std::vector<std::vector<int>>*, std::tuple<bool, int, int, int, std::string>);
void printBoard(std::vector<std::vector<int>>*, bool, Player*&, Player*&, Player*&);
void checkInput(std::vector<std::vector<int>>*, Player*&, Player*&, Player*&);
void insertMarker(std::vector<std::vector<int>>*, Player*&, Player*&, Player*&);
std::tuple <bool, int, int, int, std::string> checkWin(std::vector<std::vector<int>>*);
bool checkForFullBoard(std::vector<std::vector<int>>* board);
void saveGame(std::vector<std::vector<int>>*, Player*&, Player*&);
void loadGame();
void aiMove(std::vector<std::vector<int>>* board, bool, Player*&, Player*&, Player*&);
int getAiInfo(std::vector<std::vector<int>>* &board);
std::pair <int, int> getBestInt(std::vector <std::pair<int, int>>);
std::pair <bool, int> checkAvailablility(std::vector<std::vector<int>>*, int);


// Color defenitions, printRed, printGreen aso.
#define pR termcolor::bright_red
#define pG termcolor::bright_green
#define pB termcolor::bright_blue
#define pC termcolor::bright_cyan
#define pY termcolor::bright_yellow
#define oW termcolor::on_bright_white
#define reset termcolor::reset

#define ROW_HEIGHT 6
#define ROW_WIDTH 7