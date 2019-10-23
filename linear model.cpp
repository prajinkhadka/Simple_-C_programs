//linear curve ftting
#include<stdio.h>
#include<math.h>

int main()
{
	int i,n;
	float x[100],y[100],a,b;
	float sumx=0,sumxx=0,sumy=0,sumxy=0;
	printf("\nEnter the number of points to  fitted\n");
	scanf("%d",&n);
	printf("\nEnter the points and values x and y\n");
	for(i=0;i<n;i++)
	scanf("%f%f",&x[i],&y[i]);
	for(i=0;i<n;i++)
	{
		sumxx=sumxx+x[i]*x[i];
		sumx=sumx+x[i];
		sumxy=sumxy+x[i]*y[i];
		sumy=sumy+y[i];
	}
	b=((n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx));
	a=(sumy-b*sumx)/n;
	printf("The required equation is %.2f + %.2fx",a,b);
	return 0;
}
