#include<stdio.h>

int add_sub(int a,int b,int *p,int *q,int *r,int *s)
{
	*p=a+b;
	*q=a-b;
	*r=a*b;
	*s=a/b;
} 

int main()
{
	int a=8,b=4;
	int sum,sub,mul,div;

	add_sub(a,b,&sum,&sub,&mul,&div);

	printf("SUM :%d\n",sum);
	printf("SUB :%d\n",sub);
	printf("MUL :%d\n",mul);
	printf("DIV :%d\n",div);

	return 0;
}