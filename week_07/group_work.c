#include <stdio.h>
#include <math.h>

int main()
{
    int hp = 16;
    int rounds = 0;

    while (rounds < 5)
    {
        hp -= 4;
        printf("round %d: hp = %d\n", rounds, hp);
        if (hp <= 0)
        {
            printf("Player down!\n");
            break;
        }
        rounds++;
    }

    return 0;
}