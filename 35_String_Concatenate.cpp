/* Accept two strings from user and concatenate them.

Input-
Str1 : Hello
Str2 : World

Output- HelloWorld

Input-
Str1 : India
Str2 : IsGreat

Output- IndiaIsGreat 

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void String_Concatenate(char *str1, char *str2)
{
    while(*str1 != '\0') 
    {
        str1++;
    }

    while(*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

int main()
{
    char Arr1[50];
    char Arr2[50];

    cout<<"Enter First String:"<<endl;
    cin.getline(Arr1,50);

    cout<<"Enter Second String:"<<endl;
    cin.getline(Arr2,50);

    String_Concatenate(Arr1,Arr2);

    cout<<"String after concatenation : "<<Arr1<<endl;

    return 0;
}
