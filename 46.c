/*Bubble sort
*/
#include <stdio.h>

int main()
{
    int array[100], n, c, d, swap;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    for (c = 0; c < (n - 1); c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            // For decreasing order use <
            if (array[d] > array[d + 1])
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (c = 0; c < n; c++)
    {
        printf("%d\n", array[c]);
    }
    return 0;
}
/*
OUTPUT :
Enter number of elements
4
Enter 4 integers
8
5
2
36
Sorted list in ascending order:
2
5
8
36

--------------------------------
Process exited after 8.388 seconds with return value 0
Press any key to continue . . .
*/
