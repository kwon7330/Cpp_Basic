#include "io.h"

void PointerDefine()
{
	int a = 10;

	cout << " a : " << a << "\n"; // 값이 출력된다.
	cout << " &a : " << & a << "\n"; //&a : &(주소참조) 연산
	int* pa = &a;	//포인터 변수에 주소값 대입

	cout <<"pa + 1 :" << pa + 1 << "\n";
	cout << "*pa +1 " << * pa + 1 << "\n";
	cout << "*(pa+1)" << * (pa + 1) << "\n";
	
	
	int** ppa = &pa; //포인터를 참조하는 포언터

	cout << " pa : "<<pa << endl; // 주소가출력된다.
	cout << " *pa : " << * pa << endl; // 주소위치의 변수의 값을 출력한다.
	cout << " ppa : " << ppa << endl;
	cout << " *ppa " << * ppa << endl;
	cout << " ** ppa : " <<**ppa << endl;

	int Array[3] = { 1,5,9 };
	cout << Array << "\n"; // Array 의 첫번째 칸의 주소
	
	int* pArray = Array;

	cout <<  "Array : " <<Array << "\n";
	cout <<"pArray : " <<pArray << "\n";
	cout <<"Array[1] : " <<Array[1] << "\n";
	cout << "pArray[1] : " <<pArray[1] << "\n";

	cout <<"*pArray : " <<*pArray << "\n";
	cout << "*Array : " << *Array << "\n";

	cout <<"Array+1 : " <<Array + 1 << "\n";
	cout <<"pArray+1 : " <<pArray + 1 << "\n";
	cout <<"*Array+1 : " <<*Array + 1 << "\n";
	cout <<"*pArray+1 : " <<*pArray + 1 << "\n";
	cout << "Array + 1 : " << *(Array + 1) << "\n"; // 옆칸에 저장된값
	cout << "Array + 1 : " << *(pArray + 1) << "\n";

	


}