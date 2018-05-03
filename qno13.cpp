   #include<stdio.h>

struct Student
{

char Name[25];
int marks;
char grade;

};

int main()
{
    int i;
    struct Student Emp[4];

    for(i=0;i<4;i++)
{

printf("\nEnter details of %d Student",i+1);
printf("\n\tEnter Student Name : ");
scanf("%s",&Emp[i].Name);
printf("\n\tEnter Student marks : ");
scanf("%d",&Emp[i].marks);
}
for(i=0;i<4;i++){
   if(Emp[i].marks >= 150){
    Emp[i].grade = 'A';
   }
    else if(Emp[i].marks <= 100){
    Emp[i].grade = 'C';
   }
else if(Emp[i].marks >= 100 && Emp[i].marks < 150 ){
    Emp[i].grade = 'B';
   }
}

for(i=0;i<4;i++){
    printf("%s \t %d \t %c \t ",Emp[i].Name,Emp[i].marks,Emp[i].grade );
    printf("\n");
    }
    printf("\n");


}

