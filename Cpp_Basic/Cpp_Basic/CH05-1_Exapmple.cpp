# include "io.h"
void CountNumber()
{
    int Counter = 0; //N
    int Number[101]; //array
    int FindNumber; // V
    int FindCount = 0;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Counter;

    for (int i = 0; i < Counter; i++)
    {
        cout << "�� �����͸� �Է��� �ּ��� : ";
        cin >> Number[i];
    }

    cout << "ã�� ���� �Է��� �ּ��� : ";
    cin >> FindNumber;

    for (int i = 0; i < Counter; i++)
    {
        if (Number[i] == FindNumber)
        {
            FindCount++;
        }
    }
    cout << "���� ���� ������ : " << FindCount << "�� �Դϴ�.";
}
void LessNumber()
{
    int Counter = 0;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Counter;

    int FindNumber;
    cout << "���� ���� �Է� ���ּ��� : ";
    cin >> FindNumber;

    int* pNumber = new int[Counter];
    for (int i = 0; i < Counter; i++)
    {
        cout << "�� �����͸� �Է����ּ��� : ";
        cin >> pNumber[i];
    }

    for (int i = 0; i < Counter; i++)
    {
        if (FindNumber > pNumber[i])
        {
            cout << pNumber[i] << " : ";
        }
    }
}
void MissingNumber()
{
    int Counter;
    cout << "�л� ���� �Է����ּ��� : ";
    cin >> Counter;

    int FindNumber;
    cout << "���� �������� ���� �л� ���� �Է� ���ּ��� : ";
    cin >> FindNumber;

    //��ü �л��� ��ȣ ������ Set
    //int TotalMember[Counter]; : ���� ���� : ũ�⿡ ���� ��� �Ұ���.
    // ��������
    int* pTotalMember = new int[Counter];
    for (int i = 0; i < Counter; i++)
    {
        pTotalMember[i] = i + 1;
    }
    //���� ������ �л� ��ȣ Set
    /*int WorkMember[Counter - FindNumber];*/
    int* pWorkmember = new int[Counter - FindNumber];

    for (int i = 0; i < (Counter - FindNumber); i++)
    {
        cin >> pWorkmember[i];

    }
    // ���� Ȯ�ο� �迭 ������ Set
    bool* pCheck = new bool[Counter];
    for (int i = 0; i < Counter; i++)
    {
        pCheck[i] = false;
    }
    // ������ �л�, ������ �л� ���� - ture/false
    for (int i = 0; i < (Counter - FindNumber); i++)
    {
        for (int j = 0; j < Counter; j++)
        {
            if (pWorkmember[i] == pTotalMember[j])
            {
                pCheck[j] = true;
            }
        }
    }
    // ������ �л� ��ȣ ����
    for (int i = 0; i < Counter; i++)
    {
        if (pCheck[i] == false)
        {
            cout << i + 1 << "�� �ȳ�" << endl;
        }
    }
}