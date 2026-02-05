/* Accept string and one character from user and find first occurrence of a given character in a given string.

Input- Ganesh
     character:s

Output-First Occurrence position is:4


Input-Ravindra 
    character-z

Output-Character not Found

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int First_Occurrence(char *str, char ch)
{
	int i=0;

	while(str[i] !='\0')
	{
		if(str[i] == ch)
		{
			return i;
		}

		i++;
	}

	return 0;
}

int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet=0;

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter a Character:"<<endl;
    cin>>cValue;

    iRet=First_Occurrence(Arr,cValue);

    if(iRet != 0)
    {
    	cout<<"First Occurrence position is:"<<iRet<<endl;
    }
    else
    {
    	cout<<"Character not Found";
    }


	return 0;

}

