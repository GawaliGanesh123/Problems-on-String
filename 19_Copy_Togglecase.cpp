/* Write a program to accept one string (source string) from the user as input.
   Accept another empty string (destination string).
   While copying characters from the source string into the destination string, convert each character into its opposite case (toggle case).
   Finally, display the destination string.

   Input- Ganesh Gawali
   Output- gANESH gAWALI

   Input- INDIA is MY COUNTRY
   Output- india IS my country
 
*/ 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;


void Copy_ToggleCase(char *src, char *dest)
{
	while(*src !='\0')
	{
		if((*src>='A') &&(*src<='Z'))
		{
		  *dest=*src+32;	
		}
		else if((*src>='a') &&(*src<='z'))
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

  Copy_ToggleCase(Arr,Brr);

  cout<<"String After Copy:"<<Brr<<endl;

  return 0;

}



