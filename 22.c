/*
determinant of 3*3 matrix
*/

#include<stdio.h>

int main()
{

    int a[3][3], i, j;

    long determinant;

    printf("Enter the 9 elements of matrix :\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("\nThe matrix is\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }

    determinant = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))
                  - a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2])
                  + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

    printf("\nDeterminant of 3X3 matrix: %ld", determinant);

    return 0;
}
/*
OUTPUT :
Enter the 9 elements of matrix :
3
6
9
2
3
6
7
8
9

The matrix is

3       6       9
2       3       6
7       8       9
Determinant of 3X3 matrix: 36
--------------------------------
Process exited after 13.82 seconds with return value 0
Press any key to continue . . .
*/
