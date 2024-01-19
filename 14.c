/*
set array in assending order
*/

#include <stdio.h>
int main()
{

    int i, j, a, n, number[30];

    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in ascending order are given below \n");

    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }
    return 0;
}
/*
OUTPUT:
Enter the value of N
4
Enter the numbers
5
8
6
3
The numbers arranged in ascending order are given below
3
5
6
8

--------------------------------
Process exited after 9.257 seconds with return value 0
Press any key to continue . . .
*/

