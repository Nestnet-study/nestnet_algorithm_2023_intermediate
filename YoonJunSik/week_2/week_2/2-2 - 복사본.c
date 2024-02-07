#include <stdio.h>

int main() 
{
	int n, k;
	int count = 0;
	scanf_s("%d", &n);
	int i, j;
	k = n;

	if (n == 1) 
	{ 
		return 0;
	}

	for (i = 2; i <= k;) 
	{
		if ((k % i) == 0) 
		{
			printf("%d\n", i);
			k = k / i;
			count = 1;
		}
		else 
		{
			i++;
		}
	}

	if (count == 0) 
	{
		printf("%d\n", n);  // 소인수분해가 안되었을 경우 원래 값 출력
	}

	return 0;
}
