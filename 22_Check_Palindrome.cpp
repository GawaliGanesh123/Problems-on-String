/* Write a  program to check whether a given string is a palindrome or not (Dont use predefined functions).

Input- madam
Output- string is palindrome 

Input - hello 
Output- string is not palindrome

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
   

#include <iostream>    
using namespace std; 

bool CheckPalindrome(char *str) 
{  
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;   

    while (start < end)
    {
        if (*start != *end)
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    cout << "Enter string: ";
    cin.getline(Arr, 20);  

    bRet = CheckPalindrome(Arr);

    if (bRet)
    {
        cout << "String is palindrome\n";
    }
    else
    {
        cout << "String is not palindrome\n";
    }

    return 0;
}
