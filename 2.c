/*Draw a flowchart to find all the roots of a quadratic equation ax2+bx+c=0.*/

#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,e,x;
	printf("Sirasiyla a, b ve c'yi araya virgul koyarak girin. \n");
	scanf("%d,%d,%d",&a,&b,&c);
{	
	d=sqrt(b*b-4*a*c)/2*a, 		e=b/2*a;
	if(b*b-4*a*c<0)		printf("Reel koku yoktur");
	if(b*b-4*a*c<0)		break;	
	printf("1.Kok: %f",e-d);
	printf("\n2.Kok: %f",e+d);
	printf("\n %d \n %d \n %d \n %d \n %f \n %f",a,b,c,d,e,x);
}
}
