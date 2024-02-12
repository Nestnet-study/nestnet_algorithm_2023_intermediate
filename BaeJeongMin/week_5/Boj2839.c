#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int weight;
	int sum = 0;
	int check = 1;
	int h = 0;

	scanf("%d", &weight);

	for (int i = weight / 5; i >= 0; i--)
	{
		h = 0;

		while (1)
		{
			if ((5 * i) + (3 * h) == weight)
			{
				sum = i + h;
				check = 0;
				break;
			}
			else if ((5 * i) + (3 * h) > weight)
			{
				sum = -1;
				break;
			}
			h++;
		}

		if (check == 0)
		{
			break;
		}
	}
	
	if (check == 1)
	{
		sum = - 1;
	}

	printf("%d", sum);

	return 0;
}