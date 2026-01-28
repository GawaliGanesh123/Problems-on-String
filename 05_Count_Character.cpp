/* Write a program to count the occurrence of a given character in a given string.

Input-  Ganesh Gawali.
    Character:a

Output- 3

Input-  Bananaa
    Character:a

Output-4
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream> 
using namespace std;

int Count_Character(char *str, char ch)
{
	int iCnt=0;

	while(*str !='\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}

		str++;
	}

	return iCnt;
}

int main()
{
    char cValue='\0';
    char Arr[20];
    int  iRet=0;

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter a character:"<<endl;
    cin>>cValue;

    iRet=Count_Character(Arr,cValue);

    cout<<"Frequency of letter : "<<iRet<<endl;


    return 0;

}

