#include <stdio.h>

int square(int x)
{
	int result = 1;
	if (x == 0)
		return result;

	else if (x >= 1)
	{
		for (int i = 0; i < x; i++)
		{
			result = result * 10;
		}
		return result;
	}
}

int max(int a, int b)
{
	int arr[7] = { 0, };
	int brr[7] = { 0, };
	int result = 0;

	for (int i = 0; i < 7; i++)
	{
		arr[i] = (((a % 10) == 5) ? 6 : (a % 10));
		a /= 10;
		
		brr[i] = (((b % 10) == 5) ? 6 : (b % 10));
		b /= 10;
	}

	for (int i = 0; i < 7; i++)
	{
		result += (arr[i] * square(i)) + (brr[i] * square(i));
	}
	return result;
}

int min(int a, int b)
{
	int arr[7] = { 0, };
	int brr[7] = { 0, };
	int result = 0;

	for (int i = 0; i < 7; i++)
	{
		arr[i] = (((a % 10) == 6) ? 5 : (a % 10));
		a /= 10;

		brr[i] = (((b % 10) == 6) ? 5 : (b % 10));
		b /= 10;
	}

	for (int i = 0; i < 7; i++)
	{
		result += (arr[i] * square(i)) + (brr[i] * square(i));
	}
	return result;
}

int main()
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	max(A, B);
	min(A, B);
	printf("%d %d", min(A, B), max(A,B));
	return 0;
}