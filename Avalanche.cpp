#include "Avalanche.h"
#include "Computer.h"



Avalanche :: Avalanche() {}
void Avalanche :: MakeMove()
{
 move = 'r';
}

char Avalanche:: getMove()
{
	return move;
}
