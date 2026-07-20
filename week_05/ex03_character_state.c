#include <stdio.h>
#include <math.h>

int main()
{
    int max_hp, damage;
    int hp;
    int is_poisoned, attack_count;

    printf("Max HP: ");
    scanf("%d", &max_hp);
    printf("Damage Taken: ");
    scanf("%d", &damage);
    printf("Poisoned (0/1): ");
    scanf("%d", &is_poisoned); // 0 = not poisoned, 1 = poisoned
    printf("Attack Count: ");
    scanf("%d", &attack_count);
    _Bool is_poisoned_bool = is_poisoned;
    //_Bool attack_count_bool = attack_count; // convert

    hp = max_hp - damage;
    if (hp < 0)
        hp = 0; // hp cant be negative

    printf("===Character Status===\n");

    if (damage >= max_hp) // status check
    {
        printf("State: DEAD ");
    }
    else if (is_poisoned_bool == 1)
    {
        printf("State: POISONED ");
    }
    else if (hp < max_hp * 0.25)
    {
        printf("State: 100CRITICAL! ");
    }
    else
    {
        printf("State: NORMAL ");
    }

    if (attack_count >= 5)
    {
        printf("\nULTIMATE READY!");
    }

    return 0;
}