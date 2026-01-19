/* Accept Character from user and check whether its Capital case or not.
 
Input- N
Output- Yes its Capital case

Input- n
Output - No its not Capital case

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
 
bool Check_CapitalCase(char ch)
{
	 
	if((ch>='A') && (ch<='Z'))
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

    bRet=Check_CapitalCase(ch);

    if(bRet == true)
    {
      cout<<"Yes its Capital case"<<endl;
    }
    else
    {
      cout<<"No its not Capital case"<<endl;
    }
   
	return 0;
}

 





