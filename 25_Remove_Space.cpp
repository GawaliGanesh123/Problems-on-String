/* Accept string from user and remove the Spaces from a given string.

Input-  Ganesh Gawali.
Output- GaneshGawali.

Input- India Is My Country.
Output- IndiaIsMyCountry.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

#include<iostream>
using namespace std;

void Remove_Spaces(char *str)
{
    int i = 0, j = 0;

    while(str[i] != '\0')
    {
        if(str[i] != ' ')   // skipped spaces
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';   // end string
}

int main()
{
    char Arr[20];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,20);

    Remove_Spaces(Arr);

    cout<<"String after removing spaces : "<<Arr<<endl;

    return 0;
}
