/* C program to rotate bits of a number. */
#include <stdio.h>
void rotateRight(int value, int rotation)
{
    int lsb, size, i;
    size = sizeof(int) * 8;
    rotation = rotation % size;
    for (i = 0; i < rotation; i++)
    {
        lsb = value & 1;
        value = (value >> 1) & (~(1 << (size - 1)));
        value = value | (lsb << (size - 1));
    }
    printf("\n After right rotation: %d\n", value);
}
void rotateLeft(int value, int rotation)
{
    int size, msb, i;
    size = sizeof(int) * 8 - 1;
    rotation = rotation % size;
    for (i = 0; i < rotation; i++)
    {
        msb = (value >> size) & 1;
        value = value << 1;
        value = value | msb;
    }
    printf("\n After left rotation: %d\n", value);
}
void main()
{
    int value, rotation, i, lsb, size;
    printf("Enter value: ");
    scanf("%d", &value);
    printf("Rotations: ");
    scanf("%d", &rotation);
    rotateLeft(value, rotation);
    rotateRight(value, rotation);
}