#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle ::Vehicle(int _Year, int _Price)
{
	Year = _Year;
	Price = _Price;

	cout << "출고 자동차 연식 : ";
	PrintYear();
}

Vehicle :: ~Vehicle()
{
	cout << "자동차 확인 " << "\n";
}

void Vehicle :: PrintYear()
{
	cout << Year << "\n";
}

void Vehicle :: PrintPrice()
{
	cout << Price << "\n";
}

int Vehicle::GetYear()
{
	return Year;
}

void Vehicle::SetYear(int newYear)
{
	Year = newYear;
}