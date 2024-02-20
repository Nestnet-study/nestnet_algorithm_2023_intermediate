#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start, end;
} Meeting;

int compare(const void* a, const void* b) {
    Meeting* m1 = (Meeting*)a;
    Meeting* m2 = (Meeting*)b;
    if (m1->end == m2->end)
        return m1->start - m2->start;
    else
        return m1->end - m2->end;
}

int main() {
    int N, count = 0, end_time = 0;
    scanf("%d", &N);
    Meeting* meetings = (Meeting*)malloc(sizeof(Meeting) * N);
    for (int i = 0; i < N; i++)
        scanf("%d %d", &meetings[i].start, &meetings[i].end);

    qsort(meetings, N, sizeof(Meeting), compare);

    for (int i = 0; i < N; i++) {
        if (meetings[i].start >= end_time) {
            end_time = meetings[i].end;
            count++;
        }
    }

    printf("%d", count);
    free(meetings);
    return 0;
}