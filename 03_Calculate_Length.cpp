// Write a program to Calculate the length of the string(Without using Built-in method).


 
#include<iostream>
using namespace std;

void Strlenx(char *str)
{
  int iCnt=0;

  while(*str !='\0')
  {
    iCnt++;
    str++;
  }

  cout<<"Length of string is:"<<iCnt<<endl;
}

int main()
{
  char Arr[20];

  cout<<"Enter a string:"<<endl;
  cin.getline(Arr,20);

  Strlenx(Arr);

  return 0;

}
