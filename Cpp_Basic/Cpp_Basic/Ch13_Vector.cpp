#include "io.h"
#include <vector>

void Vector() 
{
	//동적 생성
	vector<int>Vd1; // Vd1 배열 생성 : Vd1 원소 갯수, 내용 모두 지정되지않음.  
	vector<int>Vd2(3); // 원소 갯수
	vector<int>Vd3(3, 2); // 원소 갯수와 내용 모두 지정되었다.

	Vd1.push_back(33); //배열이 queue 구조 처럼 넣어진다.
	cout << Vd1.front() << "\n";

	Vd1.push_back(55);
	cout << Vd1.at(1) << "\n";

	Vd1.push_back(77);
	cout << Vd1.size() << "\n";

	Vd1.pop_back(); // 마지막칸의 인덱스의 숫자를 빼는것이다. 
	cout << Vd1.size() << "\n";

	cout <<Vd1.capacity()<< "\n";

}