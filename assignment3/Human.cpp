#include <iostream>
#include "Human.h"


Human::Human()
{}

void Human::MakeMove()
{
	
	std::cout << "Enter move: ";
	std::cin >> move; 

}

char Human::getMove()
{
	return move;
}