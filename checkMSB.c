/*
Write a C program to check Most Significant Bit (MSB) of a number is set or not.
*/
#include <stdio.h>
void main()
{
    int value;
    int size;
    int sValue;
    size = sizeof(int) * 8;
    sValue = 1 << (size - 1);
    printf("Enter value: ");
    scanf("%d", &value);
    if (value & sValue)
    {
        printf("MSB is set\n");
    }
    else
    {
        printf("MSB is not set\n");
    }
}