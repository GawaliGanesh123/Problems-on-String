/* Accept string from user and display frequency of each character.

Input  : apple
Output :
a = 1
p = 2
l = 1
e = 1
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream> 
using namespace std;  

void Char_Frequency(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        char ch = str[i];
        int count = 0;
        bool printed = false;

        // Checked if character was already printed
        for(int k = 0; k < i; k++)
        {
            if(str[k] == ch)
            {
                printed = true;
                break;
            }
        }

        if(!printed)
        {
            // Count occurrences
            for(int j = 0; str[j] != '\0'; j++)
            {
                if(str[j] == ch)
                    count++;
            }

            cout << ch << " = " << count << endl;
        }

        i++;
    }
}

int main()
{
    char Arr[50];

    cout << "Enter a String:" << endl;
    cin.getline(Arr, 50);

    Char_Frequency(Arr);

    return 0;
}
