//#include "io.h"
//void IndexChar()
//{
//    char word[20];
//    int Number;
//    cout << "원하는 단어를 입력 해주세요." << endl;
//    cin >> word;
//
//    cout << "출력을 원하는 자리수를 입력해주세요.";
//    cin >> Number;
//
//    cout << word[Number - 1];
//
//}
//void AlpaNumber()
//{
//    char Word[101];
//    cout << "원하는 단어를 입력 해주세요." << endl;
//    cin >> Word;
//
//    char Alpha[] = "abcdefghijklmnopqrstuvwxyz";
//    int AlphaSize = sizeof(Alpha) - 1;
//
//    int Check[AlphaSize];
//
//    for (int i = 0; i < AlphaSize; i++)
//    {
//        Check[i] = -1;
//    }
//
//    for (int i = 0; i < sizeof(Word) - 1; i++)
//    {
//        for (int j = 0; j < AlphaSize; j++)
//        {
//            if (Word[i] == Alpha[j])
//            {
//                if (Check[j] == -1)
//                {
//                    Check[j] = i;
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < AlphaSize; i++)
//    {
//        cout << Check[i] << " ";
//    }
//
//}