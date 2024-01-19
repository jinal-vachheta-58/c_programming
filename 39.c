/*Search an element In the array
*/
#include<stdio.h>

int main()
{
    int a[30], ele, num, i;

    printf("\nEnter no of elements :");
    scanf("%d", &num);

    printf("\nEnter the values :");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    //Read the element to be searched
    printf("\nEnter the elements to be searched :");
    scanf("%d", &ele);

    //Search starts from the zeroth location
    i = 0;
    while (i < num && ele != a[i])
    {
        i++;
    }
    //If i < num then Match found
    if (i < num)
    {
        printf("Number found at the location = %d", i + 1);
    }
    else
    {
        printf("Number not found");
    }

    return (0);
}
/*
OUTPUT :
Enter no of elements :5

Enter the values :1
2
3
4
5

Enter the elements to be searched :4
Number found at the location = 4
--------------------------------
Process exited after 46.15 seconds with return value 0
Press any key to continue . . .
*/
