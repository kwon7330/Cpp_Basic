#include "io.h"
#include <vector>

void Vector() 
{
	//���� ����
	vector<int>Vd1; // Vd1 �迭 ���� : Vd1 ���� ����, ���� ��� ������������.  
	vector<int>Vd2(3); // ���� ����
	vector<int>Vd3(3, 2); // ���� ������ ���� ��� �����Ǿ���.

	Vd1.push_back(33); //�迭�� queue ���� ó�� �־�����.
	cout << Vd1.front() << "\n";

	Vd1.push_back(55);
	cout << Vd1.at(1) << "\n";

	Vd1.push_back(77);
	cout << Vd1.size() << "\n";

	Vd1.pop_back(); // ������ĭ�� �ε����� ���ڸ� ���°��̴�. 
	cout << Vd1.size() << "\n";

	cout <<Vd1.capacity()<< "\n";

}