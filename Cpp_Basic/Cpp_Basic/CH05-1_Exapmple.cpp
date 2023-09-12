//# include "io.h"
//void CountNumber()
//{
//    int Counter = 0; //N
//    int Number[101]; //array
//    int FindNumber; // V
//    int FindCount = 0;
//    cout << "¼ıÀÚ °³¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : ";
//    cin >> Counter;
//
//    for (int i = 0; i < Counter; i++)
//    {
//        cout << "¼ö µ¥ÀÌÅÍ¸¦ ÀÔ·ÂÇØ ÁÖ¼¼¿ä : ";
//        cin >> Number[i];
//    }
//
//    cout << "Ã£À» ¼ö¸¦ ÀÔ·ÂÇØ ÁÖ¼¼¿ä : ";
//    cin >> FindNumber;
//
//    for (int i = 0; i < Counter; i++)
//    {
//        if (Number[i] == FindNumber)
//        {
//            FindCount++;
//        }
//    }
//    cout << "¯´Â ¼öÀÇ °³¼ö´Â : " << FindCount << "°³ ÀÔ´Ï´Ù.";
//}
//void LessNumber()
//{
//    int Counter = 0;
//    cout << "¼ıÀÚ °³¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : ";
//    cin >> Counter;
//
//    int FindNumber;
//    cout << "±âÁØ ¼ö¸¦ ÀÔ·Â ÇØÁÖ¼¼¿ä : ";
//    cin >> FindNumber;
//
//    int Number[Counter];
//    for (int i = 0; i < Counter; i++)
//    {
//        cout << "¼ö µ¥ÀÌÅÍ¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : ";
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
//    cout << "ÇĞ»ı ¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä : ";
//    cin >> Counter;
//
//    int FindNumber;
//    cout << "°úÁ¦ Á¦ÃâÇÏÁö ¾ÊÀº ÇĞ»ı ¼ö¸¦ ÀÔ·Â ÇØÁÖ¼¼¿ä : ";
//    cin >> FindNumber;
//
//    //ÀüÃ¼ ÇĞ»ıÀÇ ¹øÈ£ µ¥ÀÌÅÍ Set
//    int TotalMember[C];
//    for (int i = 0; i < Counter; i++)
//    {
//        TotalMember[i] = i + 1;
//    }
//    //°úÁ¦ Á¦ÃâÇÑ ÇĞ»ı ¹øÈ£ Set
//    int WorkMember[Counter - FindNumber];
//
//    for (int i = 0; i < (Counter - FindNumber); i++)
//    {
//        cin >> WorkMember[i];
//
//    }
//    // Á¦Ãâ È®ÀÎ¿ë ¹è¿­ º¯¼ö¸¦ Set
//    bool Check[Counter];
//    for (int i = 0; i < Counter; i++)
//    {
//        Check[i] = false;
//    }
//    // Á¦ÃâÇÑ ÇĞ»ı, ¹ÌÁ¦Ãâ ÇĞ»ı ±¸ºĞ - ture/false
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
//    // ¹ÌÁ¦Ãâ ÇĞ»ı ¹øÈ£ ÃßÃâ
//    for (int i = 0; i < Counter; i++)
//    {
//        if (Check[i] == false)
//        {
//            cout << i + 1 << "¹ø ¾È³¿" << endl;
//        }
//    }
//}