/*Write an algorithm and draw a flowchart to print all numbers between LOW and HIGH that are divisible by NUMBER.*/

#include <stdio.h>
void main()
{
 	int a,b,c,d;
 	printf("Bolecek sayiyi girin: ");
	scanf("%d",&d);
	printf("Araligi girin: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)
		c=b;
	else
		c=a,a=b;
	for(c;c<=a;c++)
	{	b=c%d;
		if(b==0)
			printf("%d \n",c);
	}	
}
