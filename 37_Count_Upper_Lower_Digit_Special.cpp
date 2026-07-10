/* Accept string from user and count uppercase, lowercase, digits and special characters.

Input-  Ganesh@123

Output-
Uppercase : 1
Lowercase : 5
Digits    : 3
Special   : 1

Input-  India#2025!

Output-
Uppercase : 1
Lowercase : 4
Digits    : 4
Special   : 2

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream> 
using namespace std;

void Count_Characters(char *str)
{
    int iUpper = 0;
    int iLower = 0;
    int iDigit = 0;
    int iSpecial = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iUpper++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iLower++;
        }
        else if(*str >= '0' && *str <= '9')
        {
            iDigit++;
        }
        else
        {
            iSpecial++;
        }

        str++;
    }

    cout<<"Uppercase : "<<iUpper<<endl;
    cout<<"Lowercase : "<<iLower<<endl;
    cout<<"Digits    : "<<iDigit<<endl;
    cout<<"Special   : "<<iSpecial<<endl;
}

int main()
{
    char Arr[50];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    Count_Characters(Arr);

    return 0;
}
