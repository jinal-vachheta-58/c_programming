/*
identify matrix or not
*/
#include <stdio.h>

int main()
{
    int a[10][10];
    int i, j, row, column, flag = 1;

    printf("Enter the dimensions of the matrix A : ");
    scanf("%d %d", &row, &column);
    printf("Enter the elements of matrix A \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("MATRIX A is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    //  Check for unit (or identity) matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] != 1 && a[j][i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        printf("It is identity matrix \n");
    else
        printf("It is not a identity matrix \n");
}
/*
OUTPUT :
Enter the dimensions of the matrix A : 2
5
Enter the elements of matrix A
2
3
4
5
6
1
2
7
3
5
MATRIX A is
  2  3  4  5  6
  1  2  7  3  5
It is not a identity matrix

--------------------------------
Process exited after 29.01 seconds with return value 0
Press any key to continue . . .
*/
