/*
addition and substraction of array matrix
*/
#include <stdio.h>

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the elements of second matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &second[c][d]);

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    printf("Sum of entered matrices:-\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            printf("%d\t", sum[c][d]);

        printf("\n");
    }
    printf("\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sum[c][d] = first[c][d] - second[c][d];

    printf("Difference between entered matrices:-\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            printf("%d\t", sum[c][d]);

        printf("\n");
    }
    return 0;
}
/*
OUTPUT:
Enter the number of rows and columns of matrix
3
3
Enter the elements of first matrix
1
2
3
4
5
6
7
8
9
Enter the elements of second matrix
9
8
7
6
5
5
4
3
3
Sum of entered matrices:-
10      10      10
10      10      11
11      11      12

Difference between entered matrices:-
-8      -6      -4
-2      0       1
3       5       6
--------------------------------
Process exited after 18.1 seconds with return value 0
Press any key to continue . . .
*/
