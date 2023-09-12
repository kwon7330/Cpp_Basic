#include "io.h"
void Bubblesort()
{
    int Number[10] = { 6,3,7,5,10,1,4,2,9,8 };
    int temp = 0;

    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            //비교 
            if (Number[j] > Number[j + 1])
            {
                //교환(Swap)
                temp = Number[j];
                Number[j] = Number[j + 1];
                Number[j + 1] = temp;

            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << Number[i] << " : ";
    }
    cout << endl;
}
