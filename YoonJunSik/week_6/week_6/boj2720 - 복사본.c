#include <stdio.h>

int main() 
{
	int T, C;
	int coin[4] = { 25, 10, 5, 1 };
	scanf_s("%d", &T);

	for (int t = 0; t < T; t++) 
	{
		scanf_s("%d", &C);

		int coin_count[4] = { 0, };//계속 초기화하는 역할

		for (int i = 0; i < 4; i++) 
		{
			while (C >= coin[i]) 
			{
				C -= coin[i];
				coin_count[i]++;
			}
		}

		printf("%d %d %d %d\n", coin_count[0], coin_count[1], coin_count[2], coin_count[3]);
	}

	return 0;
}
