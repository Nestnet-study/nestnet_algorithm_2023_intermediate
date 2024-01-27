////B.10974 - 모든 순열
//#include <stdio.h>
//
//char res[17];  //숫자와 공백 저장
//int N, chk[9];
//
//void dpl(int depth) {  //순열 생성 함수
//	int i;
//	if (depth == N)  //현재 깊이 = 입력한 깊이가 될 때까지
//		printf("%s", res);
//	for (i = 1; i <= N; i++) {
//		if (chk[i] == 1)  //이미 사용된 경우
//			continue;
//		chk[i] = 1;
//		res[2 * depth] = i + '0';  //현재 깊이
//		dpl(depth + 1);
//		chk[i] = 0;
//	}
//}
//int main() {
//	int i;
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//		res[2 * i + 1] = ' ';  //공백
//	res[2 * N - 1] = '\n';
//	dpl(0);
//	return 0;
//}