/*
Write a C program to check Least Significant Bit (LSB) of a number is set or not.
*/
#include <stdio.h>
void main()
{
    int value;
    printf("Enter value: ");
    scanf("%d", &value);
    if (value & 1)
    {
        printf("LSB is set\n");
    }
    else
    {
        printf("LSB is not set\n");
    }
}