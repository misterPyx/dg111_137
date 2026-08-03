#include <stdio.h>

int main()
{
    printf("1: Triangle\n");

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("2: Rectangle\n");

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("3: Diamond\n");

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 5 - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = 2; row >= 1; row--)
    {
        for (int col = 1; col <= 5 - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}