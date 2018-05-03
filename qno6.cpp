#include<stdio.h>
#include<conio.h>
int power(int a,int b);
int main()
{
int a,b,value;
printf("enter the value of a and b: ");
scanf("%d %d",&a,&b);
value=power(a,b);
printf("the value of a = %d raised to b = %d is %d",a,b,value);
getch();
return 0;
}
int power(int a,int b)
{
int i,value;
value=a;
for(i=1;i<b;i++)
{
value=value*a;
}
return value;
}
