#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char word[100];
	int num = 0;
	int check = 0;

	scanf("%s", word);

	for (int i = 0; i < 100; i++)
	{
		num++;
		if (word[i] == '\0')
		{
			num--;
			break;
		}
	}

	for (int j = 0; j < num / 2; j++)
	{
		if (word[j] != word[num - 1 - j])
		{
			check++;
		}
	}

	if (check == 0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}

	return 0;
}