#include "io.h"
void String()
{
    char a = 'a';

    char hello[5] = { 'H','E','L','L','O' };

    char world[6] = "WORLD"; // �������� ������ '\0' ���ڰ� �������� ���Ե�.

    char b[] = "Hello World";

    int Size = sizeof(b);
    cout << Size << endl;

    for (int i = 0; i < Size - 1; i++)
    {
        cout << b[i] << endl;
    }
}