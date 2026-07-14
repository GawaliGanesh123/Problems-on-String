/* Accept string from user and compress the string.

Input-  aaabbcccc
Output- a3b2c4

Input-  aabccddd
Output- a2b1c2d3

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
 
void Compress_String(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        char ch = str[i];
        int iCnt = 0;

        while(str[i] == ch)
        {
            iCnt++;
            i++;
        }

        cout << ch << iCnt;
    }

    cout << endl;
}

int main()
{
    char Arr[50];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    Compress_String(Arr);

    return 0;
}
