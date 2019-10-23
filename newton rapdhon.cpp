#include<stdio.h>
#include<math.h>

#define f(x) x*x-7*x+10
#define g(x) 2*x-7
#define e  0.0001

int main()
{
	int i=0;
	float x0,x1,f0,g0,error;
	printf("*********NEWTON RAPHSON METHOD**********\n");
	printf("Enter initial guess\n");
	scanf("%f",&x0);
	printf("S.No\tx0\t\tx1\t\tf0\t\tg0\t\tError\n");
	do{
		++i;
		f0=f(x0);
		g0=g(x0);
		if(g0==0)
		{
			printf("Guess not valid\n");
			break;
		}
		x1=x0-(f0/g0);
		error=fabs((x1-x0)/x1);
		printf("\n%d\t%f\t%f\t%f\t%f\t%f",i,x0,x1,f0,g0,error);
		x0=x1;
	}while(error>e);
	printf("\nRequired root id :%f",x0);
	return 0;
}
