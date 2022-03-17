#include "Player.h"
#include "Tournament.h"
#include "Referee.h"
#include <iostream>
Tournament :: Tournament(){}


Player * Tournament::run(std::array<Player *, 8> competitors)
{
	Referee Ref; 
	char a; 
	int PL1=0;
		int PL2=0;
	int R1Winner[4];
	int R2Winner[2]; 
	int k =0;
	 
	 
//Runs All first rounds
for (int i = 0; i < 7; i = i + 2)
	{
		PL1 =0;
		PL2 =0;

		
		for (int j = 0; j<5; j++)
			{
				
				a = Ref.refGame(competitors[i], competitors[i+1]);

				if (a == 'W')
				{
					PL1 = PL1 + 1;
				}

				else if (a == 'L')
				{
					PL2 = PL2 + 1;
				}
				competitors[i]->increment();
				competitors[i+1]->increment();

			}

		
			if (PL1 > PL2)
				{
					std::cout <<"HI"<<std::endl;
					R1Winner[k] = i;
				}
			else if (PL1 < PL2)
				{
					R1Winner[k]= i+1;
				}
				k++;
				competitors[i]->Reset();
				competitors[i+1]->Reset(); 
	}
	
	k=0;

for (int i = 0; i <3; i = i + 2)
	{
		PL1 =0;
		PL2 =0;
		for (int j = 0; j<5; j++)
			{
				a = Ref.refGame(competitors[R1Winner[i]], competitors[ R1Winner[i+1]]);

				if (a == 'W')
				{
					PL1 = PL1 + 1;
				}

				else if (a == 'L')
				{
					PL2 = PL2 + 1;
				}
				competitors[i]->increment();
				competitors[i+1]->increment(); 
			}

			if (PL1 > PL2)
				{
					R2Winner[k] = R1Winner[i];
				}
			else if (PL1 < PL2)
				{
					R2Winner[k] = R1Winner[i+1];
				}
				k++;
				competitors[i]->Reset();
				competitors[i+1]->Reset();
	}

for (int j = 0; j<5; j++)
	{
			a =  Ref.refGame(competitors[R2Winner[0]], competitors[R2Winner[1]]);

			if (a == 'W')
			{
				PL1 = PL1 + 1;
			}
			else if (a == 'L')
			{
				PL2 = PL2 + 1;
			}
			competitors[R2Winner[0]]->increment();
			competitors[R2Winner[1]]->increment(); 
	}
		
if (PL1 > PL2)
			{
				R3Winner = R2Winner[0];
			}
else if (PL1 < PL2)
			{
				R3Winner= R2Winner [1];
			}
			competitors[R2Winner[0]]->Reset();
			competitors[R2Winner[1]]->Reset(); 

	
		 return competitors[R3Winner]; 




}

