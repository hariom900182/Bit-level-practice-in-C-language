/* Write a C program to check whether a number is even or odd using bitwise operator. */
#include <stdio.h>

void main()
{
    int a;
    printf("Enter Value: ");
    scanf("%d", &a);
    if (a & 1)
        printf("ODD Number\n");
    else
        printf("EVEN Number\n");
}