#include<stdio.h>
#include<string.h>
struct stud
{
    int salary;
     char name[50];
     char add[50];
}s[100];
int main()
{
     struct stud t;
     int i=0,j=0,n;
     printf("/*How many student records you want to enter?*/");
     printf("\n\nEnter Limit : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("\\nEnter Student-%d Details",i+1);
          printf("\n--------------------------\n");
          printf("Enter Name     : ");
          scanf("%s",s[i].name);
          printf("Address        : ");
          scanf("%s",s[i].add);
          printf("Enter salary    :");
          scanf("%d", &s[i].salary);
     }

     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(strcmp(s[i].name,s[j].name)>0)
               {
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
               }
          }
     }
     printf("\n\tData after rearrangement");
     printf("\n-----------------------------------\n");
     printf("Student Name\tAddress\n");
     printf("--------------------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("\n%-10s\t%3s\t %d \n",s[i].name,s[i].add, s[i].salary);
     }
     return 0;
}
