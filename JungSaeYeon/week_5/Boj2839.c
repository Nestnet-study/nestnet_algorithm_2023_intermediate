////2839 - 설탕 배달
//#include <stdio.h>
//
//int main() {
//    int N, cnt = 0; //설탕 무게 : N kg, 필요한 봉지 수 : cnt(처음에 0봉지부터 시작)
//    scanf("%d", &N);
//
//    while (1) {
//        if (N % 5 == 0) { //남은 설탕 무게가 5의 배수일 경우
//            cnt += N / 5;  //봉지를 5kg씩 가득 채운 후 (봉지 수는 5로 나눈 값만큼 증가)
//            break;  //종료
//        }
//        else {  //5의 배수가 아닐 경우
//            N -= 3;  //한 봉지에 3kg 채운 후 남은 무게 재기
//            cnt++;  //3kg 채운 봉지 수 증가
//        }
//        if (N <= 0)
//            break;
//        
//    }
//
//    if (N < 0) 
//        printf("-1\n");
//    else 
//        printf("%d\n", cnt);
//
//    return 0;
//}