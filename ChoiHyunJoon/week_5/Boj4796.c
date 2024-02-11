#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int L, P, V;
	int case_n = 1;  // case #

	while (1)   // L, P, V가 모두 0이 아닐때 반복
	{
		scanf("%d %d %d", &L, &P, &V);
		if (L == 0 && P == 0 && V == 0)
		{
			break;
		}
		else
		{
			int day = 0;  // 캠핑장 사용 가능 날짜 초기화

			day += (V / P) * L;  // 연속하는 일 수를 한 덩어리로 묶고, 연속하는 일 수 * 사용가능 일 수

			if ((V % P) > L)  // 전체휴가(V) 를 연속하는 일 수(P)로 나눈 나머지가 사용가능 일 수(L) 보다 크면 L 일만큼 더 사용가능
			{
				day += L;
			}
			else  // 그렇지 않으면, ex) L이 5 일 때 V % P == 3 이면 3일만큼 더 사용가능
			{
				day += V % P;
			}
			printf("Case %d: %d\n", case_n, day);
			case_n++;
		}
	}

	return 0;
}