#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"
#include "Player.h"

class Referee
{
private:  
	char outcome;

public: 
	Referee(); 
	char refGame(Player*, Player* );

};

#endif