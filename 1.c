/*Write an algorithm and draw a flowchart that will read the two sides of rectangle and calculate its area and perimeter.*/

#include<stdio.h>
void main()
{
	int a,b;
	printf("Araya virgul koyarak koseleri girin.");
	scanf("%d,%d",&a,&b);
	if(a==b)	printf("Lutfen farklý koseler girin");
	else
	{	printf("Alani: %d \n",a*b);
		printf("Cevresi: %d",(a+b)*2);
	}
}
