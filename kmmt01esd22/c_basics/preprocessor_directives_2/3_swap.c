/*3)define a macro to generate swapping function for int, float , double and character datatypes, as a generic function using macros.*/

#include<stdio.h>
#define genswap(dt,fun)  dt fun(dt *a,dt *b)\
{\
	dt c;\
	c=*a;\
	*a=*b;\
	*b=c;\
}
	genswap(int,swapi)
	genswap(float,swapf)
	genswap(double,swapd)
	genswap(char,swapc)
int main()
{
	int a,b;
	float c,d;
	double e,f;
	char g,h;
	printf("enter integer values\n");
	scanf("%d%d",&a,&b);
	printf("enter float values\n");
	scanf("%f%f",&c,&d);
	printf("enter double values\n");
	scanf("%lf%lf",&e,&f);
getchar();
	printf("enter char values\n");
	scanf("%c ",&g);
	scanf("%c",&h);
	int *A=&a,*B=&b;
	float *C=&c,*D=&d;
	double *E=&e,*F=&f;
	char *G=&g,*H=&h;
	swapi(A,B);
	printf("a::%d b::%d\n",a,b);
	swapf(C,D);
	printf("C::%f d::%f\n",c,d);
	swapd(E,F);
	printf("e::%lf f::%lf\n",e,f);
	swapc(G,H);
	printf("g::%c h::%c\n",g,h);
}



