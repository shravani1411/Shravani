/*5) Read an integer and print it back using function pointers for printf and scanf.

  printf declaration to use : int printf(char * , ...);
  scanf declaration to use : int scanf(char *, ...); */


int scanf(char * ,...);
int printf(char * ,...);
int main()
{
	int (*p[]) (char * ,...)={printf,scanf};
	int a;
	p[0]("Enter a value:\n");
	p[1]("%d",&a);
	p[0]("a value is %d\n",a);
}

