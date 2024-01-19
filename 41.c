/*Sort name in alphabetically
*/
#include <stdio.h>
#include <string.h>

int main()
{

    char name[10][8], tname[10][8], temp[8];
    int i, j, n;

    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter %d names \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(tname[i], name[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\n-------------------------------\n");
    printf("Input Namest\tSorted names\n");
    printf("---------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%s\n", tname[i], name[i]);

    }
    printf("----------------------------------\n");
    return 0;

}
/*
OUTPUT :
Enter the value of n
5
Enter 5 names
jinal
piku
kishu
sujal
dev

-------------------------------
Input Namest    Sorted names
---------------------------------
jinal           dev
piku            jinal
kishu           kishu
sujal           piku
dev             sujal
----------------------------------

--------------------------------
Process exited after 31.88 seconds with return value 0
Press any key to continue . . .
*/
