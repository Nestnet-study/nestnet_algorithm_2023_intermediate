#include <stdio.h>

int main() {
    int coin[6] = { 500,100,50,10,5,1 };
    int money;
    int i = 0, cnt = 0;
    scanf_s("%d", &money);

    money = 1000 - money;
    while (money > 0) 
    {
        //동전이 거스름돈보다 클 때
        if (coin[i] > money) 
        {
            i++;
            continue;
        }
        //동전이 거스름돈보다 작거나 같을 때
        else 
        {
            money -= coin[i];
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
