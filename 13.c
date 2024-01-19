/*Q7.Write a program to swaping varible using third varible.
*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore\nA = %d\nB = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter\nA = %d\nB = %d", a, b);
}
/*
OUTPUT :
Enter two numbers: 5
9

Before
A = 5
B = 9

After
A = 9
B = 5
--------------------------------
Process exited after 3.711 seconds with return value 18
Press any key to continue . . .
*/
