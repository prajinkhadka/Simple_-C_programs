#include<stdio.h>

float product(int a,float b)
{
float c;
c=a*b;
return c;
}
main()
{
int x;
float y;
printf("\nEnter an integer :\t");
scanf("%d" ,&x);
printf("Enter a float :\t\t");
scanf("%f",&y);
printf("product :\t\t%.2f\n\n",product(x,y));
}
