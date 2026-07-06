/* Accept string from user and reverse the words from a given string.

Input-  I love India
Output- India love I

Input-  Ganesh Gawali
Output- Gawali Ganesh

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Reverse(char *start, char *end)
{
    while(start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;
 
        start++;
        end--;
    }
}

void Reverse_Words(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    // Reversed entire string
    Reverse(start,end);

    // Reversed individual words
    start = str;
    end = str;

    while(*end != '\0')
    {
        if(*end == ' ')
        {
            Reverse(start,end-1);
            start = end + 1;
        }

        end++;
    }

    Reverse(start,end-1);
}

int main()
{
    char Arr[100];

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,100);

    Reverse_Words(Arr);

    cout<<"String after reversing words : "<<Arr<<endl;

    return 0;
}
