/*
insert an element in an array
*/

#include <stdio.h>

int main()
{
    int array[100], position, c, n, value;

    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    printf("Enter the location where you wish to insert an element : ");
    scanf("%d", &position);

    printf("Enter the value to insert : ");
    scanf("%d", &value);

    for (c = n - 1; c >= position - 1; c--)
    {
        array[c + 1] = array[c];
    }

    array[position - 1] = value;

    printf("Resultant array is\t");

    for (c = 0; c <= n; c++)
    {
        printf("%d\t", array[c]);
    }

    return 0;
}
/*
OUTPUT :
Enter number of elements in array : 5
Enter 5 elements : 2
4
7
9
4
Enter the location where you wish to insert an element : 3
Enter the value to insert : 6
Resultant array is      2       4       6       7       9       4
--------------------------------
Process exited after 14.24 seconds with return value 0
Press any key to continue . . .
*/
