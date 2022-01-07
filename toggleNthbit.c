/* Write a C program to toggle nth bit of a number. */

#include <stdio.h>
void main()
{
    int value;
    int idx;
    printf("Enter value: ");
    scanf("%d", &value);
    printf("\nEnter index: ");
    scanf("%d", &idx);
    //  printf("\n shifted value %d", (1 << idx));
    value = value ^ (1 << idx);
    printf("\nValue after %dth bit toggle: %d\n", idx, value);
}