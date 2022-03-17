#ifndef TOOLBOX_H
#define TOOLBOX_H 
#include "Computer.h"

class Toolbox : public Computer 
{
private: 


public: 
	Toolbox();
	void MakeMove();
	char getMove();


};
#endif