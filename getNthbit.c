/* Write a C program to get nth(index starting from 0) bit of a number. */
#include <stdio.h>
void main()
{
    int value;
    int idx;
    printf("Enter value: ");
    scanf("%d", &value);
    printf("\nEnter index: ");
    scanf("%d", &idx);
    printf("\n shifted value: %d\n", (1 << idx));
    if (value & (1 << idx))
    {
        printf("%dth bit is set(1)", idx);
    }
    else
    {
        printf("%dth bit is not set(0)", idx);
    }
}