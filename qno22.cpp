
#include <stdio.h>
#include <string.h>

struct student
{
            int year;
            int month;
            int date;
} record;

int main()
{
            printf("Enter your Birth year , month and date");
            scanf("%d %d %d", &record.year, &record.month, &record.date);



            printf("%d \t %d \t %d", record.month, record.date, record.year);

}
