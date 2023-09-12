# include "io.h"
void MultipleCaculate()
{
    int LoopCount, Value1, Value2, i;
    cout << "반복 횟수를 입력하세요." << endl;
    cin >> LoopCount;
    for (i = 0; i < LoopCount; i++)
    {
        cout << "두 수를 입력해주세요";
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
    cout << "구입 총 금액 : " << endl;
    cin >> TotalPrice;
    cout << "물건 종류 수 : " << endl;
    cin >> Count;

    for (int i = 1; i <= Count; i++)
    {
        cout << i << "번 물건 가격 : " << endl;
        cin >> Price;
        cout << i << "번 물건 개수 : " << endl;
        cin >> Number;
        cout << i << "번 물건 총 가격 :" << Price * Number << endl;
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