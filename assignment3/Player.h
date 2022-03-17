#ifndef PLAYER_H
#define PLAYER_H



class Player
{
private: 

protected: 
	char move; 
	int counter=1; 


public:

	Player(); 
	virtual void MakeMove();
	char getMove(); 
	void increment();
	void Reset();

};
#endif