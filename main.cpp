#include <iostream>
#include <array>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfulloDollars.h"
#include "Player.h"
#include "Tournament.h"



int main()
{

Player * P1 = new Human(); 
Player * P2 = new Avalanche();
Player * P3 = new Bureaucrat();
Player * P4 = new RandomComputer();
Player * P5 = new Toolbox();
Player * P6 = new Crescendo();
Player * P7 = new PaperDoll();
Player * P8 = new FistfullODollars(); 



std::array<Player *, 8> competitors;
competitors [0] = P1;
competitors [1] = P2;
competitors [2] = P3;
competitors [3] = P4;
competitors [4] = P5;
competitors [5] = P6;
competitors [6] = P7;
competitors [7] = P8;

Tournament tourny;
//call 
tourny.run(competitors);

}
