#include "io.h"



void LeapYear()
{
    int Year;
    cout << "연도를 입력해주세요.";
    cin >> Year;
    // Year % 4 == 0 : 4의배수
    // Year % 100 != 0 : 100의배수가 아닌것
    // ((Year % 4 == 0) && (Year % 100 != 0))
    // Year % 400 == 0 : 400의 배수
    //((Year % 4 == 0) && (Year % 100 != 0)) || Year % 400 == 0
    if (((Year % 4 == 0) && (Year % 100 != 0)) || Year % 400 == 0)
    {
        cout << "윤 년 입니다." << endl;
    }
    else
    {
        cout << "평 년 입니다." << endl;
    }
}
void SizeComparison()
{
    int Value1 = 0;
    int Value2 = 0;
    cout << "첫번째 값을 입력해 주세요.";
    cin >> Value1;
    cout << "두번째 값을 입력해 주세요.";
    cin >> Value2;
    if (Value1 > Value2)
    {
        cout << ">" << endl;
    }
    else if (Value1 < Value2)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "==" << endl;
    }
}
void Quadrant()
{
    int x, y;
    cout << "x값을 입력하세요.";
    cin >> x;
    cout << "y값을 입력하세요.";
    cin >> y;

    // x>0 && y>0 : 모두양수
    // x<0 && y>0 : x음수, y양수
    // x<0 && y<0 : 모두음수
    // x>0 && y<0 : x양수, y음수

    if (x > 0 && y > 0)
    {
        cout << "1사분면" << endl;
    }
    else if (x < 0 && y>0)
    {
        cout << "2사분면" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "3사분면" << endl;
    }
    else
    {
        cout << "4사분면" << endl;
    }
}

void OvenTimer()
{
    int StartHour, StartMinute, CookingTime, FinishTime;
    // 입력 받은 값에 대해서 시간 범위 안에 포함되는지 여부 판단.
    // 범위를 벗어나는 값이 입력되면 오류 메세지를 출력하고 다시 입력을 받음
    while (true)
    {
        cout << "시작하는 시간 시 입력 : ";
        cin >> StartHour;
        // 0<= StartHour <=23 : StartHour >=0 && StartHour <=23
        if (StartHour >= 0 && StartHour <= 23)
        {
            break;
        }
        else
        {
            cout << "잘못입력하였습니다." << endl;
        }
    }
    while (true)
    {
        cout << "시작하는 시간 분 입력 : ";
        cin >> StartMinute;
        if (StartMinute >= 0 && StartMinute <= 59)
        {
            break;
        }
        else
        {
            cout << "잘못입력하였습니다." << endl;
        }
    }
    while (true)
    {
        cout << "요리시간 입력 : ";
        cin >> CookingTime;
        if (CookingTime >= 0 && CookingTime <= 59)
        {
            break;
        }
        else
        {
            cout << "잘못입력하였습니다." << endl;
        }
    }


    // 시작 시간의 분과 요리 시간에 분 값을 더했을 떄 60이 넘어가면
    //시 부분에 1을 증가시키고 분 값은 60을 뺀값으로 출력 +1 하고

    int AddHour = (StartMinute + CookingTime) / 60;
    int FinishMinute = (StartMinute + CookingTime) % 60;

    // 시작 시간에 요리 시간으로 추가되는 시간을 더했을 떄 24 넘었을 떄
    // 시간을 0부터 시작하도록 조정해줌.
    int FinishHour = (StartHour + AddHour) % 24;

    cout << FinishHour << " : " << FinishMinute << endl;



}