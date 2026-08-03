#include <stdio.h>
#include <stdlib.h>

int main()
{
    int isprime = 1;
    int n;

    printf("enter a number:");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0 && n != i && i != 1)
        {
            isprime = 0;
            break;
        }
    }

    if (isprime)
    {
        printf("%d is prime\n", n);
    }
    else
    {
        printf("%d is not prime\n", n);
    }

    return 0;
}