#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int L, P, V;
	int num = 0;
	int check = 0;
	int NUM[100];

	while (1)
	{
		check = 0;

		scanf("%d %d %d", &L, &P, &V);
		
		if (L == 0 && P == 0 && V == 0)
		{
			break;
		}
		
		check = V / P;
		V %= P;

		if (V > L)
		{
			NUM[num] = L;
		}
		else if (V <= L)
		{
			NUM[num] = V;
		}

		NUM[num] += (check*L);

		num++;
	}

	for (int i = 0; i < num; i++)
	{
		printf("Case %d: %d\n", i + 1, NUM[i]);
	}

	return 0;

}