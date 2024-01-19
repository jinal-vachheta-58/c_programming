/*
write a program to find area of circle
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{
    int r;
    float area;
    printf("\n Enter the radius : ");
    scanf("%d",&r);
    area = pi *r*r;
    printf("\narea of circle : %f",area);
    getch();
    return 0;
}
/*
OUTPUT :

 Enter the radius : 3

area of circle : 28.260000
--------------------------------
Process exited after 4.804 seconds with return value 0
Press any key to continue . . .
*/
