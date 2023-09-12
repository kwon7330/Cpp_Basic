#include "io.h"

void Variable()
{
    int Value1 = 100;
    Value1 = 200;

    const int Value2 = 50;
    //Value2 =100;
}

void VariableTypeNumber()
{
    //정수형 데이터 종류
    short Num1 = 10; // 2^16
    int Num2 = 20; // 2^32 integer(정수)
    long Num3 = 30; // 2^64

    cout << Num1 << Num2 << Num3 << endl;

    // 실수형 데이터 종류
    float Num4 = 1.23;
    float Num41 = 1.3579f;
    double Num5 = 1.35;

    cout << Num4 << Num5 << endl;
}

void VarialeTypeCharacter()
{
    // 문자형 데이터
    // 문자 1개 : '', 문자열은 ""
    // char 타입은 문자 1개만 저장이 가능하다.
    char Text1; // char : character
    char Text2;

    Text1 = 'A';
    Text2 = 'B';

    cout << Text1 << endl << Text2 << endl;
}

void VariableTypeBool()
{
    bool condition;

    condition = true;
    //cout << condition << endl;
    condition = false;
    //cout << condition << endl;

    condition = 1; // true
    condition = 0; // false

    // 0 => false, 그외 정수 => true
    condition = 10;
    //cout << condition << endl;

    condition = -5;
    //cout << condition << endl;
}