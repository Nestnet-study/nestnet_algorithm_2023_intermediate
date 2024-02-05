#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;


int compare(const void* a, const void* b) 
{
    Point* p1 = (Point*)a;
    Point* p2 = (Point*)b;

    if (p1->y != p2->y) 
    {
        return p1->y - p2->y;
    }
    else 
    {
        return p1->x - p2->x;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    Point* arr = (Point*)malloc(n * sizeof(Point));

    for (int i = 0; i < n; i++) 
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, n, sizeof(Point), compare);

    for (int i = 0; i < n; i++) 
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    free(arr);
    return 0;
}