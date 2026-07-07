/* Accept string from user and find the first non-repeating character.

Input-  swiss
Output- w

Input-  programming
Output- p

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
 
char First_Non_Repeating_Character(char *str) 
{
    int i = 0, j = 0;

    while(str[i] != '\0')
    {
        int iCnt = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                iCnt++;
            }
        }

        if(iCnt == 1)
        {
            return str[i];
        }

        i++;
    }

    return '\0';
}

int main()
{
    char Arr[50];
    char chRet = '\0';

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    chRet = First_Non_Repeating_Character(Arr);

    if(chRet != '\0')
    {
        cout<<"First non-repeating character : "<<chRet<<endl;
    }
    else
    {
        cout<<"No non-repeating character found"<<endl;
    }

    return 0;
}
