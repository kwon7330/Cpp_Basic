// Cpp_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ����� �ش�����
#include <iostream> // input/output stream
#include "Cpp_Basic.h"
#include "io.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "ArithMatic.h"
#include "Auto.h"
# define PLUS (2+3)
// std namespace ��� ����
using namespace std; // std : standard ǥ�������

# include "Ch10_Class.h"
// �� ���� �Լ�
// �ڵ� �� : {} ����, ��ɴ����� �׷�ȭ �����ش�.

int main()
{
	
	// ��������
	Vehicle Ray(2023, 12000000);
	Ray.PrintPrice();
	Ray.SetYear(2021);
	Ray.PrintYear();
	
	cout << Ray.GetYear() << "\n";

	Vehicle Sonata;
	

	// ��������
	Animal* Dog = new Animal;
	Dog->PrintFinger();

	delete Dog;

	//�ڽ� Ŭ���� ����
	Atv Moto;
	//��ӹ��� Bike class�� ����Լ�
	Moto.PrintTire();
	cout << Moto.Price << "\n";
	//Atv�� ��� �Լ�
	Moto.PrintTire();

	// �Լ� �����ε�
	
	ArithMatic Expression;
	Expression.Sum(50);
	Expression.Sum(50.123f);
	//Expression.Sum();

	//�Լ� �������̵�
	Moto.Print();




	//�����ڰ� ��������� ����
	
	// �ڽ� Ŭ���� ���� �Ҷ� ����� ����
	
	cout << "---------------------" << "\n";
	Auto Mobile;
	Auto Mobile2(8, 20000000);

	cout << "---------------------" << "\n";
	/*ArrayClass();
	StringClass();*/
	Vector();


	


	
}
