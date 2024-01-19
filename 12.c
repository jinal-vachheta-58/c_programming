/*
Q3.Write a program to check if any number is two digit or not
*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    (x>9 && x<100)?printf("%d is Two digit",x):printf("%d is not two digit",x);
}
/*
OUTPUT:
Enter a number: 5
5 is not two digit
--------------------------------
Process exited after 2.497 seconds with return value 18
Press any key to continue . . .
*/
