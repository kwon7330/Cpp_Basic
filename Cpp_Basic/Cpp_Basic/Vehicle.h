#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private:

	int Year;
	

public:
	int Price;
	// Constructor ����
	Vehicle(int _Year, int _Price);
	
	// Destructor ����
	~Vehicle();

	// Get,Set Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};
