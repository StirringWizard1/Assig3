#include "Computer.h"
#include "Player.h"

Computer::Computer()
{}

void Computer::MakeMove()
{
	compInput = 'r'; 
	
} 
char Computer::getMove()
{
	return compInput; 
}