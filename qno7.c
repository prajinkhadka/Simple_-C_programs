#include<stdio.h>
int fact(int);
void main()
{
        int n,t;

        printf("Enter any Number : ");
        scanf("%d",& n);
        t=fact(n);
        printf("Factorial of %d is : %d",n,t);
        getch();
}
        int fact(int a)
      {
               int p;
               if(a==1)
                        return(1);
               else
               {
                        p=a*fact(a-1);
                        return(p);
               }
      }
