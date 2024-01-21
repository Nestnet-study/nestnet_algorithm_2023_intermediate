#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
    if (num < 2)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int m, n;

    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++)
    {
        if (is_prime(i) == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}