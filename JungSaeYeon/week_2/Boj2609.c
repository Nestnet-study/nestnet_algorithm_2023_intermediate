////B.2609 최대공약수와 최소공배수
//#include <stdio.h>
//
//int main() {
//	int M, N;
//	int x = 0;
//
//	scanf("%d %d", &M, &N);
//
//	for (int i = 1; i <= M && i <= N; i++) {
//		if (M % i == 0 && N % i == 0)
//			x = i;  //M과 N의 공약수가 저장됨. 반복문이 끝날 때 가장 큰 수가 저장.
//	}
//
//	printf("%d\n", x);
//	printf("%d", M * N / x);
//}