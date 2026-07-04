/* Accept two strings from user and check whether they are Anagram or not.

Input-  listen
        silent
Output- Strings are Anagram

Input-  hello
        world 
Output- Strings are not Anagram

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream> 
using namespace std;

bool Check_Anagram(char *str1, char *str2)
{
    int i = 0, j = 0;
    int iLen1 = 0, iLen2 = 0;

    // Calculateded length of first string
    while(str1[i] != '\0')
    {
        iLen1++;
        i++;
    }

    // Calculateded length of second string
    while(str2[j] != '\0')
    {
        iLen2++;
        j++;
    }

    // Lengths must be same checked
    if(iLen1 != iLen2)
    {
        return false;
    }

    for(i = 0; str1[i] != '\0'; i++)
    {
        int iCnt1 = 0;
        int iCnt2 = 0;

        for(j = 0; str1[j] != '\0'; j++)
        {
            if(str1[i] == str1[j])
            {
                iCnt1++;
            }
        }

        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                iCnt2++;
            }
        }

        if(iCnt1 != iCnt2)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char Arr1[50];
    char Arr2[50];
    bool bRet = false;

    cout<<"Enter First String:"<<endl;
    cin.getline(Arr1,50);

    cout<<"Enter Second String:"<<endl;
    cin.getline(Arr2,50);

    bRet = Check_Anagram(Arr1,Arr2);

    if(bRet == true)
    {
        cout<<"Strings are Anagram"<<endl;
    }
    else
    {
        cout<<"Strings are not Anagram"<<endl;
    }

    return 0;
}
