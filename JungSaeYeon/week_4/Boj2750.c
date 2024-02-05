////B.2750 - 수 정렬하기
//
//#include <stdio.h>
//int main() {
//	int N;  //입력받을 개수 
//	int temp;
//	int arr[1000] = { 0 };
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < N; i++)
//		printf("%d\n", arr[i]);
//	
//	return 0;
//}