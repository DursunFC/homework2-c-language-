/*Write an algorithm and draw a flowchart to print the SUM of numbers from LOW to HIGH.*/

#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
		c=b;
	else
		c=a,a=b;
	b=0;
	for(c;c<=a;c++)
		b+=c;
	printf("%d",b);
}
