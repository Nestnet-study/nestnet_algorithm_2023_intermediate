//B.2503 - 숫자 야구
#include <stdio.h>

//num=현재까지 계산된 수의 총 개수, questions=민혁이가 물어본 수의 배열
int possibleNumbers(int num, int* questions, int* strikes, int* balls, int questionCount) {
    int count = 0;

    for (int i = 123; i <= 987; i++) {  //모든 수를 반복하여 확인
        int num1 = i / 100;    // 백의 자리
        int num2 = (i / 10) % 10;   // 십의 자리
        int num3 = i % 10;    // 일의 자리

        if (num1 == 0 || num2 == 0 || num3 == 0 || num1 == num2 || num2 == num3 || num3 == num1) {
            continue;  // 0이나 중복된 숫자를 가지는 수는 제외
        }

        int valid = 1;
        for (int j = 0; j < questionCount; j++) {
            int guess1 = questions[j] / 100;
            int guess2 = (questions[j] / 10) % 10;
            int guess3 = questions[j] % 10;

            int strike = 0;
            int ball = 0;

            if (guess1 == num1) strike++;
            if (guess2 == num2) strike++;
            if (guess3 == num3) strike++;

            if (guess1 == num2 || guess1 == num3) ball++;
            if (guess2 == num1 || guess2 == num3) ball++;
            if (guess3 == num1 || guess3 == num2) ball++;

            if (strike != strikes[j] || ball != balls[j]) {
                valid = 0;
                break;  // 현재 수가 조건을 만족하지 않으면 다음 수로 넘어감
            }
        }

        count += valid;
    }

    return count;
}

int main() {
    int questionCount;
    scanf("%d", &questionCount);

    int questions[100], strikes[100], balls[100];

    for (int i = 0; i < questionCount; i++) {
        scanf("%d %d %d", &questions[i], &strikes[i], &balls[i]);
    }

    int result = possibleNumbers(0, questions, strikes, balls, questionCount);

    printf("%d\n", result);

    return 0;
}
