/* Accept string from user and count the number of Whitepaces from string.

Input-  Ganesh Gawali.
Output- 1

Input- India Is My Country.
Output-3
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 
#include<iostream>
using namespace std;

int Count_Spaces(char *str)
{
	int iCnt=0;

	while(*str !='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}

		str++;
	}

	return iCnt;
}

int main()
{
    char Arr[20];
    int  iRet=0;

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,20);

    iRet=Count_Spaces(Arr);

    cout<<"Count of Spaces : "<<iRet<<endl;


    return 0;

}


