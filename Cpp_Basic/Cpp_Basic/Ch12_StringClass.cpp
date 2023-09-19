#include <iostream>
#include <string>
using namespace std;

void StringClass()
{
	std::string Text = "Hello SeSac";
	string Text2 = "Hello World";
	cout << (Text < Text2) << "\n"; //false 알파벳 순서비교
	cout << (Text > Text2) << "\n";
	cout << (Text == Text2) << "\n";
	cout << (Text + Text2) << "\n"; // 연결 연산

	cout << Text.front() << "\n"; // 문자열의 가장 앞 인덱스
	cout << Text.back() << "\n"; // 문자열의 가장 뒤 인덱스
	cout << Text.size() << "\n"; // 문자열의 인덱스 갯수
	cout << Text.at(0) << "\n"; // 0번째 인덱스에있는 문자

	cout << Text.append(Text2) << "\n"; // append함수의 매개변수에 붙일 문자열을 입력하면 두문자열이 붙여져서 나온다.
	cout << Text2.substr(5) << "\n"; // substr함수에 숫자를 입력하면 그숫자의 번째 부터 문자열을 출력하게된다.
	cout << Text2.find("Hello") << "\n"; // Hello를 찾아서 찾으면 시작 인덱스번호를 반환한다.
}