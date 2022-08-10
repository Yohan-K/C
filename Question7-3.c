//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int sum = 0;
    int num = 0;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    sum += num;
    while(num)
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("합 계: %d", sum);
    exit(0);
}