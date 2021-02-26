#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d=",a);
	int F, f;
	F=a/50;
	a=a%50;
	f=a/5;
	a=a%5;
	printf("50*%d+5*%d+1*%d\n",F,f,a);
}
