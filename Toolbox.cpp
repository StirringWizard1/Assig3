#include "Toolbox.h"
#include "Computer.h"



Toolbox :: Toolbox(){}
void Toolbox :: MakeMove()
{

 move = 's';
}

char Toolbox:: getMove()
{
	return move;
}