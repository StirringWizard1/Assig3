#include "PaperDoll.h"
#include "Computer.h"



PaperDoll :: PaperDoll(){}
void PaperDoll :: MakeMove()
{
		if ((counter%3)==1)
		{
			move = 's';
		}
		else if ((counter%3)==0 || (counter%3)==2)
		{
			move = 'p';
		}


}

char PaperDoll:: getMove()
{
	return move; 
}