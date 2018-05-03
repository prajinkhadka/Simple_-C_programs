
   #include<stdio.h>

struct Books
{

char Name[25];
int pages;
int price;


};

int main()
{
    int i;

    struct Books Emp[100];


    for(i=0;i<2;i++)
{

printf("\nEnter details of %d Book",i+1);
printf("\n\tEnter Book Name : ");
scanf("%s",&Emp[i].Name);
printf("\n\tEnter pagess : ");
scanf("%d",&Emp[i].pages);
printf("\n\tEnter price ");
scanf("%d",&Emp[i].price);

}
int highest = Emp[0].price;
for (i=0;i<2;i++) {
if (Emp[i].price>highest);
}
printf("Price Of Highest Book is %d  \n",highest);
}



