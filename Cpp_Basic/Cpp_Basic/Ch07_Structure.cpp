#include "io.h"

void Structure()
{
    // ����ü ���� ���� : ������ Ÿ�� ���� 
    // inflatable �̶�� ������ Ÿ���� ������̴�.
    struct inflatable
    {
        char name[20];
        float volume;
        double price;
    };
    // inflatable �̶�� ������ Ÿ���� ���� people �� �����Ѱ��̴�.
    inflatable People = { "Tom",0.75,15.235 };

    struct sesac
    {
        //��� ����
        char name[20];
        char address[100];
        char phone[20];
        int age;
    };

    sesac Banjang;
    Banjang = { "Jane","�����","01012345678",25 };

    Banjang.age = 30;

    // ����ü ���� ���� 
    inflatable a;
    // �ʱ�ȭ
    inflatable quest = {
    "Hello",
    1.88f,
    29.99
    };
    // ����
    quest.volume = 3.09f;
}

void Enum()
{
    // enum  : ������ ������ Ÿ��
    // Sun, Mon, Tue, Wed, Thu, Fri, Sat : ������ ���
    // 0 ���� �����ϴ� ����� ������ ����� ������ �Ҵ����ش�.
    // ���� ���� ����� =1 �� ���̸� 1���ͽ����ϴ°����� �ٲ�Եȴ�.
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
    //ChangeValue(c); // ��ȭ�� ����
    c = ChangeVlaue2();
}