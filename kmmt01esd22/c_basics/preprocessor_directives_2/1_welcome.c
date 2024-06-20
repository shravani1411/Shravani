/*1)"1. Need to display different welcome messages depending on the operating system. Define the macro inside the code and compile the following into 3 different executables.
  for WINDOWS : Microsoft Windows Welcomes you
  for Linux : Linux Welcomes you
  for Mac : Mac Welcomes you"*/

#include<stdio.h>
#define v 9
int main()
{
#if(v==1)
	printf("linux welcomes you\n");
#elif(v==2)
	printf("microsoft windows welcomes you\n");
#elif(v==4)
	printf("mac welcomes you\n");
#endif
}

