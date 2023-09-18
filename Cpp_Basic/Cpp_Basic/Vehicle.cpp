#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle ::Vehicle(int _Year, int _Price)
{
	Year = _Year;
	Price = _Price;

	cout << "��� �ڵ��� ���� : ";
	PrintYear();
}

Vehicle :: ~Vehicle()
{
	cout << "�ڵ��� Ȯ�� " << "\n";
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