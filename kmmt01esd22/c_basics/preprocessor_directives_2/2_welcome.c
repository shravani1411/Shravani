/*)Need to display different welcome messages depending on the operating system. Define the macro from gcc command. Implement a warning incase the macro is not defined.
  for WINDOWS : Microsoft Windows Welcomes you
  for Linux : Linux Welcomes you
  for Mac : Mac Welcomes you"*/

#include<stdio.h> 
int main()
{
#ifndef v
	#error MACRO IS NOT INTIALIZED
#endif
#if(v==1)
	printf("linux welcomes you\n");
#elif(v==2)
	printf("microsoft windows welcomes you\n");
#elif(v==4)
	printf("mac welcomes you\n");
#else
	printf("1.linux\n2.windows\n3.mac\n");
#endif
}


