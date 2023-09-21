#include "io.h"
#include <cstdlib>

	

void Dice(int a, int b, int c, int d)
{	// 오름차순 정렬
	int DiceNumber[4] = { a,b,c,d };
	int temp = 0;
	for (int i = 3; i >= 0; --i)
	{	
		for (int j = 0; j < i; j++)
		{
			if(DiceNumber[j]>DiceNumber[j+1])
			{
				temp = DiceNumber[j];
				DiceNumber[j] = DiceNumber[j + 1];
				DiceNumber[j + 1] = temp;
			}
			

		}
	}
	for (int i = 0; i < 4; i++)
	{
		cout << DiceNumber[i] << " " ;
	}
	cout <<"\n";

	//1
	
}


