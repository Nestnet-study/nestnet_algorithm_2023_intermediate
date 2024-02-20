#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int min_num(int a);
int max_num(int a);

int main()
{
	int A, B;
	int min, max;
	scanf("%d %d", &A, &B);

	min = min_num(A) + min_num(B);
	max = max_num(A) + max_num(B);

	printf("%d %d", min, max);
		
	return 0;
}

int min_num(int a)  // 최솟값 찾기, 6을 5로 보았을 때
{
	int arr[7];
	int A = 0;

	for (int i = 0; i < 7; i++)
	{
		arr[i] = ((a % 10) == 6 ? 5 : (a % 10));
		a /= 10;
	}

	for (int i = 0; i < 7; i++)
	{
		A += arr[i] * pow(10, i);
	}

	return A;
}

int max_num(int a)  // 최댓값 찾기, 5를 6으로 보았을 때
{
	int arr[7];
	int A = 0;

	for (int i = 0; i < 7; i++)
	{
		arr[i] = ((a % 10) == 5 ? 6 : (a % 10));
		a /= 10;
	}

	for (int i = 0; i < 7; i++)
	{
		A += arr[i] * pow(10, i);
	}

	return A;
}