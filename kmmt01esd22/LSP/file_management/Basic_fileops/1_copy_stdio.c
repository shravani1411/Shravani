/*1. Write a C program that makes a copy of a file using standard I/O and system calls.  Explain the  Difference between System Call and Standard Library.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *in, *out;

    in = fopen("file.in","r");
    out = fopen("file.out","w");

    while((c = fgetc(in)) != EOF)
        fputc(c,out);

    exit(0);
}

