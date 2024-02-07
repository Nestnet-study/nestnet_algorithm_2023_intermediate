#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	while (N != 1)  // N이 1이 아닐 때
	{
		for (int i = 2; i <= N; i++)  // 2부터 인수 확인
		{
			if (N % i == 0)  // 나누어 떨어지면 출력
			{
				printf("%d\n", i);
				N /= i;  // N = 인수로 나눈 값
				break;
			}
		}
	}

	return 0;
}