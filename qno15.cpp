
   #include<stdio.h>

struct Student
{

char name[100];
int marks;
int roll;

};

int main()
{
    int i;

  struct Student Emp[100];


    for(i=0;i<3;i++)
{
printf("\n\tEnter Student Name : ");
scanf("%s",&Emp[i].name);
printf("\n\tEnter Student marks : ");
scanf("%d",&Emp[i].marks);
printf("\n\tEnter Student Roll NO: ");
scanf("%d",&Emp[i].roll);
}

for(i=0;i<3;i++)
{
if(Emp[i].marks > 50){
printf("Name  is %s and Roll no is %d", Emp[i].name, Emp[i].roll);

  }

}

}


