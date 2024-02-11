#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cost, n = 0;
	scanf("%d", &cost);
	int cost_r = 1000 - cost;

	n += cost_r / 500;
	n += cost_r % 500 / 100;
	n += cost_r % 500 % 100 / 50;
	n += cost_r % 500 % 100 % 50 / 10;
	n += cost_r % 500 % 100 % 50 % 10 / 5;
	n += cost_r % 500 % 100 % 50 % 10 % 5;

	printf("%d", n);

	return 0;
}