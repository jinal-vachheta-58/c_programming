/*Print alternate element of an array
*/
#include <stdio.h>

/*
 * C Program to Print the Alternate Elements in an Array
 */

int main()
{

    int array[10];
    int i, j, temp;

    printf("Enter 10 elements of an array \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Alternate elements of a given array \n");

    for (i = 0; i < 10; i += 2)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
/*
OUTPUT :
Enter 10 elements of an array
3
6
8
0
2
5
7
2
4
6
Alternate elements of a given array
3
8
2
7
4
--------------------------------
Process exited after 9.456 seconds with return value 0
Press any key to continue . . .
*/
