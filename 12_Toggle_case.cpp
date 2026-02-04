/* Accept string from user and convert Uppercase letters into Lowercase and Lowercase Letters into Uppercase(Toggle) .

Input- Ganesh Gawali
Output-gANESH gAWALI

Input- NILESH
Output- nilesh

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 
 
#include<iostream>
using namespace std;

void Toggle_Case(char *str)
{
	while(*str !='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}
		else if((*str>='a') && (*str<='z'))
		{
			*str=*str-32;
		}

		str++;
	}
}


int main()
{
   char Arr[20];

   cout<<"Enter a String:"<<endl;
   cin.getline(Arr,20);

   Toggle_Case(Arr);

   cout<<"String After Conversion:"<<Arr<<endl;

	return 0;

}


