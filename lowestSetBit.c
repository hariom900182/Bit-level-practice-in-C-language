/* Write a C program to get lowest set bit of a number. */
#include <stdio.h>
void main()
{
    int value, i, size;
    int bitVal, result;
    i = -1;
    printf("Enter value: ");
    scanf("%d", &value);
    size = sizeof(int) * 8;

    while (size >= 0)
    {
        i++;
        if (value & 1)
        {
            result = i;
            break;
        }
        // printf("size = %d, value = %d, AND = %d\n", size, value, (value & 1));
        value = value >> 1;

        size--;
    }
    printf("Lowest set bit index is: %d\n", result);
}