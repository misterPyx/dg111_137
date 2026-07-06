#include <stdio.h>

int main()
{
    char Name[50];
    int HighestHp;
    float AttackPower;
    char Defense[50];
    char Level[50];

    printf("\n ===input your information===\n");
    printf("Name: ");
    scanf("%s", Name);
    printf("Highest Hp: ");
    scanf("%d", &HighestHp);
    printf("Attack Power: ");
    scanf("%f", &AttackPower);
    printf("Defense: ");
    scanf(" %[^\n]", Defense);
    printf("Level: ");
    scanf(" %[^\n]", Level);

    printf("\n=== Character Summary ===\n");
    printf("Name: %s\n", Name);
    printf("Highest Hp: %d\n", HighestHp);
    printf("Attack Power: %.2f\n", AttackPower);
    printf("Defense: %s\n", Defense);
    printf("Level: %s\n", Level);

    return 0;
}