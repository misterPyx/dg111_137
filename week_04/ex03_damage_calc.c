#include <stdio.h>
#include <math.h>

int main()

{
    int player_atk, enemy_def, hit_number;
    printf("Player Attack : ");
    scanf("%d", &player_atk);
    printf("Enemy Defense : ");
    scanf("%d", &enemy_def);
    printf("Hit Number : ");
    scanf("%d", &hit_number);

    int Total_Damage = (player_atk - enemy_def) * hit_number;
    printf("Damage : %d\n", Total_Damage);

    if (hit_number % 5 == 0)
    {
        int Critical_Damage = (int)ceil((float)(player_atk - enemy_def) * 1.5) * hit_number;
        printf("Critical Damage : %d", Critical_Damage);
        printf(" ***Critical Hit!***\n");
    }

    return 0;
}