#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;

    // 우선적으로 5킬로그램 봉지를 사용하고 남은 나머지를 3킬로그램 봉지로 채움
    while (N > 0) {
        if (N % 5 == 0) {
            count += N / 5;
            N = 0;
            break;
        }
        N -= 3;
        count++;
    }

    // 정확하게 N킬로그램을 만들 수 없는 경우
    if (N < 0)
        printf("-1\n");
    else
        printf("%d\n", count);

    return 0;
}
