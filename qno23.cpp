#include<stdio.h>
#include<conio.h>
struct dt
{
  int dd;
  int mm;
  int yy;
};
typedef dt date;
int main()
{
  date dob,c_date,today;

  printf("Enter Date of birth :\n");
  printf("Day    :");scanf("%d",&dob.dd);
  printf("Month :");scanf("%d",&dob.mm);
  printf("Year   :");scanf("%d",&dob.yy);
  printf("\n");
  printf("Enter Current date :\n");
  printf("Day    :");scanf("%d",&c_date.dd);
  printf("Month  :");scanf("%d",&c_date.mm);
  printf("Year   :");scanf("%d",&c_date.yy);
  /* Diff of two date */
  if(c_date.dd>=dob.dd)
    today.dd = c_date.dd-dob.dd;
  else
  {
      c_date.dd+=30;
      c_date.mm-=1;
      today.dd = c_date.dd-dob.dd;
   }
   if(c_date.mm>=dob.mm)
    today.mm = c_date.mm-dob.mm;
  else
   {
      c_date.mm+=12;
      c_date.yy-=1;
      today.mm = c_date.dd-dob.mm;
   }
 today.yy = c_date.yy-dob.yy;
 printf("Current date is : ");
 printf("%2d-%2d-%4d\n\n",c_date.dd,c_date.mm,c_date.yy);
 printf("Date of Birth   : ");
 printf("%2d-%2d-%4d\n\n",dob.dd,dob.mm,dob.yy);
 printf("Today your age: \n");
 printf("Day    : %d\n",today.dd);
 printf("Month  : %d\n",today.mm);
 printf("Year   : %d\n",today.yy);
getch();
}
