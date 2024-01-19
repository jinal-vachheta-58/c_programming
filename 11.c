/*
Write a program to check if given alphabet is vowel or not using switch function.
*/
#include <stdio.h>
int main()
{
    char a;
    printf("Enter any alphabet: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("it's Vowel");
        break;
    default:
        printf("It's not vowel");
    }
}
/*
OUTPUT:
Enter any alphabet: r
It's not vowel
--------------------------------
Process exited after 3.166 seconds with return value 14
Press any key to continue . . .
*/
