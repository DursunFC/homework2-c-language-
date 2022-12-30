/*Draw a flow chart to swap first and last digits of a number.*/

#include<stdio.h>
#include<math.h>
void main()
{
	int b,d,c=0;
	float a,n;
	scanf("%f",&n);
	a=n,b=n;
	while(a>=1)
	{	a/=10;
		c++;
	}
	d=a*10,	c--,	n-=d*pow(10,c)+b%10,	n+=b%10*pow(10,c)+d;
	printf("%f",n);
}
