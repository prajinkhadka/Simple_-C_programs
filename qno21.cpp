#include <stdio.h>
#include <string.h>

struct student
{
            int year;
            char month[20];
            int date;
} record;

int main()
{

            record.year=1957;
            strcpy(record.month, "Feb");
            record.date = 25;


            printf("%s \t %d \t %d", record.month, record.date, record.year);

}
