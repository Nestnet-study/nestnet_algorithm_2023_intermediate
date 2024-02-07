#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char word[101];  // 단어 입력받을 배열

	int D = 1;  // 판별 정수

	scanf("%s", &word);

	for (int i = 0; i < strlen(word) / 2; i++)
	{
		if (word[i] != word[strlen(word) - i - 1])  // 대칭되는 배열원소끼리 같지 않으면 D=0, 반복 종료
		{
			D = 0;
			break;
		}
	}
	
	printf("%d", D);

	return 0;
}