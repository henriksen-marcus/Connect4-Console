#include <iostream>
#include "Player.h"
#include "termcolor.hpp"

Player::Player() // Constructor
{
	pos = 0;
	color = 0;
	name = "";
	score = 0;
}

Player::~Player() // Deconstructor
{
	std::cout << name << "was decontructed." << std::endl;
}

void Player::printSelf() 
{
	switch (color)
	{
	case 1:
		std::cout << termcolor::bright_red << " O " << termcolor::reset;
		break;
	case 2:
		std::cout << termcolor::bright_blue << " O " << termcolor::reset;
		break;
	case 3:
		std::cout << termcolor::bright_green << " O " << termcolor::reset;
		break;
	case 4:
		std::cout << termcolor::bright_yellow << " O " << termcolor::reset;
		break;
	}
}