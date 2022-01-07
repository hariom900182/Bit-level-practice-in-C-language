/* Write a C program to flip bits of a binary number using bitwise operator. */
#include <stdio.h>

int highestSetIndex(int value)
{
    int result, i, size;
    size = sizeof(int) * 8;
    i = -1;
    while (size >= 0)
    {
        i++;
        if (value & 1)
        {
            result = i;
        }

        value = value >> 1;

        size--;
    }
    return result;
}

void main()
{
    int value, maxIndex;
    printf("Enter value: ");
    scanf("%d", &value);
    maxIndex = highestSetIndex(value);
    printf("\n");
    while (maxIndex >= 0)
    {
        if ((value & (1 << maxIndex)))
            printf("%d", 1);
        else
            printf("%d", 0);
        maxIndex--;
    }
    printf("\n");
    // printf("%d", maxIndex);
}