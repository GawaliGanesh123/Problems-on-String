/* Accept string from user and count the number of small letters from string.

Input-  Ganesh Gawali.
Output- 10

Input- India Is My Country.
Output-12
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int Count_Small(char *str)
{
	int iCnt=0;

	while(*str !='\0')
	{
		if((*str>='a') && (*str<='z'))
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

    iRet=Count_Small(Arr);

    cout<<"Count of Small letters : "<<iRet<<endl;


    return 0;


}
