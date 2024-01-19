#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int E, S, M;  // 입력받을 연도 E, S, M
	int year = 1;  // 우리나라식 연도

	scanf("%d %d %d", &E, &S, &M);

	if (E == 15)  // E, S, M 이 15, 28, 19일 때 0으로 초기화
	{
		E = 0;
	}
	if (S == 28)
	{
		S = 0;
	}
	if (M == 19)
	{
		M = 0;
	}

	while (1)  // 나머지가 E, S, M이 되는 year 구하기
	{
		if (year % 15 == E && year % 28 == S && year % 19 == M)
		{
			break;
		}
		else
		{
			year++;
		}
	}

	printf("%d", year);

	return 0;
}