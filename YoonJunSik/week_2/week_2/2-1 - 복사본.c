#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int m, n;
	int j, k;
	scanf_s("%d %d", &m, &n);

	char *arr = (char*)calloc(n + 1, sizeof(char));

	for (j = 2; j <= sqrt(n); j++)
	{
		if (arr[j] == 0)
		{
			for (k = 2; (j * k) <= n; k++)
			{
				arr[j * k] = 1;
			}
		}
	}

	for (int i = (m > 1 ? m : 2); i <= n; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n", i);
		}
	}
	free(arr);

	return 0;
}