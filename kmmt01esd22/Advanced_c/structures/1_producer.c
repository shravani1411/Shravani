/*1) Take two layers (two source files, producer.c , consumer.c & one header file layer.h). In producer.c, define a structure variable , create its data and send it to consumer.c, via
1 ) Call by Value
2 ) Call by Reference
in consumer.c , print the data of the structure in a neat format.
in layer.h file create the below structure template.
struct student {
 int ID;
 char name[30];
 float per;
}"*/

#include"1_layer.h"
void consumer(struct student);
void consumer1(struct student *);
int main()
{
	struct student s1;
	printf("enter name & percentage:\n");
	s1.ID=1;
	scanf("%s %f",s1.name,&s1.per);
	consumer(s1);
	printf("after CBV in main:\nID=%d\nname=%s\npercentage=%f\n",s1.ID,s1.name,s1.per);
	consumer1(&s1);
	printf("after CBR in main:\nID=%d\nname=%s\npercentage=%f\n",s1.ID,s1.name,s1.per);
}

