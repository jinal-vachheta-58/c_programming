/*
write a program to find area of square
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float area;
    printf("\n Enter the a : ");
    scanf("%d",&a);
    area = a*a;
    printf("\narea of square : %f",area);
    getch();
    return 0;
}
/*
OUTPUT :
Enter the a : 55
area of square : 3025.000000
*/
