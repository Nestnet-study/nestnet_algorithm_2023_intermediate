#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int GCD(int A, int B)
{
	if (A == 0 && B == 0)
	{
		return 0;
	}

	if (A > B)
	{
		for (int i = B; i >= 1; i--)
		{
			if (A % i == 0 && B % i == 0)
			{
				return i;
			}
		}
	}
	else if (A < B)
	{
		for (int j = A; j >= 1; j--)
		{
			if (A % j == 0 && B % j == 0)
			{
				return j;
			}
		}
	}
}

int LCM(int X, int Y)
{
	return (X * Y) / GCD(X, Y);

}

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n%d", GCD(a, b), LCM(a, b));

	return 0;
}