/*
write a program to find average of three subjects
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,marks=0,total = 0;
    float avg;
    while(i<=3)
    {
        printf("Enter marks of subject %d :",i);
        scanf("%d",&marks);
        total = total + marks;
        i++;
        avg = total/3;
    }

    printf("\n\n total of three subject : %d",total);
    printf("\n\n average of three subject : %f",avg);
    getch();
    return 0;
}
/*
OUTPUT :
Enter marks of subject 1 :23
Enter marks of subject 2 :45
Enter marks of subject 3 :67
 total of three subject : 135
 average of three subject : 45.000000
--------------------------------
Process exited after 8.2 seconds with return value 0
Press any key to continue . . .
*/

