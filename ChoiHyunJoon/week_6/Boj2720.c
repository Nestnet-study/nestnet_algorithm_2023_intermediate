#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void change(int a);

int main()
{
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int C;
		scanf("%d", &C);

		change(C);
	}

	return 0;
}

void change(int A)  // 거스름돈 개수 출력 함수, 큰 단위로 나눠지면 몫 출력
{
	int Q = 25, D = 10, N = 5, P = 1;

	if ((A / Q) > 0)
	{
		printf("%d ", A / Q);
		A %= Q;
	}
	else
	{
		printf("0 ");
	}

	if ((A / D) > 0)
	{
		printf("%d ", A / D);
		A %= D;
	}
	else
	{
		printf("0 ");
	}

	if ((A / N) > 0)
	{
		printf("%d ", A / N);
		A %= N;
	}
	else
	{
		printf("0 ");
	}

	printf("%d\n", A);
}