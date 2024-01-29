#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int list[100][3];
char num[1000];

int check(int x, int y, int z, int idx)
{
    int strike = 0;
    int ball = 0;
    if (list[idx][0] / 100 == x)
    {
        strike++;
    }
    if (list[idx][0] / 10 % 10 == y)
    {
        strike++;
    }
    if (list[idx][0] % 10 == z)
    {
        strike++;
    }
    if (list[idx][0] / 100 == y || list[idx][0] / 100 == z)
    {
        ball++;
    }
    if (list[idx][0] / 10 % 10 == x || list[idx][0] / 10 % 10 == z)
    {
        ball++;
    }
    if (list[idx][0] % 10 == x || list[idx][0] % 10 == y)
    {
        ball++;
    }

    if (strike == list[idx][1] && ball == list[idx][2])
    {
        return 1;
    }
    return 0;
}

int main(void) 
{
    int n, i, j, x, y, z;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &list[i][0], &list[i][1], &list[i][2]);
    }

    for (i = 123; i <= 987; i++)
    {
        x = i / 100;
        y = i / 10 % 10;
        z = i % 10;

        if (x == y || x == z || y == z || x == 0 || y == 0 || z == 0)
        {
            continue;
        }
        for (j = 0; j < n; j++)
        {
            if (!check(x, y, z, j))
            {
                break;
            }
        }
        if (j == n)
        {
            num[i] = 1;
        }
    }

    int count = 0;
    for (i = 123; i <= 987; i++)
    {
        if (num[i]) count++;
    }

    printf("%d\n", count);

    return 0;
}