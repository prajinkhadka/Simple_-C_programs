#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (1+cos(x))/3
#define e 0.0001
int main()
{
int i=0;
float x0,x1,error;
printf("**********FIXED POINT ITERATION METHOD**********\n");
printf("Enter initial guess\n");
scanf("%f",&x0);
printf("S.No\tx0\t\tx1\t\tError\n");
do
{
++i;
x1=f(x0);
error=fabs((x1-x0)/x1);
printf("\n%d\t%f\t%f\t%f",i,x0,x1,error);
x0=x1;
}
while(error>e);
printf("\nRequired root is :%f",x0);
getch();
}
