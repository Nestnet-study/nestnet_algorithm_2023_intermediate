include <stdio.h>
int main()
{
	int E, S, M;
	int a=0, b=0, c=0;
	scanf("%d %d %d", &E, &S, &M);
	int year = 0;
	
	if ((E > 0) && (S > 0) && (M > 0))
	{
		while (1)
		{

			if (a > 15)
				a = 1;
			if (b > 28)
				b = 1;
			if (c > 19)
				c = 1;

			if ((a == E) && (b == S) && (c == M))
				break;

			else
			{
				++year;
				++a;
				++b;
				++c;
			}
		}
	
	}
	
	printf("%d", year);
	return 0;
}
