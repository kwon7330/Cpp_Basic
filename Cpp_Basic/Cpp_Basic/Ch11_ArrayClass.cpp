#include <iostream>
#include <array>
using namespace std;

void ArrayClass()
{
	std::array<int, 3> Number = { 10,20,30 };

	cout << Number.size() << endl;
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.empty() << endl;
	cout << Number.at(0) << endl; // �ε��� ��ȣ�� �ִ� ���� ����Ѵ�.
}
