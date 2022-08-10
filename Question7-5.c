//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>

int main(void)
{
    int sum = 0, i = 0;
    int num;
    int count;
    printf("몇 개의 정수를 입력하시나요? 정수값 입력: ");
    scanf("%d", &count);
    while(i++<count)
    {
        printf("정수값을 입력해주세요: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("평균값(소수점이하 포함): %f \n", (double)sum/count);
    return 0;
}
