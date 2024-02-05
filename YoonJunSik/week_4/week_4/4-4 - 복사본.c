#include <stdio.h>
int main()
{
	int n, k;
	int sum = 0;
	int p[1000] = { 0 };
	scanf_s("%d\n", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (p[i] > p[j])
			{
				k = p[i];
				p[i] = p[j];
				p[j] = k;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum += p[j];
		}
	}
	printf("%d\n", sum);

	return 0;
}