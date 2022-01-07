/* Write a C program to set nth(index starting from 0) bit of a number. */

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
    if (vshifted & 1)
    {
        printf("Bit is already set");
    }
    else
    {
        printf("Value after %d bit set: %d\n", idx, (value | (1 << idx)));
    }
}