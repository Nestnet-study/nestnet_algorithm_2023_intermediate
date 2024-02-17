/*몫과 나머지 이용*/
#include <stdio.h>

int main() 
{
	int num = 0;
	int L, P, V;

	while (1) 
	{
		int sum = 0;
		num++;
		scanf_s("%d %d %d", &L, &P, &V);
		if ((L == 0) && (P == 0) && (V == 0))
		{
			break;
		}

		int quo = V / P;
		int div = V % P;
		sum += L * quo;
		sum += (div > L) ? L : div;
		printf("Case %d: %d\n", num, sum);//case를 대문자를 안써서 계속 오류가 발생했음
	}
	return 0;
}