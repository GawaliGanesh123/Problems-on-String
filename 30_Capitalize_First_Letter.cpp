/* Accept string from user and capitalize the first letter of each word.

Input-  ganesh gawali
Output- Ganesh Gawali

Input-  india is my country
Output- India Is My Country

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Capitalize_First_Letter(char *str)
{
    int i = 0;

    // Capitalized first character if it is lowercase
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            if(str[i+1] >= 'a' && str[i+1] <= 'z')
            {
                str[i+1] = str[i+1] - 32;
            }
        }

        i++;
    }
}

int main()
{
    char Arr[50];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,50);

    Capitalize_First_Letter(Arr);

    cout<<"String after capitalization : "<<Arr<<endl;

    return 0;
}
