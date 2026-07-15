/* Accept string from user and count the words in a given string.

Input-  Ganesh Gawali.
Output- 2

Input- India Is My Country.
Output- 4
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
 
int Count_Words(char *str)
{
    int i = 0, iCnt = 0;

    while(str[i] != '\0')
    {
        // Checked start of a word
        if((str[i] != ' ') && (i == 0 || str[i-1] == ' '))
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    iRet = Count_Words(Arr);

    cout<<"Count of Words : "<<iRet<<endl;

    return 0;
}
