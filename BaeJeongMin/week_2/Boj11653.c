#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void DIV(int num)
{
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			DIV(num / i);
			break;
		}
	}
}

int main(void)
{
	int N;

	scanf("%d", &N);

	if (N == 1)
	{
		return 0;
	}
	else if (N > 1)
	{
		DIV(N);
	}

	return 0;
}