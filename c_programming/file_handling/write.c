
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("file.txt","w");
	fprintf(fp,"hello world");
	fclose(fp);
}
