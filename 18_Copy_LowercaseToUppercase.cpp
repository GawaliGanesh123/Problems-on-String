/*  Write a program  to accept one string (source string) from the user as input. 
    Accept another empty string (destination string). 
    Convert all Lowercase characters from the source string into uppercase characters and copy the converted result into the destination string. 
    Finally, display the destination string.

	Input- Ganesh Gawali
	Output- GANESH GAWALI

	Input- India is my country.
	Output- INDIA IS MY COUNTRY.

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;
 

void Copy_Lower_To_Upper(char *src, char *dest)
{
	while(*src !='\0')
	{
		if((*src>='a') &&(*src<='z'))
		{
		  *dest=*src-32;	
		}
		else
		{
			*dest=*src;
		}

		src++;
		dest++;
	}
	*dest='\0';
}


int main()
{
  char Arr[20];
  char Brr[20];

  cout<<"Enter a string:"<<endl;
  cin.getline(Arr,20);

  Copy_Lower_To_Upper(Arr,Brr);

  cout<<"String After Copy:"<<Brr<<endl;

  return 0;

}


