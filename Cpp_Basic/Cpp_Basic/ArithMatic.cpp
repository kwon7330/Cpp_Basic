#include "ArithMatic.h"
#include "io.h"


void ArithMatic :: Sum(int _Integer)
{
	Integer = _Integer;

	cout << Integer + Integer << "\n";
}
void ArithMatic::Sum(float _DecimalNumber)
{
	DecimalNumber = _DecimalNumber;

	cout << DecimalNumber + DecimalNumber << "\n";
}

void ArithMatic :: Sum(int _Integer1, int _Integer2)
{
		Integer = _Integer1 + _Integer2;
	cout << Integer << endl;

}