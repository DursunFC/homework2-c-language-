/*Draw a flowchart to find the sum of series 1+11+111+1111+...n terms.*/

#include<stdio.h>
#include<math.h>
void main()
{
	int c=0,sum=0,a,n,e;
	scanf("%d",&n);
	for(;c<n;c++)
	{	for(a=c;a>=0;a--)
			e+=pow(10,a);
		//printf("%d\n",e);
		sum+=e,	e=0;
	}
	//printf("%d",sum);
}
