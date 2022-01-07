/* Write a C program to count trailing zeros in a binary number. */
#include <stdio.h>

void main()
{
    int value, count, i;
    // count = 0;
    i = 0;
    printf("Enter value: ");
    scanf("%d", &value);
    while (!(value & (1 << i)))
    {
        // count++;
        i++;
        if (i >= (sizeof(int) * 8))
            break;
    }
    printf("Trailing zeros are %d\n", i);
}