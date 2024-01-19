/*
find largest and smallest number in an array
*/

#include<stdio.h>

int main()
{
    int a[50], size, i, big, small;

    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    printf("\nEnter %d elements in to the array: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    big = a[0];
    for (i = 1; i < size; i++)
    {
        if (big < a[i])
        {
            big = a[i];
        }
    }
    printf("Largest element: %d", big);

    small = a[0];
    for (i = 1; i < size; i++)
    {
        if (small > a[i])
        {
            small = a[i];
        }
    }
    printf("\nSmallest element: %d", small);

    return 0;
}
/*
OUTPUT :
Enter the size of the array: 5

Enter 5 elements in to the array: 2
3
6
1
3
Largest element: 6
Smallest element: 1
--------------------------------
Process exited after 11.65 seconds with return value 0
Press any key to continue . . .
*/
