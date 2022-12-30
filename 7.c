/*Write an algorithm and draw a flowchart to print the square of all numbers from 1 to 10.*/

#include<stdio.h>
void main()
{
	int a,c;
	for(c=1;c<11;c++)
	{	a=c;
		a*=a;
		printf("%d \n",a);
	}
}
