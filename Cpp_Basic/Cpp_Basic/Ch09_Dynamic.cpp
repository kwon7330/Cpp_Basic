#include "io.h"
void DynamicVariable()
{
	int* pNum = new int;
	char* pValue = new char;

	*pNum = 10;
	*pValue = 'A';

	cout << pNum << "\n";
	cout << pValue << "\n";

	cout << *pNum << "\n";
	cout << *pValue << "\n";

	delete pNum;
	delete pValue;

	int a[3] = {1,2,3};
	int* pa = a;

	cout << a[0] << " : " << pa[0] << endl;

	int size = 3;
	int* pArray = new int[size];

	pArray[0] = 10;
	cout << pArray[0] << endl;

	
}