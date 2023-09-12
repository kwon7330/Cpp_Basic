#include "io.h"

void OperationArithmetic(int Arith1, int Arith2)
{
	// int Arith1 = 10;
	// int Arith2= 20;

	int Sum = Arith1 + Arith2;
	int Sub = Arith1 - Arith2;
	int Mul = Arith1 * Arith2;
	int Div = Arith1 / Arith2;
	int Rest = Arith1 % Arith2;

	cout << Sum << endl << Sub << endl << Mul << endl <<
		Div << endl << Rest << endl;
}
void OperationIncrementDecrement()
{
	// 증감 연산
	int Increase = 0; // 초기화
	int Decrease = 10;

	Increase = Increase + 1; // 더해지는 값 : 증감값(Step)
	Decrease = Decrease - 2;

	cout << Increase << endl << Decrease << endl;

	Increase += 1; // 위에 increase 증가 식을 축약시킨것
	Decrease -= 2; // 위의 Decrease 감소 식을 축약시킨것

	cout << Increase << endl << Decrease << endl;

	// Count : 개수, 1씩 증가 or 감소하는 경우
	Increase++;
	Decrease--;

	cout << Increase << endl << Decrease << endl;
}
void OperationComparison()
{
	// 비교연산의 결과 값 : True / False , 1/0
	int Greater = 30;
	int Less = 10;

	cout << (Greater > Less) << endl; // > : Greater than
	cout << (Greater < Less) << endl; // < : less than



	cout << (Greater >= Less) << endl;
	cout << (Greater <= Less) << endl;

	cout << (Greater == Less) << endl;
	cout << (Greater != Less) << endl;
}
void OperationLogical()
{
	// 논리 연산
	// AND : bool 값이 모두 참 이면 결과는 참(true), 하나라도 거짓 이면 결과는 false 이다.
	cout << (true && true) << endl;
	cout << (true && false) << endl;


	// OR : bool 값이 모두 false 이면 결과는 false, 하나라도 true 라면 결과 값은 true 이다.
	cout << (true || true) << endl;
	cout << (true || false) << endl;

	// 국어가 90이상이고 영어가 90이상이면 ~
	int kor = 80;
	int eng = 95;

	// cout << ( kor >=90 && eng >=90) << endl;
	// ↓
	//cout << ( false && true) << endl;
	// ↓
	//cout << ( false) << endl;

	cout << !(kor >= 90 && eng >= 90) << endl;
	cout << (!(kor >= 90) && eng >= 90) << endl;

}
void OperationBit()
{
	// 비트 연산
	int Bit1 = 15; // 00001111
	int Bit2 = 20; // 00010100

	int BitAnd = Bit1 & Bit2;
	// 00001111
	// 00010100
	// 00000100 => 4 (2^0 + 2^1 + 2^2 = 4)
	cout << BitAnd << endl;

	// 15 숫자 값을 비트 이동 연산
	//cout << (Bit1 << 1) << endl;
	// 00001111
	// 00011110 => 30 (2^0 *0 + 2^1*1 + 2^2*1 + 2^3*1 + 2^4*1 = 0 + 2+ 4 + 8 + 16 = 30)
}
void OperationThree()
{
	// 삼항 연산
	cout << (3 > 5 ? "Hello" : "world") << endl;
	cout << (3 < 5 ? "Hello" : "world") << endl;
}