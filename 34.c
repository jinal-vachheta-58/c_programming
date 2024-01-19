/*
norm and trace of matrix
*/
#include <stdio.h>
#include <math.h>

int main()
{
    static int array[10][10];
    int i, j, m, n, sum = 0, sum1 = 0, a = 0, normal;

    printf("Enter the order of the matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter the n coefficients of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            a = array[i][j] * array[i][j];
            sum1 = sum1 + a;
        }
    }
    normal = sqrt((double) sum1);
    printf("The normal of the given matrix is = %d\n", normal);
    for (i = 0; i < m; ++i)
    {
        sum = sum + array[i][i];
    }
    printf("Trace of the matrix is = %d\n", sum);
    return 0;
}
/*
OUTPUT :
Enter the order of the matrix
2
3
Enter the n coefficients of the matrix
4
5
6
7
8
9
The normal of the given matrix is = 16
Trace of the matrix is = 12

--------------------------------
Process exited after 23.75 seconds with return value 0
Press any key to continue . . .
*/
