#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int count = 1;

    printf("+---+---+---+---+---+\n");

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            printf("|%2d ", count++);
        }
        printf("|\n");
    }

    printf("+---+---+---+---+---+\n");
    return 0;
}