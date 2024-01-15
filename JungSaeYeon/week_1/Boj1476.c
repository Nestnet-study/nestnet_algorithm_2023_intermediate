//B.1479 날짜 계산

#include <stdio.h>
int main() {
	int E, S, M, e, s, m;  //대문자 : 입력 받을 수, 소문자 : 넘어갈 경우
	int year = 0; //년도
	scanf("%d %d %d", &E, &S, &M);
	e = s = m = 1;  //초기화
	while (1) {
		year++;
		if (E == e && S == s && M == m) {  //입력받은 수와 넘어갈 경우가 같으면 종료
			break;
		}
		e++, s++, m++;
		if (e == 16) e = 1;  //범위 넘어가는거 체크
		if (s == 29) s = 1;
		if (m == 20) m = 1;
	}
	printf("%d", year);
	return 0;
}