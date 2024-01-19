/*
magic matrix
*/
#include<stdio.h>

int main()
{
    int i, j = 1, l, n;
    int mm[50][50], x, y, z;
    int c = 0;

    label:
    printf("Enter the Order of Magic Matrix(Odd) : ");
    scanf("%d", &n);
    printf("\n");
    if (n % 2 == 0)
    {
        printf("Enter Odd Numbers Only\n\n");
        goto label;
    }

    //find the middle column
    l = (n + 1) / 2;

    //set all the elements to be used to 0
    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            mm[x][y] = NULL;
        }
    }

    for (i = 1; i <= (n * n); i++)
    {
        if (mm[j][l] == NULL)
        {
            mm[j][l] = i;
        }
        else
        {
            j = j + 2;
            l--;
            if (j == n + 2)
                j = 2;
            if (l == 0)
                l = n;
            if (j == 0)
                j = n;
            if (l == n + 1)
                l = 1;
            mm[j][l] = i;
        }
        j--;
        l++;
        if (j == 0)
            j = n;
        if (l == n + 1)
            l = 1;
    }

    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            z = mm[x][y];
            while (z > 0)
            {
                z = z / 10;
                c++;
            }
            if (c == 1)
                printf(" 0%d", mm[x][y]);
            else
                printf(" %d", mm[x][y]);
            if (y % n == 0)
                printf("\n\n");
            c = 0;
        }
    }
    return 0;
}
/*
OUTPUT :
Enter the Order of Magic Matrix(Odd) : 9

 47 58 69 80 01 12 23 34 45

 57 68 79 09 11 22 33 44 46

 67 78 08 10 21 32 43 54 56

 77 07 18 20 31 42 53 55 66

 06 17 19 30 41 52 63 65 76

 16 27 29 40 51 62 64 75 05

 26 28 39 50 61 72 74 04 15

 36 38 49 60 71 73 03 14 25

 37 48 59 70 81 02 13 24 35


--------------------------------
Process exited after 13.48 seconds with return value 0
Press any key to continue . . .
*/
