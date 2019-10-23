//non-linear curve fitting
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 100
int main()
{
	int n;
	float x[MAX],y[MAX],sx=0,sy=0,sx2=0,sxy=0,a,b,r;
	printf("Enter the number of points:\n");
	scanf("%d",&n);
	printf("Enter the values of x:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	 
	printf("Enter the values of  y:\n");
	 	for(int i=0;i<n;i++)
	 	{
	     	scanf("%f",&y[i]);	
	 	}
	     
	for(int i=0;i<=n-1;i++)
	{
		sx+=x[i];
		sy+= log(y[i]);
		sxy+=x[i]*log(y[i]);
		sx2+=x[i]*x[i];
	}
	b=((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
	r=(sy/n)-((b*sx)/n);
	a=exp(r);
	printf("\nThe required equations is:\n");
	printf("y=%f * e^ %f * x",a,b);
	return 0;
}
