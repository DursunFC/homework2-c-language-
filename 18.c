/*Design an algorithm to convert a decimal number, n, to binary format?*/

#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c=7;
	scanf("%d",&a);
	for(c;c>=0;c--)
	{	b=a/pow(2,c);
		if(b!=0)
			a-=pow(2,c);
		printf("%d",b);
	}
}
