#include <stdio.h>

int main()
{
	char a[100];
	char b[100];
	int last = 0;
	scanf_s("%s", a,sizeof(a));

	for (int i = 0; i < 100; i++)
	{
		if (a[i] != '\0')
		{
			++last;
		}
		else
		{
			break;
		}
	}

	for (int i = 0; i < last; i++)
	{
		b[i] = a[last - i-1];
	}

	int result = 1;
	for (int i = 0; i < last; i++)
	{
		if (a[i] != b[i])
		{
			result = 0;
			break;
		}
		
	}
	printf("%d\n", result);
	return 0;
}