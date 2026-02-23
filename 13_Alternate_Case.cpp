/* Accept string from user and convert it into Alternate Case(one capital one small).

Input- Ganesh Gawali
Output-GaNeSh gAwAlI

Input- Aditya
Output-AdItYa

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

#include<iostream>
using namespace std;


void Alternate_Case(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(i % 2 == 0)                     // Evenindex=Capital
        {
            if((str[i] >= 'a') && (str[i] <= 'z'))
            {
                str[i] = str[i] - 32;
            }
        }
        else             
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }

        i++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,20);

    Alternate_Case(Arr);

    cout<<"String After Conversion: "<<Arr<<endl;

    return 0;
}




