/*Draw a flow chart to swap first and last digits of a number.*/

#include<stdio.h>
#include<math.h>
void main()
{
	int b,d,c=0;
	float a,n;
	scanf("%f",&n);
	a=n;
	while(a>=1)
	{	a/=10;
		c++;
	}
	c--,	b=a*pow(10,c),	n-=b*10,	c++,	b*=10;
	b+=a*10;
	
	printf("b=%d, c=%d \n",b,c);
	printf("a=%f, n=%f",a,n);
}
