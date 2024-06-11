
#include<stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("file.txt","a");
	fprintf(fp,"hello world");
	fclose(fp);
}
