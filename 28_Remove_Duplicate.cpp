/* Accept string from user and remove the duplicate characters from a given string.

Input-  programming
Output- progamin

Input-  Ganesh Gawali
Output- Ganesh Gwli

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream> 
using namespace std;

void Remove_Duplicate_Characters(char *str)
{
    int i = 0, j = 0, k = 0;

    while(str[i] != '\0')
    {
        int iFlag = 0;

        for(j = 0; j < k; j++)
        {
            if(str[i] == str[j])
            {
                iFlag = 1;
                break;
            }
        }

        if(iFlag == 0)
        {
            str[k] = str[i];
            k++;
        }

        i++;
    }

    str[k] = '\0';
}

int main()
{
    char Arr[50];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    Remove_Duplicate_Characters(Arr);

    cout<<"String after removing duplicate characters : "<<Arr<<endl;

    return 0;
}
