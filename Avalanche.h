#ifndef AVALANCHE_H
#define AVALANCHE_H

#include "Computer.h"

class Avalanche : public Computer
{
private: 

public: 
	Avalanche();
	void MakeMove(); 
	char getMove();

};
#endif
