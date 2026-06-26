/* Accept string from user and remove the Vowels from a given string.

Input-  Ganesh Gawali.
Output- Gnsh Gwl.

Input- India Is My Country.
Output- nd s My Cntry.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Remove_Vowels(char *str)
{
    int i = 0, j = 0;
    char temp[20];

    while(str[i] != '\0')
    {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z')    // Converted uppercase to lowercase
        {
            ch = ch + 32;
        }

        if(!((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u')))
        {
            temp[j] = str[i];   // stored original character
            j++;
        }
        i++;
    }

    temp[j] = '\0';

    // Copied back to original string
    i = 0;
    while(temp[i] != '\0')
    {
        str[i] = temp[i];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char Arr[20];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,20);

    Remove_Vowels(Arr);

    cout<<"String after removing vowels : "<<Arr<<endl;

    return 0;
}
