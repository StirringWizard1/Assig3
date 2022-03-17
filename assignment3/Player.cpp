#include "Player.h"

Player:: Player(){}

void Player::MakeMove(){}
char Player::getMove()
{
	return move;
}
void Player::increment()
{
	counter++;
}
void Player::Reset()
{
	counter =1;
}
