#include <stdio.h>
#include <math.h>

int main()
{
    printf("===Item Shop===\n");
    printf("Gold: 1,000\n");
    printf(" \n");
    printf("1: Health Potion - 50 Gold (+50 HP)\n");
    printf("2: Mana Potion - 80 Gold (+30 MP)\n");
    printf("3: Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4: Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5: Iron Shield - 250 Gold (+25 DEF)\n");
    printf("6: Exit\n");

    int item_number;
    printf("Select Item: ");
    scanf("%d", &item_number);

    int item_price;
    item_price = 0;
    int gold = 1000;

    switch (item_number) // items
    {
    case 1:
        printf("1: Health Potion - 50 Gold (+50 HP)\n");
        item_price = 50;
        break;
    case 2:
        printf("2: Mana Potion - 80 Gold (+30 MP)\n");
        item_price = 80;
        break;
    case 3:
        printf("3: Iron Sword - 500 Gold (+20 ATK)\n");
        item_price = 500;
        break;
    case 4:
        printf("4: Leather Armor - 300 Gold (+15 DEF)\n");
        item_price = 300;
        break;
    case 5:
        printf("5: Iron Shield - 250 Gold (+25 DEF)\n");
        item_price = 250;
        break;
    case 6:
        printf("Exit\n");
        break;
    default:
        printf("Invalid item number D:\n");
        break;
    }

    if (gold < item_price) // checking the player's gold b4 purchase
    {
        printf("Not enough gold D:\n");
        return 0;
    }

    if (gold >= item_price) // decreasing gold and calculating
    {
        gold -= item_price;
    }

    printf("===Purchase===\n");
    printf("%d\n", item_number);
    printf("Price: %d Gold\n", item_price);
    printf("Remaining Gold: %d\n", gold);
    printf(" \n");
    printf("Item purchased successfully! ✓ \n");

    return 0;
}