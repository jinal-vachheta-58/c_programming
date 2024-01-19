/*Square matrix is symmetric or not
*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[10][10], b[10][10], n, temp;
    printf("\nEnter the dimensions of matrix:: ");
    scanf("%d", &n);
    printf("\nEnter the elements of matrix::\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\nOriginal Matrix is:: ");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", a[i][j]);
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }

    printf("\nTranspose Matrix is:: ");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", b[i][j]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                printf("\nMatrix is not symmetric  :(\n");
                exit(0);
            }
        }
    }
    printf("\nMatrix is symmetric  :)\n");
    return 0;
}
/*
OUTPUT :
Enter the dimensions of matrix:: 3
Enter the elements of matrix::
2
4
6
7
8
3
4
6
7

Original Matrix is::
        2       4       6
        7       8       3
        4       6       7
Transpose Matrix is::
        2       7       4
        4       8       6
        6       3       7
Matrix is not symmetric  :(

--------------------------------
Process exited after 10.89 seconds with return value 0
Press any key to continue . . .
*/
