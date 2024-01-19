/*
write a program to find area of ractangle
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b;
    float area;
    printf("\n Enter the l : ");
    scanf("%d",&l);
    printf("\n Enter the b : ");
    scanf("%d",&b);
    area = l*b;
    printf("\narea of ractangle : %f",area);
    getch();
    return 0;
}
/*
OUTPUT :

 Enter the l : 3

 Enter the b : 4

area of ractangle : 12.000000
--------------------------------
Process exited after 4.633 seconds with return value 0
Press any key to continue . . .
*/
