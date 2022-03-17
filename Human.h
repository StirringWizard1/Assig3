#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"


class Human : public Player
{
private: 

public: 
	Human ();
	void MakeMove();
	char getMove(); 
};
#endif