/* Accept string from user and check whether it contains only digits.

Input-  12345
Output- String contains only digits

Input-  12A45
Output- String contains non-digit characters

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

bool Check_Digits(char *str)
{
    while(*str != '\0')
    {
        if(*str < '0' || *str > '9')
        {
            return false;
        }

        str++;
    }

    return true;
}

int main()
{
    char Arr[50];
    bool bRet = false;

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    bRet = Check_Digits(Arr);

    if(bRet == true)
    {
        cout<<"String contains only digits"<<endl;
    }
    else
    {
        cout<<"String contains non-digit characters"<<endl;
    }

    return 0;
}
