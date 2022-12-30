 /*Design an algorithm with a natural number, n, as its input which calculates the following formula and writes the result in the standard output: S = ½ + ¼ + … +1/n.*/

#include<stdio.h>
void main()
{
	int n;
	double a=0;
	printf("2'nin kati bir sayi girin.");
	scanf("%d",&n);
	if(n%2!=0)
		printf("Lutfen 2'nin kati bir sayi giriniz");	
	else
	{	
		while(n>0)
		{
			a+=10000000000/n;
			n-=2;
		}
		printf("%.8lf \n",a/10000000000);
	}
}
