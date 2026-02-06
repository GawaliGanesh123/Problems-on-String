/* Accept string and one character from user and find Last occurrence of a given character in a given string.

Input- Ganesh Gawali
     character:a

Output-Last Occurrence position is:10


Input-Jai Muljani
    character-i

Output-Last Occurrence position is:10

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int Last_Occurrence(char *str, char ch)
{
	int i=0, iAns=0;

	while(str[i] !='\0')
	{
		if(str[i] == ch)
		{
			iAns=i;;
		}

		i++;
	}

	return iAns;
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

    iRet=Last_Occurrence(Arr,cValue);

    if(iRet != 0)
    {
    	cout<<"Last Occurrence position is:"<<iRet<<endl;
    }
    else
    {
    	cout<<"Character not Found";
    }


	return 0;

}
