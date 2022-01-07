/* Write a C program to flip bits of a binary number using bitwise operator. */
#include <stdio.h>

void main()
{
    int value, flipedNumber;
    printf("Enter value: ");
    scanf("%d", &value);
    flipedNumber = ~value;
    printf("Leading zeros are %d\n", flipedNumber);
}