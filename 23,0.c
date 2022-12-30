/*Draw a flow chart to check whether a number is palindrome or not.*/

#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,d=0,c=0;
	scanf("%d",&a);
	b=a;
	while(a>=1)
	{	a/=10;
		c++;
	}
	a=0;
	while(a==d)
	{	if(b<10)	break;
		a=b%10,	c--, d=b/pow(10,c), b-=d*pow(10,c), b/=10;
		printf("%d %d %d %d \n",a,d,c,b);		
	}
		if(a==d)
		printf("Palindromedur.");
	else
		printf("Palindrome degildir.");
}
