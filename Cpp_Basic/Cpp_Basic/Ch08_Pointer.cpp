#include "io.h"

void PointerDefine()
{
	int a = 10;

	cout << " a : " << a << "\n"; // ���� ��µȴ�.
	cout << " &a : " << & a << "\n"; //&a : &(�ּ�����) ����
	int* pa = &a;	//������ ������ �ּҰ� ����

	cout <<"pa + 1 :" << pa + 1 << "\n";
	cout << "*pa +1 " << * pa + 1 << "\n";
	cout << "*(pa+1)" << * (pa + 1) << "\n";
	
	
	int** ppa = &pa; //�����͸� �����ϴ� ������

	cout << " pa : "<<pa << endl; // �ּҰ���µȴ�.
	cout << " *pa : " << * pa << endl; // �ּ���ġ�� ������ ���� ����Ѵ�.
	cout << " ppa : " << ppa << endl;
	cout << " *ppa " << * ppa << endl;
	cout << " ** ppa : " <<**ppa << endl;

	int Array[3] = { 1,5,9 };
	cout << Array << "\n"; // Array �� ù��° ĭ�� �ּ�
	
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
	cout << "Array + 1 : " << *(Array + 1) << "\n"; // ��ĭ�� ����Ȱ�
	cout << "Array + 1 : " << *(pArray + 1) << "\n";

	


}