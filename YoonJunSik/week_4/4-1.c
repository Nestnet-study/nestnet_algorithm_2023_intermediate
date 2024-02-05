#include <stdio.h>

int main()
{
	int n;
	int arr[1000] = { 0 };
	int k;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
				return 0;
		}

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}