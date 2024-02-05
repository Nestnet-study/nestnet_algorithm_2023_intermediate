////B.11651 좌표 정렬하기 2
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct { //좌표 저장
//	int x;
//	int y;
//}coord;
//
//int compare(const void* one, const void* two)  //비교 함수
//{
//	coord* a = (coord*)one;
//	coord* b = (coord*)two;
//
//	if (a->y < b->y) //y좌표 기준
//		return -1;
//	else if (a->y > b->y)
//		return 1;
//	else
//	{
//		if (a->x < b->x) //y좌표 같을 경우 x좌표 비교
//			return -1;
//		else
//			return 1;
//	}
//	return 0; //동일한 좌표일 경우
//}
//
//int main()
//{
//	int i, N;
//	coord* list;
//	scanf("%d", &N);
//	list = (coord*)malloc(N * sizeof(coord));  //구조체-동적 메모리 할당
//	for (i = 0; i < N; i++)	{ //좌표 입력 받음
//		scanf(" %d %d", &list[i].x, &list[i].y);
//	}
//	qsort(list, N, sizeof(list[0]), compare); //좌표 정렬
//	for (i = 0; i < N; i++)	{ //정렬된 좌표 출력
//		printf("%d %d\n", list[i].x, list[i].y);
//	}
//	free(list);
//	return 0;
//}