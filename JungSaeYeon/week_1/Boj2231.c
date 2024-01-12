////B. 2231 분해합
//
//#include <stdio.h>
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    int found = 0;
//    for (int i = 1; i < N; i++) {
//        int a = i;  //검사 중인 수
//        int sum = i;  //분해합
//        while (a > 0) {  //분해합 계산
//            sum += a % 10;
//            a /= 10;
//        }
//        if (sum == N) {
//            printf("%d", i);
//            found = 1;
//            break;
//        }
//    }
//    if (found == 0) {
//        printf("0");
//    }
//    return 0;
//}