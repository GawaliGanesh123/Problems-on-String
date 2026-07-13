/* Accept string from user and find the first capital letter.

Input-  ganEsh
Output- E

Input-  india Is My Country
Output- I

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std; 

char First_Capital_Letter(char *str)
{
    while(*str != '\0')
    { 
        if(*str >= 'A' && *str <= 'Z')
        {
            return *str;
        }

        str++;
    }

    return '\0';
}

int main()
{
    char Arr[50];
    char chRet = '\0';

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    chRet = First_Capital_Letter(Arr);

    if(chRet != '\0')
    {
        cout<<"First Capital Letter : "<<chRet<<endl;
    }
    else
    {
        cout<<"No Capital Letter Found"<<endl;
    }

    return 0;
}
