/* Write a program to accept one string from the user and modify it such that every  vowel in the string is shifted to its next alphabet.

Input- Ganesh Gawali
Output-Gbnfsh Gbwblj

Input- india
Output-jndjb

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include<iostream>
using namespace std;

void Shift_Vowels(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            *str = *str + 1;
        }
        str++;
    }
}


int main()
{
    char Arr[25];

    cout<<"Enter a string:"<<endl;
    cin.getline(Arr, 20);

    Shift_Vowels(Arr);

    cout<<"After Shifting Vowels: "<<Arr<<endl;

    return 0;
}

