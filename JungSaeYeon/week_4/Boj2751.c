////B.2571 - 수 정렬하기 2
//#include <stdio.h>
//#include <stdlib.h>
//
//int static compare(const void* first, const void* second) //비교 함수
//{
//    if (*(int*)first > *(int*)second) 
//        return 1;
//    else if (*(int*)first < *(int*)second) 
//        return -1;
//    else 
//        return 0;
//}
//
//int main(void)
//{
//    int N;
//    int arr[1000000] = { 0 };
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++) //배열 입력받기
//        scanf("%d", &arr[i]);
//    qsort(arr, N, sizeof(int), compare);  //퀵정렬 이용하여 배열 정렬
//    for (int i = 0; i < N; i++) //정렬된 배열 출력
//        printf("%d\n", arr[i]);
//    return 0;
//}
