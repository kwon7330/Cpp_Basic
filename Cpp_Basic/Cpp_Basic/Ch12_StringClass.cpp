#include <iostream>
#include <string>
using namespace std;

void StringClass()
{
	std::string Text = "Hello SeSac";
	string Text2 = "Hello World";
	cout << (Text < Text2) << "\n"; //false ���ĺ� ������
	cout << (Text > Text2) << "\n";
	cout << (Text == Text2) << "\n";
	cout << (Text + Text2) << "\n"; // ���� ����

	cout << Text.front() << "\n"; // ���ڿ��� ���� �� �ε���
	cout << Text.back() << "\n"; // ���ڿ��� ���� �� �ε���
	cout << Text.size() << "\n"; // ���ڿ��� �ε��� ����
	cout << Text.at(0) << "\n"; // 0��° �ε������ִ� ����

	cout << Text.append(Text2) << "\n"; // append�Լ��� �Ű������� ���� ���ڿ��� �Է��ϸ� �ι��ڿ��� �ٿ����� ���´�.
	cout << Text2.substr(5) << "\n"; // substr�Լ��� ���ڸ� �Է��ϸ� �׼����� ��° ���� ���ڿ��� ����ϰԵȴ�.
	cout << Text2.find("Hello") << "\n"; // Hello�� ã�Ƽ� ã���� ���� �ε�����ȣ�� ��ȯ�Ѵ�.
}