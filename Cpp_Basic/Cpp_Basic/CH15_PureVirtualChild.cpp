#include "Ch15_PureVirtualCHild.h"
#include "io.h"




void PureVirtualChild::Print()
{
	cout << "Pure Virtual Child Class" << "\n";
}

void PureVirtualChild::PrintClass()
{
	cout << "Pure Virtual parent Function Override" << "\n";
}