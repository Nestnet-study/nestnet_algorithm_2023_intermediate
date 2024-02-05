#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int* ARR, int N)
{
	int swap = 0;

	for (int j = N - 1; j > 0; j--)
	{
		for (int k = 0; k < j; k++)
		{
			if (ARR[k] > ARR[k + 1])
			{
				swap = ARR[k];
				ARR[k] = ARR[k + 1];
				ARR[k + 1] = swap;
			}
		}
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);

	int* arr = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	BubbleSort(arr, n);

	for (int h = 0; h < n; h++)
	{
		printf("%d\n", arr[h]);
	}

	free(arr);

	return 0;
}