#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Computer.h"
class Bureaucrat : public Computer
{
private: 

public: 
	Bureaucrat();
	void MakeMove();
	char getMove();

};
#endif
