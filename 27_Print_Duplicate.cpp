/* Accept string from user and print the duplicate characters from a given string.

Input-  programming
Output- r g m

Input-  Ganesh Gawali
Output- a

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 


#include<iostream>
using namespace std;

void Print_Duplicate_Characters(char *str)
{
    char *ptr = str;

    while(*ptr != '\0')
    {
        int iCnt = 0;
        char *temp = str;

        while(*temp != '\0')
        {
            if(*ptr == *temp)
            {
                iCnt++;
            }
            temp++;
        }

        if(iCnt > 1)
        {
            cout << *ptr << " ";

            // Marked it as a  all occurrences as visited
            temp = str;
            while(*temp != '\0')
            {
                if(*temp == *ptr)
                {
                    *temp = '*';
                }
                temp++;
            }
        }

        ptr++;
    }
}

int main()
{
    char Arr[50];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    Print_Duplicate_Characters(Arr);

    cout<<endl;

    return 0;
}
