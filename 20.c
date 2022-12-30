/*Draw a flow chart to count number of digits in a number.*/

#include<stdio.h>
void main()
{
	float a,c=0;
	scanf("%f",&a);
	while(a>=1)
	{	a/=10;
		c++;
	}
	printf("%.0f",c);
}
