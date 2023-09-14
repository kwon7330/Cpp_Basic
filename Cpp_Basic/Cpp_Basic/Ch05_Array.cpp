#include "io.h"

void DefineArray()
{
    int Num = 10;

    // ���� declare(define)
    int a[3] = { 1,2,3 };
    int b[10] = { 1,2 };
    // int c[3] ={1,2,3,4}; => Syntax Error
    int d[3];

    // ���� => ����, Access
    // d[3] ={1,2,3}
    d[0] = 1;
    d[1] = 2;
    d[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        d[i] = i + 1;
    }
    // ��� => ����, Access
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n";
    // �迭 ���� 10��, 13�� �ݺ� ��� => 10�� ���� �Ѿ�� �κ��� ������ �� ���
    for (int i = 0; i < 13; i++)
    {
        cout << b[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << d[i] << " : ";
    }

    cout << "\n";


}

void TwoDimension()
{
    int number[3][2] = {
      {1,2},
      {3,4},
      {5,6}
    };

    cout << number[0][0] << endl;
    cout << number[2][1] << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << number[i][j] << endl;
        }
    }
}
