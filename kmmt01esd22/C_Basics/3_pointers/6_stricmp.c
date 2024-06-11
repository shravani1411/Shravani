/*6) int stricmp (char s1[], char s2[]);*/
 #include<stdio.h>
   int cmp(char s1[],char s2[]);
   int main()
   {
           char s1[100];
           char s2[100];
           int c;
           printf("enter first strng\n");
           scanf("%99[^\n]s",s1);
          printf("enter second strng\n");
          scanf(" %99[^\n]s",s2);
          c=cmp(s1,s2);
	  printf("%d",c);
  }
  int cmp(char s1[],char s2[])
  {
          int i;
          while(*s1&&*s2)
          {
		if((*s1)>96&&(*s1)<123)
			*s1=(*s1)-32;
		if((*s2)>96&&(*s2)<123)
			*s2=(*s2)-32;
                  if((*s1)<(*s2))
                          return -1;
                  if(*s2<(*s1))
                          return 1;
			s1++;
			s2++;
          }
          if((*s1)==0&&(*s2)==0)
                  return 0;
          if((*s1)==0&&(*s2)!=0)
                  return -1;
          if((*s1)!=0&&(*s2)==0)
                  return 1;
  }
                                            


