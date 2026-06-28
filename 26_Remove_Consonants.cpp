/* Accept string from user and remove the Consonants from a given string.

Input-  Ganesh Gawali.
Output- aea aai.

Input- India Is My Country.
Output- Iia I ouy.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Remove_Consonants(char *str) 
{ 
    int i = 0, j = 0;

    while(str[i] != '\0')
    {
        char ch = str[i];

        // Converted uppercase to lowercase for checking
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        // it will Keep only vowels and spaces
        if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (str[i]==' '))
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';
}

int main()
{
    char Arr[20];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,20);

    Remove_Consonants(Arr);

    cout<<"String after removing consonants : "<<Arr<<endl;

    return 0;
}
