#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int E, S, M;
	int year = 0;

	scanf("%d %d %d", &E, &S, &M);

	if (E == S && S == M)
	{
		year = E;
	}
	else
	{
		while (1)
		{
			E--;
			S--;
			M--;
			year++;

			if (E < 1)
			{
				E += 15;
			}
			else if (S < 1)
			{
				S += 28;
			}
			else if (M < 1)
			{
				M += 19;
			}

			if (E == S && S == M)
			{
				year += E;
				break;
			}
		}
	}

	printf("%d", year);

	return 0;
}