#include <stdio.h>
#include <stdlib.h>
int num[1000000];
int compare(const void* front, const void* back)
//어떤 종류도 가리킬 수 있는 포인터, 해당 데이터를 변경할 수 없는 상수 포인터
{
    int num1 = *(int*)front;
    int num2 = *(int*)back;
    //const void*로 선언된 데이터a가 가리키는 메모리 주소에 있는 값을 정수로 해석해서 반환

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}
int main(void)
{
    int n;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &num[i]);
    }
    qsort(num, n, sizeof(int), compare);//정렬할 배열, 요소개수, 요소크기, 비교함수
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", num[j]);
    }
    return 0;
}
/*
qsort함수는 퀵 정렬 함수라고도 불린다. 
stdlib.h 헤더를 필요로 하고, 
qsort(정렬할 배열, 요소개수,요소크기, 비교함수); 이렇게 구성된다 
비교함수는 오름차순으로 할때는
a>b이면 return 양의정수, a<b이면 return 음의 정수, a==b이면 return 0하면 된다
이때 함수 만들때는 constvoid를 이용해 상수 지시 포인터 2개를 만들어준다.
*/