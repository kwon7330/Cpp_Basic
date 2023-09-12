#include "io.h"

void Structure()
{
    // 구조체 서술 정의 : 데이터 타입 생성 
    // inflatable 이라는 데이터 타입을 만든것이다.
    struct inflatable
    {
        char name[20];
        float volume;
        double price;
    };
    // inflatable 이라는 데이터 타입의 변수 people 를 선언한것이다.
    inflatable People = { "Tom",0.75,15.235 };

    struct sesac
    {
        //멤버 변수
        char name[20];
        char address[100];
        char phone[20];
        int age;
    };

    sesac Banjang;
    Banjang = { "Jane","서울시","01012345678",25 };

    Banjang.age = 30;

    // 구조체 변수 생성 
    inflatable a;
    // 초기화
    inflatable quest = {
    "Hello",
    1.88f,
    29.99
    };
    // 대입
    quest.volume = 3.09f;
}

void Enum()
{
    // enum  : 열거형 데이터 타입
    // Sun, Mon, Tue, Wed, Thu, Fri, Sat : 열거형 상수
    // 0 부터 시작하는 양수를 열거형 상수의 값으로 할당해준다.
    // 가장 앞의 상수에 =1 을 붙이면 1부터시작하는것으로 바뀌게된다.
    enum day { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

    day DayName;
    DayName = Sat;

    switch (DayName)
    {
    case Sun:
        cout << "Bike";
        break;
    case Mon:
        cout << "Work";
        break;
    case Tue:
        cout << "Work";
        break;
    case Wed:
        cout << "Work";
        break;
    case Thu:
        cout << "Work";
        break;
    case Fri:
        cout << "Work";
        break;
    case Sat:
        cout << "Party";
    }

    cout << DayName << endl;
}


void ChangeValue(int a)
{
    a = 0;
}

int ChangeVlaue2()
{
    return 0;
}

int c = 10;

void CallByValue()
{
    //ChangeValue(c); // 변화가 없음
    c = ChangeVlaue2();
}