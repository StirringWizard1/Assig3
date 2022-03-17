#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player
{
private: 
	char compInput;  

public:
	Computer(); 
	void MakeMove(); 
	char getMove();


};
#endif