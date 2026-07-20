#include <stdio.h>

int main()
{

    int score;
    printf("Score: ");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("Grade: A (4.0) ");
        printf("Pass\n");
    }
    else if (score >= 80)
    {
        printf("Grade: B (3.0) ");
        printf("Pass\n");
    }
    else if (score >= 70)
    {
        printf("Grade: C (2.0) ");
        printf("Pass\n");
    }
    else if (score >= 60)
    {
        printf("Grade: D (1.0) ");
        printf("Fail\n");
    }
    else
    {
        printf("Grade: F (0.0) ");
        printf("Fail\n");
    }

    return 0;
}