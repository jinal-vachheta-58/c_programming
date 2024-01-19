/*
convert fehrenheit into celcius
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int f;
    float c;
    printf("\nfehrenheit : ");
    scanf("%d",&f);
    c = (f-32)*5/9;
    printf("celsius : %f ",c);
    
    getch();
    return 0;
}
/*
OUTPUT:
fehrenheit : 69
celsius : 20.000000
--------------------------------
Process exited after 4.96 seconds with return value 0
Press any key to continue . . .
*/
