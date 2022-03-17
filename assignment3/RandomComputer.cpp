#include "RandomComputer.h"
#include "Computer.h"
#include <cstdlib>



RandomComputer :: RandomComputer(){}
void RandomComputer :: MakeMove()
{
	int V;
 	V = rand() % 1+3; 
 	switch (V)
 	{
 	case 1:
 		move = 'r';
 		break;
 	case 2:
 		move = 's';
 		break;
 	case 3:
 		move = 'p';
 		break;
 	}

}
char RandomComputer:: getMove()
{
	return move;
}