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
void consumer(struct student s1)
{
	s1.per=5.0;
	printf("after changing per in CBV function:\nname=%s\nID=%d\nper=%f\n",s1.name,s1.ID,s1.per);
}

void consumer1(struct student *s1)
{
	s1->per=4.0;
	printf("after changing per in CBR function:\nname=%s\nID=%d\nper=%f\n",s1->name,s1->ID,s1->per);
}

