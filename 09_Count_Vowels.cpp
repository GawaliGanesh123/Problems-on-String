/* Accept string from user and count the Vowels in a given string.

Input-  Ganesh Gawali.
Output- 5

Input- India Is My Country.
Output-6
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int Count_Vowels(char *str)
{
	int iCnt=0;

	while(*str !='\0')
	{
		char ch = *str;

        if(ch >= 'A' && ch <= 'Z')    // Convert uppercase to lowercase
        {
            ch = ch + 32;
        }

        if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u'))
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

    iRet=Count_Vowels(Arr);

    cout<<"Count of Vowels : "<<iRet<<endl;


    return 0;

}
