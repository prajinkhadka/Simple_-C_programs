#include <stdio.h>
#include <string.h>

struct student
{
     int pages;
     char name[30];
     float price;
};

int main()
{
     int i;
     struct student record1;
        struct student *ptr;
      ptr = &record1;
     for(i =0; i <5; i++){
        scanf("%d", &ptr->pages);
        scanf("%s", &ptr->name);
        scanf("%f", &ptr->price);
     }

          for(i=0; i<5; i++){

         printf("  NO. of Pages is: %d \n", ptr->pages);
         printf("  Name of book is: %s \n", ptr->name);
         printf("  price  is: %f \n\n", ptr->price);
          }
     return 0;
}
