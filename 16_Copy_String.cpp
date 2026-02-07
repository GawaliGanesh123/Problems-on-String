/* Accept one string from the user as the source string, take another empty string as the destination string, 
   and copy the contents of the source string into the destination string.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Copy_String(char *src, char *dest)
{
	while(*src !='\0')
	{
	  *dest=*src;

	  src++;
	  dest++;
	}
	*dest='\0';
}

int main()
{
   char Arr[20];
   char Brr[20];

   cout<<"Enter a String:"<<endl;
   cin.getline(Arr,20);

   Copy_String(Arr,Brr);

   cout<<"Copied String is:"<<Brr<<endl;

	return 0;

}
