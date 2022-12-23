/*Draw a flowchart to find the sum of the first 50 natural numbers.*/

#include<stdio.h>
void main()
{
	int a=1,b=0;
	for(a;a<51;a++)
		b+=a;
	printf("%d \n",b);
}
