/* Accept string from user and replace a given character with another character.

Input-
String  : banana
Replace 'a' with 'o'

Output- bonono

Input-
String  : Ganesh
Replace 'a' with 'u'

Output- Gunesh

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
 
#include<iostream>
using namespace std;

void Replace_Character(char *str, char chOld, char chNew)
{
    while(*str != '\0')
    {
        if(*str == chOld)
        {
            *str = chNew;
        }

        str++;
    }
}

int main()
{
    char Arr[50];
    char chOld = '\0';
    char chNew = '\0';

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    cout<<"Enter character to replace:"<<endl;
    cin>>chOld;

    cout<<"Enter new character:"<<endl;
    cin>>chNew;

    Replace_Character(Arr, chOld, chNew);

    cout<<"String after replacement : "<<Arr<<endl;

    return 0;
}
