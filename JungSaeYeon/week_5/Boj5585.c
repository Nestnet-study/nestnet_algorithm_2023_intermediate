// 5585 - 거스름돈
#include <stdio.h>

int main() {
    int coin[] = { 500,100,50,10,5,1 };  //사용 가능한 거스름돈 동전
    int money, i = 0, cnt = 0;  //물건의 값, 배열의 인덱스 값, 사용한 동전의 개수
    scanf("%d", &money);

    money = 1000 - money;  //받은 돈에서 물건의 값을 뺀 거스름돈 값
    while (money != 0) {  //거스름돈이 0이 될 때까지 반복
        if (coin[i] > money) {  //동전이 거스름돈보다 클 경우
            i++;  //배열의 다음 값 = 값이 더 작은 동전
            continue;
        }
        else {  //동전이 거스름돈보다 크지 않을 경우
            money -= coin[i];  //거스름돈에서 동전 값 빼기
            cnt++;  //사용한 동전 수 증가
        }
    }
    printf("%d\n", cnt);
    return 0;
}
