
   #include<stdio.h>

union Student
{

char name[100];
int marks;
int roll;

};

int main()
{
    int i;

  union Student Emp;

printf("\n\tEnter Student Name : ");
scanf("%s",&Emp.name);
printf("\n\tEnter Student marks : ");
scanf("%d",&Emp.marks);
printf("\n\tEnter Student Roll NO: ");
scanf("%d",&Emp.roll);
printf("marks = %d , roll no = %d", Emp.marks, Emp.roll);


}


