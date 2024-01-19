/*
print table using loop
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        j = n*i;
        printf("%d * %d = %d \n",n,i,j);
    }
    return 0;
}
/*
OUTPUT:
Enter the number : 7
7 * 0 = 0
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70

--------------------------------
Process exited after 2.495 seconds with return value 0
Press any key to continue . . .
*/
