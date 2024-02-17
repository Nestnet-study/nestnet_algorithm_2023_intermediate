#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int money;
	int sum = 0;

	scanf("%d", &money);

	int check = 1000 - money;

	if (check / 500 == 1)
	{
		sum += 1;
		check %= 500;
	}
	if (check / 100 >= 1)
	{
		sum += check / 100;
		check %= 100;
	}
	if (check / 50 >= 1)
	{
		sum += check / 50;
		check %= 50;
	}
	if (check / 10 >= 1)
	{
		sum += check / 10;
		check %= 10;
	}
	if (check / 5 >= 1)
	{
		sum += check / 5;
		check %= 5;
	}
	if (check / 1 >= 1)
	{
		sum += check;
	}

	printf("%d", sum);

	return 0;
}