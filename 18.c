/*
checking matrix is a sparse matrix
*/
#include <stdio.h>

int main()
{
    static int array[10][10];
    int i, j, m, n;
    int counter = 0;

    printf("Enter the order of the matix : ");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficients of the matix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                ++counter;
            }
        }
    }
    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix \n");
    }
    else
    {
        printf("The given matrix is not a sparse matrix \n");
    }

    printf("There are %d number of zeros", counter);
    return 0;
}

/*
OUTPUT :
Enter the order of the matix : 2
3
Enter the co-efficients of the matix
4
5
6
7
7
8
The given matrix is not a sparse matrix
There are 0 number of zeros
--------------------------------
Process exited after 13.24 seconds with return value 0
Press any key to continue . . .
*/
