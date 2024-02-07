#include <stdio.h>
int main()
{
	int a, b;
	int max, min;//큰값 작은값
	int quo, rem;//몫 나머지
	int gcd, lcm;//최대공약수 최소공배수
	
	scanf_s("%d %d", &a, &b);

	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	while (1)
	{
		quo = max / min;
		rem = max % min;

		if (rem == 0)
			break;
		max = min;
		min = rem;
	}
	lcm = min;
	gcd = (a * b) / lcm;//두수의 곱= 최대공약수*최소공배수
	printf("%d\n%d\n", lcm, gcd);
	return 0;
}