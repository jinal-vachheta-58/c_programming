/*
delete an element from array
*/
#include <stdio.h>

int main()
{
    int array[100], position, c, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);

    if (position >= n + 1)
        printf("Deletion not possible.\n");
    else
    {
        for (c = position - 1; c < n - 1; c++)
            array[c] = array[c + 1];

        printf("Resultant array is\n");

        for (c = 0; c < n - 1; c++)
            printf("%d\n", array[c]);
    }

    return 0;
}
/*
OUTPUT :
Enter number of elements in array
8
Enter 8 elements
1
3
6
8
0
2
4
7
Enter the location where you wish to delete element
9
Deletion not possible.

--------------------------------
Process exited after 13.66 seconds with return value 0
Press any key to continue . . .
*/
