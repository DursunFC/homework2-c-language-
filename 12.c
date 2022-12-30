/*Write an algorithm and draw a flowchart to count and print all numbers from LOW to HIGH by steps of STEP.*/

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Yuksek sayiyi girin: ");
	scanf("%d",&a);
	printf("Dusuk sayiyi girin: ");
	scanf("%d",&b);
	printf("Adim sayisini girin: ");
	scanf("%d",&c);
	for(b;b<=a;b+=c)
		printf("%d \n",b);
}
