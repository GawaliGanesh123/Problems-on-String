/* Accept string from user and count the number of Capital letters from string.

Input-  Ganesh Gawali.
Output- 2

Input- India Is My Country.
Output-4
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int Count_Capital(char *str)
{
	int iCnt=0;

	while(*str !='\0')
	{
		if((*str>='A') && (*str<='Z'))
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

    iRet=Count_Capital(Arr);

    cout<<"Count of Capital letters : "<<iRet<<endl;


    return 0;

}
