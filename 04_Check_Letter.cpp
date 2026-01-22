/* Accept string from user as well as another Letter and check whether that character is present in string or not.

Input- Ganesh Gawali.
     Letter: a

Output- Character is present in the string


Input- He is Shyam.
      Letter: p

Output- Character is not present in the string

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

bool Check_Letter(char *str, char cValue)
{
	while(*str !='\0')
	{
		if(*str == cValue)
			return true;

		str++;
	}
}


int main()
{
    char cValue='\0';
    char Arr[20];
    bool bRet=false;

    cout<<"Enter a String:"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter a Letter:"<<endl;
    cin>>cValue;

    bRet=Check_Letter(Arr,cValue);

    if(bRet==true)
    {
    	cout<<"Character is present in the string"<<endl;
    }
    else
    {
    	cout<<"Character is not present in the string"<<endl;
    }

	return 0;

}
