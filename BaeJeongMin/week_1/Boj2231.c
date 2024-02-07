#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num;
	int range;
	int RANGE_check;
	int sum;
	int SUM_material;
	int check = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		range = 0;
		RANGE_check = i;
		SUM_material = i;
		sum = i;

		while (1)
		{
			range++;

			if (RANGE_check % 10 == RANGE_check)
			{
				break;
			}
			else
			{
				RANGE_check /= 10;
			}
		}

		for (int j = 0; j < range - 1; j++)
		{
			sum += SUM_material % 10;
			SUM_material /= 10;
		}
		sum += SUM_material;

		if (sum == num)
		{
			printf("%d", i);
			break;
		}
		else
		{
			check++;
		}
	}

	if (check == num)
	{
		printf("0");
	}

	return 0;
}