#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int num;
	int check = 0;

	scanf("%d", &n);

	int** arr = (int**)malloc(n * sizeof(int*));

	for (int i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(4 * sizeof(int));
		
		for (int a = 0; a < 4; a++)
		{
			arr[i][a] = 0;
		}
	}

	for (int j = 0; j < n; j++)
	{
		scanf("%d", &num);
		check = num;

		if (check / 25 > 0)
		{
			arr[j][0] += check / 25;
			check %= 25;
		}
		if (check / 10 > 0)
		{
			arr[j][1] += check / 10;
			check %= 10;
		}
		if (check / 5 > 0)
		{
			arr[j][2] += check / 5;
			check %= 5;
		}
		if (check / 1 > 0)
		{
			arr[j][3] += check / 1;
		}
	}

	for (int k = 0; k < n; k++)
	{
		printf("%d %d %d %d\n", arr[k][0], arr[k][1], arr[k][2], arr[k][3]);
	}

	for (int h = 0; h < n; h++)
	{
		free(arr[h]);
	}
	free(arr);

	return 0;
}