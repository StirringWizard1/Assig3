#ifndef 	TOURNAMENT_H
#define TOURNAMENT_H

#include "Player.h"
#include <array>
class Tournament
{
private:
	int R3Winner; 
public: 
	Tournament();
	Player * run (std::array<Player *, 8> competitors);

}; 
#endif