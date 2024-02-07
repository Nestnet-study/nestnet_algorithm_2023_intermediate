#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);

	for (int i = M; i <= N; i++)
	{
		int count = 0;  // 약수의 갯수

		for (int j = 1; j <= sqrt(i); j++)  // i의 제곱근까지만 확인
		{
			if ((i % j) == 0)
			{
				count += 1;
			}
			if (count == 2)
			{
				break;
			}
		}
		if (i != 1 && count == 1)  // 숫자가 1이 아니고 약수가 1밖에 없을 때 출력
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}