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
	// ���� ����
	int Increase = 0; // �ʱ�ȭ
	int Decrease = 10;

	Increase = Increase + 1; // �������� �� : ������(Step)
	Decrease = Decrease - 2;

	cout << Increase << endl << Decrease << endl;

	Increase += 1; // ���� increase ���� ���� ����Ų��
	Decrease -= 2; // ���� Decrease ���� ���� ����Ų��

	cout << Increase << endl << Decrease << endl;

	// Count : ����, 1�� ���� or �����ϴ� ���
	Increase++;
	Decrease--;

	cout << Increase << endl << Decrease << endl;
}
void OperationComparison()
{
	// �񱳿����� ��� �� : True / False , 1/0
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
	// �� ����
	// AND : bool ���� ��� �� �̸� ����� ��(true), �ϳ��� ���� �̸� ����� false �̴�.
	cout << (true && true) << endl;
	cout << (true && false) << endl;


	// OR : bool ���� ��� false �̸� ����� false, �ϳ��� true ��� ��� ���� true �̴�.
	cout << (true || true) << endl;
	cout << (true || false) << endl;

	// ��� 90�̻��̰� ��� 90�̻��̸� ~
	int kor = 80;
	int eng = 95;

	// cout << ( kor >=90 && eng >=90) << endl;
	// ��
	//cout << ( false && true) << endl;
	// ��
	//cout << ( false) << endl;

	cout << !(kor >= 90 && eng >= 90) << endl;
	cout << (!(kor >= 90) && eng >= 90) << endl;

}
void OperationBit()
{
	// ��Ʈ ����
	int Bit1 = 15; // 00001111
	int Bit2 = 20; // 00010100

	int BitAnd = Bit1 & Bit2;
	// 00001111
	// 00010100
	// 00000100 => 4 (2^0 + 2^1 + 2^2 = 4)
	cout << BitAnd << endl;

	// 15 ���� ���� ��Ʈ �̵� ����
	//cout << (Bit1 << 1) << endl;
	// 00001111
	// 00011110 => 30 (2^0 *0 + 2^1*1 + 2^2*1 + 2^3*1 + 2^4*1 = 0 + 2+ 4 + 8 + 16 = 30)
}
void OperationThree()
{
	// ���� ����
	cout << (3 > 5 ? "Hello" : "world") << endl;
	cout << (3 < 5 ? "Hello" : "world") << endl;
}