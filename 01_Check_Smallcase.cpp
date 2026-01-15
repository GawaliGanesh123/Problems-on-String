/* Accept Character from user and check whether its small case or not.

Input- t
Output- Yes its small case

Input- T
Output - No its not small case

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;


bool Check_SmallCase(char ch)
{ 
	 
	if((ch>='a') && (ch<='z'))
    { 
      return true;
    }
    else
    {
      return false;
    }
}

int main()
{
    char ch='\0';
    bool bRet=false;

    cout<<"Enter a Character:"<<endl;
    cin>>ch;

    bRet=Check_SmallCase(ch);

    if(bRet == true)
    {
      cout<<"Yes its small case"<<endl;
    }
    else
    {
      cout<<"No its not small case"<<endl;
    }
 
	return 0;
}


