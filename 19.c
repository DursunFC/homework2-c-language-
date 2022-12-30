/*Draw a flow chart to print multiplication table of any number.*/

#include<stdio.h>
void main()
{
	int a,b,e;
	scanf("%d",&a);
	for(b=1;b<=10;b++)
	{	e=a*b;
		printf("%d kere %d esittir: %d \n",b,a,e);
	}
}
