/*Design an algorithm with a natural number, n, as its input which calculates the following formula and writes the result in the standard output: S = ½ + ¼ + … +1/n.*/

#include<stdio.h>
void main()
{
	int a=2,n;
	printf("2'nin kati bir sayi girin.");
	scanf("%d",&n);
	if(n%2!=0)
		printf("Lutfen 2'nin kati bir sayi giriniz");	
	else
	{	printf("S=");
		n+=1;
		for(a;a<=n;a+=2)
			printf("+1/%d ",a);
	}
}
