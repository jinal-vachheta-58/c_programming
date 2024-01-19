/*Sum of diagonal elements of an array
 */
#include<stdio.h>

int main()
{
    //declaring a 2d array
    int a[10][10];
    //declaring variables
    int i, j, n, m, sum = 0;

    printf("enter rows and columns of the matrix:");
    scanf("%d%d", &m, &n);

    printf("enter the values in the matirx:");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            // finding sum of diagonal elements
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        sum = sum + a[i][i];
    }

    printf("the sum of diagonal elements is:%d", sum);
    return 0;
}
/*
OUTPUT :
enter rows and columns of the matrix:3
3
enter the values in the matirx:3
5
5
6
9
8
5
2
1
the sum of diagonal elements is:13
--------------------------------
Process exited after 180.8 seconds with return value 0
Press any key to continue . . .
*/
