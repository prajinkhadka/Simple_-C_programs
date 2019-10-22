#include<stdio.h>
#include<math.h>


float f(float);

int main()
{
	float x,a,b,m,err=0.00001;
	printf("\nEnter two initial values\t");
	scanf("%f%f",&a,&b);
	printf("The guess values of a and b is %f and %f\n",a,b);
	printf("Guess a      guess b            x            f(a)           f(b)               f(x)\n");
	if(f(a)*f(b)>0)
	printf("\nRoot does not lie between %f and %f",a,b);
	else
	{
		do
		{
			x=(a+b)/2;
			printf("%f     %f       %f       %f      %f            %f\n",a,b,x,f(a),f(b),f(x));
			if(f(x)==0)
			{
				break;
			}
			else if(f(a)*f(x)<0)
			b=x;
			else
			a=x;
		}while(fabs(b-a)>=err);
		printf("\nRoot of the equation=%f",x);
		}
		return 0;
	}
	float f(float x)
	{
		return (x*x-x-1);
	}
