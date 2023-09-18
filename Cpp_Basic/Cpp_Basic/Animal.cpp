#include "Animal.h"
#include "io.h"

Animal::Animal()
{

	Finger = 10;
	Leg = 2;
}

void Animal :: PrintFinger()
{
	cout << Finger << "\n";
}
void Animal::PrintLeg()
{
	cout << Leg << "\n";
}