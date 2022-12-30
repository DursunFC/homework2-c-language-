/*Draw a flowchart for a program that reads 10 numbers from the user and prints out their sum, and their product.*/

#include<stdio.h>
void main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	a+=b;
	for(c=2;c<10;c++)
	{	scanf("%d",&b);
		a+=b;	}
	printf("%d",a);
}
