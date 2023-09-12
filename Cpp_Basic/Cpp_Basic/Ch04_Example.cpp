#include "io.h"



void LeapYear()
{
    int Year;
    cout << "������ �Է����ּ���.";
    cin >> Year;
    // Year % 4 == 0 : 4�ǹ��
    // Year % 100 != 0 : 100�ǹ���� �ƴѰ�
    // ((Year % 4 == 0) && (Year % 100 != 0))
    // Year % 400 == 0 : 400�� ���
    //((Year % 4 == 0) && (Year % 100 != 0)) || Year % 400 == 0
    if (((Year % 4 == 0) && (Year % 100 != 0)) || Year % 400 == 0)
    {
        cout << "�� �� �Դϴ�." << endl;
    }
    else
    {
        cout << "�� �� �Դϴ�." << endl;
    }
}
void SizeComparison()
{
    int Value1 = 0;
    int Value2 = 0;
    cout << "ù��° ���� �Է��� �ּ���.";
    cin >> Value1;
    cout << "�ι�° ���� �Է��� �ּ���.";
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
    cout << "x���� �Է��ϼ���.";
    cin >> x;
    cout << "y���� �Է��ϼ���.";
    cin >> y;

    // x>0 && y>0 : ��ξ��
    // x<0 && y>0 : x����, y���
    // x<0 && y<0 : �������
    // x>0 && y<0 : x���, y����

    if (x > 0 && y > 0)
    {
        cout << "1��и�" << endl;
    }
    else if (x < 0 && y>0)
    {
        cout << "2��и�" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "3��и�" << endl;
    }
    else
    {
        cout << "4��и�" << endl;
    }
}

void OvenTimer()
{
    int StartHour, StartMinute, CookingTime, FinishTime;
    // �Է� ���� ���� ���ؼ� �ð� ���� �ȿ� ���ԵǴ��� ���� �Ǵ�.
    // ������ ����� ���� �ԷµǸ� ���� �޼����� ����ϰ� �ٽ� �Է��� ����
    while (true)
    {
        cout << "�����ϴ� �ð� �� �Է� : ";
        cin >> StartHour;
        // 0<= StartHour <=23 : StartHour >=0 && StartHour <=23
        if (StartHour >= 0 && StartHour <= 23)
        {
            break;
        }
        else
        {
            cout << "�߸��Է��Ͽ����ϴ�." << endl;
        }
    }
    while (true)
    {
        cout << "�����ϴ� �ð� �� �Է� : ";
        cin >> StartMinute;
        if (StartMinute >= 0 && StartMinute <= 59)
        {
            break;
        }
        else
        {
            cout << "�߸��Է��Ͽ����ϴ�." << endl;
        }
    }
    while (true)
    {
        cout << "�丮�ð� �Է� : ";
        cin >> CookingTime;
        if (CookingTime >= 0 && CookingTime <= 59)
        {
            break;
        }
        else
        {
            cout << "�߸��Է��Ͽ����ϴ�." << endl;
        }
    }


    // ���� �ð��� �а� �丮 �ð��� �� ���� ������ �� 60�� �Ѿ��
    //�� �κп� 1�� ������Ű�� �� ���� 60�� �������� ��� +1 �ϰ�

    int AddHour = (StartMinute + CookingTime) / 60;
    int FinishMinute = (StartMinute + CookingTime) % 60;

    // ���� �ð��� �丮 �ð����� �߰��Ǵ� �ð��� ������ �� 24 �Ѿ��� ��
    // �ð��� 0���� �����ϵ��� ��������.
    int FinishHour = (StartHour + AddHour) % 24;

    cout << FinishHour << " : " << FinishMinute << endl;



}