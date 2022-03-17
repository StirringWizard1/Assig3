#include "Bureaucrat.h"
#include "Computer.h"



Bureaucrat :: Bureaucrat(){}
void Bureaucrat :: MakeMove()
{
	move = 'p'; 
}

char Bureaucrat::getMove()
{
	return move;
}
