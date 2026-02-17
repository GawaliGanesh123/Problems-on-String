/* Write a program to accept a string from the user and reverse the string (without using any predefined function). 
   Finally, display the reversed string.

Input-Ganesh Gawali
Output-ilawaG hsenaG

Input-India is my country
Output-yrtnuoc ym si aidnI

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 

#include<iostream>
using namespace std;

void Reverse_String(char *str)
{
	char *Start=NULL;
	char *End=NULL;
	char Temp='\0';

	Start=str;
	End=str;

	while(*End !='\0')
	{
		End++;
	}
	End--;

	while(Start<End)
	{
		Temp=*Start;
		*Start=*End;
		*End=Temp;

		Start++;
		End--;
	}
}


int main()
{
   char Arr[25];

   cout<<"Enter a string:"<<endl;
   cin.getline(Arr,20);

   Reverse_String(Arr);

   cout<<"string After Reverse:"<<Arr<<endl;

	return 0;

}

