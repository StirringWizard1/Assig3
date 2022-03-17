#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include <iostream>

Referee::Referee()
{}

char Referee::refGame(Player* PI1, Player* PI2)
{

	PI1->MakeMove();
	PI2->MakeMove(); 
std::cout<<PI1->getMove() <<std::endl;

	switch (PI1->getMove()){

		case 'r':
		if (PI2->getMove() == 'r')
		{
			outcome = 'T'; 
		}
		else if (PI2->getMove() == 's')
		{
			outcome = 'W';
		}
		else 
		{
			outcome = 'L';
		}
		break; 
		case 's':
				if (PI2->getMove() == 's')
		{
			outcome = 'T' ;
		}
		else if (PI2->getMove() == 'p')
		{
			outcome = 'W';
		}
		else 
		{
			outcome = 'L';
		}
		break; 
		case 'p':
				if (PI2->getMove() == 'p')
		{
			outcome = 'T' ;
		}
		else if (PI2->getMove() == 'r')
		{
			outcome = 'W';
		}
		else 
		{
			outcome = 'L';
		}
		break;

	}
	return outcome;
}	
