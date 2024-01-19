/*Reverse an array
*/
#include <stdio.h>

int main()
{
    int n, c, d, a[100], b[100];

    printf("Enter the number of elements in array\n");
    scanf("%d", &n);


    for (c = 0; c < n; c++)
        scanf("%d", &a[c]);

    /*
     * Copying elements into array b starting from end of array a
     */

    for (c = n - 1, d = 0; c >= 0; c--, d++)
        b[d] = a[c];

    /*
     * Copying reversed array into original.
     * Here we are modifying original array, this is optional.
     */

    for (c = 0; c < n; c++)
        a[c] = b[c];

    printf("Reverse array is\n");

    for (c = 0; c < n; c++)
        printf("%d\n", a[c]);

    return 0;
}
/*
OUTPUT :
Enter the number of elements in array
5
1
8
3
5
2
Reverse array is
2
5
3
8
1

--------------------------------
Process exited after 9.621 seconds with return value 0
Press any key to continue . . .
*/
