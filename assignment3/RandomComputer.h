 #ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include "Computer.h"

class RandomComputer : public Computer
{
private:

public:
	RandomComputer();
	void MakeMove();
	char getMove(); 

};
#endif