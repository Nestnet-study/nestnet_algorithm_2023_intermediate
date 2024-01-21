#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int A, B, a, b;
	int cod, com;  // 최대공약수, 최소공배수
	scanf("%d %d", &A, &B);
	if (B > A)  // 입력받은 두 수 크기에 따라 A, B 재설정
	{
		int temp;
		temp = A;
		A = B;
		B = temp;
	}

	a = A, b = B;
	while (1)  // 유클리드 호제법, 나머지가 0일 때 b 출력 (최대 공약수)
	{
		if ((a % b) == 0) 
		{
			cod = b;
			printf("%d\n", cod);
			break;
		}
		else
		{
			int temp = a;
			a = b;
			b = temp % b;
		}
	}

	com = A * B / cod;  // 최소공배수 = A * B / 최대공약수

	printf("%d", com);
	
	return 0;
}