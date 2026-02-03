/* Accept string from user and convert Uppercase letters into Lowercase.

Input- Ganesh Gawali
Output-ganesh gawali

Input- NILESH
Output- nilesh

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 

#include<iostream>
using namespace std;

void Convert_To_Lowercase(char *str)
{
	while(*str !='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}

		str++;
	}
}


int main()
{
   char Arr[20];

   cout<<"Enter a String:"<<endl;
   cin.getline(Arr,20);

   Convert_To_Lowercase(Arr);

   cout<<"String After Conversion:"<<Arr<<endl;

	return 0;

}

