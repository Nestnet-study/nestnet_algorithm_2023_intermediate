#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 1000000

int arr[MAX_VALUE * 2 + 1];

int main(void) 
{
    int n, num;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[num + MAX_VALUE]++;
    }

    for (int i = 0; i <= MAX_VALUE * 2; i++) 
    {
        while (arr[i] > 0)
        { 
            printf("%d\n", i - MAX_VALUE);
            arr[i]--;
        }
    }

    return 0;
}