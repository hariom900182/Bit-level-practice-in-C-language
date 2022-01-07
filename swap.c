/* Write a C program to swap two numbers using bitwise operator. */
#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\n-----After Swap-----\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
}