#include <stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int result;

	for (int i = 1; i < n; i++)
	{
		int temp = i;
		int sum = i;

		while (temp > 0)
		{
			sum += temp % 10;
			temp /= 10;
		}

		if (sum == n)
		{
			result = i;
			break;
		}
		else
			result = 0;
	}
	printf("%d\n", result);
	return 0;
}