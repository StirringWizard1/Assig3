#ifndef PAPERDOL_H
#define PAPERDOLl_H

#include "Computer.h"
class PaperDoll : public Computer
{
private:

public: 
	PaperDoll();
	void MakeMove();
	char getMove();

};
#endif 