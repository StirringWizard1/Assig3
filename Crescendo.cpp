#include "Crescendo.h"
#include "Computer.h"



Crescendo :: Crescendo(){}
void Crescendo :: MakeMove()
{

		if ((counter%3)==1)
		{
			move = 'p';
		}
		else if ((counter%3)==2)
		{
			move = 's';
		}
		else if ((counter%3) == 0)
		{
			move = 'r';
		}

}

char Crescendo:: getMove()
{
	return move;
}