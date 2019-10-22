#include<stdio.h>
#include<math.h>

#define f(x) (a3*x*x*x+a2*x*x+a1*x+a0)
float a0,a1,a2,a3;

int main()
{
	float x0,x1,x2,fx0,fx1,e,err;
	printf("Enter coefficients a3,a2,a1 and a0\n");
	scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
	printf("ENter two initial guesses and E\n");
	scanf("%f%f%f",&x0,&x1,&e);
	while(1)
	{
		fx0=f(x0);
		fx1=f(x1);
		x2=x1-(fx1*(x1-x0))/(fx1-fx0);
		err=(x2-x1)/x2;
		if(fabs(err)<e)
		{
			printf("Root=%f\n",x2);
			break;
		}
		x0=x1;
		x1=x2;
	}
	return 0;
}
