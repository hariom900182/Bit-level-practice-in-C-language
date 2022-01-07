/* Write a C program to count trailing zeros in a binary number. */
#include <stdio.h>

void main()
{
    int value, count, i, size;
    i = 0;
    size = sizeof(int) * 8;
    printf("Enter value: ");
    scanf("%d", &value);
    while (!(value & (1 << (size - (i + 1)))))
    {
        i++;
        if (i >= size)
            break;
    }
    printf("Leading zeros are %d\n", i);
}