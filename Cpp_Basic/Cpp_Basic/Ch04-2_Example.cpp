# include "io.h"
void MultipleCaculate()
{
    int LoopCount, Value1, Value2, i;
    cout << "�ݺ� Ƚ���� �Է��ϼ���." << endl;
    cin >> LoopCount;
    for (i = 0; i < LoopCount; i++)
    {
        cout << "�� ���� �Է����ּ���";
        cin >> Value1;
        cin >> Value2;
        cout << Value1 + Value2 << endl;
    }
}
void Receipt()
{
    int TotalPrice = 0;
    int Count = 0;
    int Price = 0;
    int Number = 0;
    int SumPrice = 0;
    cout << "���� �� �ݾ� : " << endl;
    cin >> TotalPrice;
    cout << "���� ���� �� : " << endl;
    cin >> Count;

    for (int i = 1; i <= Count; i++)
    {
        cout << i << "�� ���� ���� : " << endl;
        cin >> Price;
        cout << i << "�� ���� ���� : " << endl;
        cin >> Number;
        cout << i << "�� ���� �� ���� :" << Price * Number << endl;
        SumPrice += Price * Number;
    }
    if (TotalPrice == SumPrice)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
    cout << ((TotalPrice == SumPrice) ? "yes" : "NO");
}
void Star1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void Star2()
{
    int N, i, j, k;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        for (j = N; j >= i; j--)
        {
            cout << "@ ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}