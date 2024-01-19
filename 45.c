/*Sum of each row in array
*/
#include <stdio.h>

int main()
{
    int m, n, c, d, a[10][10], sum = 0;

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of  matrix\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &a[c][d]);
        }
    }

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum = sum + a[c][d];
        }
        printf("Sum of %d row : %d\n", c + 1, sum);
        sum = 0;
    }
    return 0;
}/*
OUTPUT :
Enter the number of rows and columns of matrix
3
3
Enter the elements of  matrix
4
6
8
8
5
2
3
6
9
Sum of 1 row : 18
Sum of 2 row : 15
Sum of 3 row : 18
--------------------------------
Process exited after 17.87 seconds with return value 0
Press any key to continue . . .
*/
