/*
write a program to find area of triangle
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int base,height,area;
    printf("\n Enter the base : ");
    scanf("%d",&base);
    printf("\n Enter the height : ");
    scanf("%d",&height);
    area = (base * height)/2;
    printf("\narea of triangle : %d",area);
    getch();
    return 0;
}
/*
OUTPUT :
 Enter the base : 4

 Enter the height : 7

area of triangle : 14
--------------------------------
Process exited after 11.15 seconds with return value 0
Press any key to continue . . .
*/
