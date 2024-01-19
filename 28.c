/*
inverse a matrix
*/
#include<stdio.h>

void reduction(float a[][6], int size, int pivot, int col)
{
    int i, j;
    float factor;
    factor = a[pivot][col];

    for (i = 0; i < 2 * size; i++)
    {
        a[pivot][i] /= factor;
    }

    for (i = 0; i < size; i++)
    {
        if (i != pivot)
        {
            factor = a[i][col];
            for (j = 0; j < 2 * size; j++)
            {
                a[i][j] = a[i][j] - a[pivot][j] * factor;
            }
        }
    }
}

int main()
{
    float matrix[3][6];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (j == i + 3)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }

    printf("\nEnter a 3 X 3 Matrix :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        reduction(matrix, 3, i, i);
    }

    printf("\nInvers Matrix");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%8.3f", matrix[i][j + 3]);
        }
    }

    return 0;
}
/*
OUTPUT :
Enter a 3 X 3 Matrix :3
4
5
6
7
8
9
2
3

Invers Matrix
  -0.208   0.083   0.125
  -2.250   1.500  -0.250
   2.125  -1.250   0.125
--------------------------------
Process exited after 6.745 seconds with return value 0
Press any key to continue . . .
*/
