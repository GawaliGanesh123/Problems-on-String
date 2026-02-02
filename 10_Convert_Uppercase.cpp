/* Accept string from user and convert lower case letters into Uppercase.

Input- Ganesh Gawali
Output-GANESH GAWALI

Input- amit
Output- AMIT

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 


#include<iostream>
using namespace std;

void Convert_To_Uppercase(char *str)
{
	while(*str !='\0')
	{
		if((*str>='a') && (*str<='z'))
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

   Convert_To_Uppercase(Arr);

   cout<<"String After Conversion:"<<Arr<<endl;

	return 0;

}

