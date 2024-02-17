#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	int count;
	scanf("%d", &N);

	if ((N % 3) == 0)
	{
		count = N / 5;

		while (1)
		{
			if ((N - (5 * count)) % 3 == 0)
			{
				count += (N - (5 * count)) / 3;
				printf("%d", count);
				break;
			}
			else
			{
				count--;
			}
		}
	}
	else
	{
		count = N / 5;
		while (1)
		{
			if ((N - (5 * count)) % 3 == 0)
			{
				count += (N - (5 * count)) / 3;
				printf("%d", count);
				break;
			}
			else
			{
				count--;
			}
			if (count <= 0)
			{
				printf("-1");
				break;
			}
		}
	}

	return 0;
}