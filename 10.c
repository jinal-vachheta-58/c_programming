/*
find whether given year is leap year or not
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if((year % 4) == 0)
    {
        printf("\n this year is leap year \n");
    }
    else
    {
        printf("\n this year is non-leap year \n");
    }
    return 0;
}
/*
Enter the year : 2028

 this year is leap year

--------------------------------
Process exited after 9.394 seconds with return value 0
Press any key to continue . . .
*/
