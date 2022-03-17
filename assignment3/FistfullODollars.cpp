#include "FistfullODollars.h"
#include "Computer.h"


FistfullODollars :: FistfullODollars(){}


void FistfullODollars:: MakeMove()
{
		if ((counter%3)==1)
		{
			move = 'r';
		}
		else 
		{
			move = 'p';
		}
 

}

char FistfullODollars :: getMove()
{
	return move;
}


