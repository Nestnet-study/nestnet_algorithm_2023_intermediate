#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int A, B;
	int min = 0;
	int max = 0;
	int CHECK1 = 0;
	int CHECK2 = 0;
	int gob1 = 1;
	int gob2 = 1;

	scanf("%d %d", &A, &B);

	CHECK1 = A;
	CHECK2 = B;

	while (1)
	{

		if (CHECK1 / 10 > 0)
		{
			if (CHECK1 % 10 == 6)
			{
				min += 5 * gob1;
				CHECK1 /= 10;
			}
			else
			{
				min += (CHECK1 % 10) * gob1;
				CHECK1 /= 10;
			}
		}
		else if (CHECK1 / 10 == 0)
		{
			if (CHECK1 == 6)
			{
				min += 5 * gob1;
				CHECK1 = -10;
			}
			else
			{
				min += CHECK1 * gob1;
				CHECK1 = -10;
			}
		}

		if (CHECK2 / 10 > 0)
		{
			if (CHECK2 % 10 == 6)
			{
				min += 5 * gob1;
				CHECK2 /= 10;
			}
			else
			{
				min += (CHECK2 % 10) * gob1;
				CHECK2 /= 10;
			}
		}
		else if (CHECK2 / 10 == 0)
		{
			if (CHECK2 == 6)
			{
				min += 5 * gob1;
				CHECK2 = -10;
			}
			else
			{
				min += CHECK2 * gob1;
				CHECK2 = -10;
			}
		}
		gob1 *= 10;

		if (CHECK1 == -10 && CHECK2 == -10)
		{
			break;
		}
	}

	CHECK1 = A;
	CHECK2 = B;

	while (1)
	{

		if (CHECK1 / 10 > 0)
		{
			if (CHECK1 % 10 == 5)
			{
				max += 6 * gob2;
				CHECK1 /= 10;
			}
			else
			{
				max += (CHECK1 % 10) * gob2;
				CHECK1 /= 10;
			}
		}
		else if (CHECK1 / 10 == 0)
		{
			if (CHECK1 == 5)
			{
				max += 6 * gob2;
				CHECK1 = -10;
			}
			else
			{
				max += CHECK1 * gob2;
				CHECK1 = -10;
			}
		}

		if (CHECK2 / 10 > 0)
		{
			if (CHECK2 % 10 == 5)
			{
				max += 6 * gob2;
				CHECK2 /= 10;
			}
			else
			{
				max += (CHECK2 % 10) * gob2;
				CHECK2 /= 10;
			}
		}
		else if (CHECK2 / 10 == 0)
		{
			if (CHECK2 == 5)
			{
				max += 6 * gob2;
				CHECK2 = -10;
			}
			else
			{
				max += CHECK2 * gob2;
				CHECK2 = -10;
			}
		}
		gob2 *= 10;

		if (CHECK1 == -10 && CHECK2 == -10)
		{
			break;
		}
	}

	printf("%d %d", min, max);

	return 0;
}