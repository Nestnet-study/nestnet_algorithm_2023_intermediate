#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n;  // 입력받을 상수
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int sum = 0;  //생성자 확인을 위한 상수
		int temp = i;  // while문 안에서 i값을 다루기 위한 상수

		sum += i;
		while (1)
		{
			sum += temp % 10;  // 일의 자리 더하기
			temp /= 10;  // 10으로 나눠 그 다음 자리수가 일의 자리에 위치
			if (temp == 0)  // 다음 자리수 없으면 종료
			{
				break;
			}
		}
		if (sum == n)
		{
			printf("%d\n", i);
			break;
		}
		else if (i == n)  // 생성자가 없는 경우 0출력
		{
			printf("0");
		}
	}

	return 0;
}