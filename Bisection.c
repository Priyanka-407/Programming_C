#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-4*x-1
int main()
{
	float a,b,c;
	double f0,f1,f2;
	printf(" ENTER THE VALUE OF a :");
	scanf("%f",&a);
	printf("\n ENTER THE VALUE OF b :");
	scanf("%f",&b);
	do
	{
		f0=f(a);
		f1=f(b);
		c=(a*f1-b*f0)/(f1-f0);
		f2=f(c);
		printf("\n %.2f\t %.2f\t %.2f\t %.2lf\t %.2lf\t %.2lf\t",a,b,c,f0,f1,f2);
		if(f0*f2<0)
		b=c;
		else
		a=c;
	}while(fabs(f2)>0.0001);
		printf("\n ROOT OF THE EQUATION : %.3f",c);
	return 0;
}
	
