////B.1929 소수 구하기
//
//#include <stdio.h>
//int main(void) {
//    int M, N;
//    int arr[1000001] = { 0 };  //배열 선언, 0으로 초기화
//    arr[1] = 1;  //1은 소수가 아니므로 제외
//    scanf("%d %d", &M, &N);
//    //에라토스테네스의 체 이용
//    for (int i = 2; i <= N; i++) {
//        for (int j = 2; i * j <= N; j++) {  //j의 배수들 지움
//            arr[i * j] = 1;
//        }
//    }
//    //소수 출력
//    for (int i = M; i <= N; i++) {
//        if (arr[i] == 0)
//            printf("%d\n", i);
//    }
//    return 0;
//}