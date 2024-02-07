////B.2309 - 일곱 난쟁이
//#include <stdio.h>
//
//int main() {
//	int arr[9];  //입력 받을 9개의 키
//	int sum=0;  //키의 합
//	int temp;
//	int f1 = 0, f2 = 0;  //거짓 난쟁이
//	for (int i = 0; i < 9; i++) {  //입력 받음
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	for (int i = 0; i < 9; i++) {  //오름차순 정렬
//		for (int j = 0; j < 9; j++) {
//			if (arr[j] > arr[i]) {
//				temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 9; i++) {  //9개에서 2개를 뺏을 경우 100이 되는 두 수 찾기
//		for (int j = 0; j < 9; j++) {
//			if ((sum - arr[i] - arr[j]) == 100) {
//				f1 = i;
//				f2 = j;
//			}
//		}
//	}
//	for (int i = 0; i < 9; i++) {
//		if (i != f1 && i != f2) {
//			printf("%d\n", arr[i]);
//		}
//	}
//	return 0;
//}