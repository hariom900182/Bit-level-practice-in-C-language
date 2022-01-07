/* Write a C program to clear nth(index starting from 0) bit of a number. */

#include <stdio.h>
void main()
{
    int value, vshifted;
    int idx;
    printf("Enter value: ");
    scanf("%d", &value);
    printf("\nEnter index: ");
    scanf("%d", &idx);
    vshifted = value >> (idx - 1);
    //  printf("\n shifted value %d", (1 << idx));
    if (vshifted & 1)
    {
        value = value ^ (1 << idx);
        printf("\nValue after %dth bit reset: %d\n", idx, value);
    }
    else
    {
        printf("Bit is already cleared");
    }
}