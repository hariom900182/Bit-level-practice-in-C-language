/* Write a C program to count total zeros and ones in a binary number. */
#include <stdio.h>

void main()
{
    int value, zeros, ones, i;
    zeros = 0;
    ones = 0;
    printf("Enter value: ");
    scanf("%d", &value);
    for (i = 0; i < (sizeof(int) * 8); i++)
    {
        if (value & (1 << i))
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }
    printf("\n Total ones= %d, Total zeros= %d\n", ones, zeros);
}