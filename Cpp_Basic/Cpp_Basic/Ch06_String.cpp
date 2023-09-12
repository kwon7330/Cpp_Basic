#include "io.h"
void String()
{
    char a = 'a';

    char hello[5] = { 'H','E','L','L','O' };

    char world[6] = "WORLD"; // 보이지는 않지만 '\0' 문자가 마지막에 포함됨.

    char b[] = "Hello World";

    int Size = sizeof(b);
    cout << Size << endl;

    for (int i = 0; i < Size - 1; i++)
    {
        cout << b[i] << endl;
    }
}