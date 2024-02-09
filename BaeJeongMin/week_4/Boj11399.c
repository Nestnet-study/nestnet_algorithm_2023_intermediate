#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int min = 0;
	int sum = 0;
	int swap = 0;

	scanf("%d", &n);

	int num = n;

	int* time = (int*)malloc(n * sizeof(int));
	int* arr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &time[i]);
		arr[i] = 0;
	}

	for (int j = 0; j < n; j++)
	{
		min = time[j];

		for (int k = j + 1; k < n; k++)
		{
			if (min > time[k])
			{
				min = time[k];

				swap = time[j];
				time[j] = time[k];
				time[k] = swap;
			}
		}

		for (int h = num-1; h >= 0; h--)
		{
			arr[h] += min;
		}
		num--;
	}

	for (int a = 0; a < n; a++)
	{
		sum += arr[a];
	}

	printf("%d", sum);

	free(time);
	free(arr);

	return 0;
}