//# include "io.h"
//void CountNumber()
//{
//    int Counter = 0; //N
//    int Number[101]; //array
//    int FindNumber; // V
//    int FindCount = 0;
//    cout << "���� ������ �Է����ּ��� : ";
//    cin >> Counter;
//
//    for (int i = 0; i < Counter; i++)
//    {
//        cout << "�� �����͸� �Է��� �ּ��� : ";
//        cin >> Number[i];
//    }
//
//    cout << "ã�� ���� �Է��� �ּ��� : ";
//    cin >> FindNumber;
//
//    for (int i = 0; i < Counter; i++)
//    {
//        if (Number[i] == FindNumber)
//        {
//            FindCount++;
//        }
//    }
//    cout << "���� ���� ������ : " << FindCount << "�� �Դϴ�.";
//}
//void LessNumber()
//{
//    int Counter = 0;
//    cout << "���� ������ �Է����ּ��� : ";
//    cin >> Counter;
//
//    int FindNumber;
//    cout << "���� ���� �Է� ���ּ��� : ";
//    cin >> FindNumber;
//
//    int Number[Counter];
//    for (int i = 0; i < Counter; i++)
//    {
//        cout << "�� �����͸� �Է����ּ��� : ";
//        cin >> Number[i];
//    }
//
//    for (int i = 0; i < Counter; i++)
//    {
//        if (FindNumber > Number[i])
//        {
//            cout << Number[i] << " : ";
//        }
//    }
//}
//void MissingNumber()
//{
//    int Counter;
//    cout << "�л� ���� �Է����ּ��� : ";
//    cin >> Counter;
//
//    int FindNumber;
//    cout << "���� �������� ���� �л� ���� �Է� ���ּ��� : ";
//    cin >> FindNumber;
//
//    //��ü �л��� ��ȣ ������ Set
//    int TotalMember[C];
//    for (int i = 0; i < Counter; i++)
//    {
//        TotalMember[i] = i + 1;
//    }
//    //���� ������ �л� ��ȣ Set
//    int WorkMember[Counter - FindNumber];
//
//    for (int i = 0; i < (Counter - FindNumber); i++)
//    {
//        cin >> WorkMember[i];
//
//    }
//    // ���� Ȯ�ο� �迭 ������ Set
//    bool Check[Counter];
//    for (int i = 0; i < Counter; i++)
//    {
//        Check[i] = false;
//    }
//    // ������ �л�, ������ �л� ���� - ture/false
//    for (int i = 0; i < (Counter - FindNumber); i++)
//    {
//        for (int j = 0; j < Counter; j++)
//        {
//            if (WorkMember[i] == TotalMember[j])
//            {
//                Check[j] = true;
//            }
//        }
//    }
//    // ������ �л� ��ȣ ����
//    for (int i = 0; i < Counter; i++)
//    {
//        if (Check[i] == false)
//        {
//            cout << i + 1 << "�� �ȳ�" << endl;
//        }
//    }
//}