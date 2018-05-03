   #include<stdio.h>

struct Student
{

char Name[25];
int marks;
int roll;
char remarks[100];

};

int main()
{
    int i;
    int n;
    struct Student Emp[100];
    printf("How many tudents");
    scanf("%d", &n);

    for(i=0;i<n+1;i++)
{

printf("\nEnter details of %d Student",i+1);
printf("\n\tEnter Student Name : ");
scanf("%s",&Emp[i].Name);
printf("\n\tEnter Student marks : ");
scanf("%d",&Emp[i].marks);
printf("\n\tEnter Student Roll NO: ");
scanf("%d",&Emp[i].roll);
printf("\n\tEnter Student Remarks: ");
scanf("%s",&Emp[i].remarks);
}

for(i=0;i<n+1;i++){
    printf("%s \t %d \t %d \t %s \t ",Emp[i].Name,Emp[i].marks,Emp[i].roll,Emp[i].remarks );
    printf("\n");
    }



}


