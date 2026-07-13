#include <stdio.h>

int main()

{
    int second;
    printf("Input second: ");
    scanf("%d", &second);

    int hour = second / 3600;
    int minute = (second % 3600) / 60;
    second = second % 60;

    printf("Time: %02d:%02d:%02d\n", hour, minute, second);

    return 0;
}