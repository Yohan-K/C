//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>
int main(void)
{
    int dan = 0;
    int num = 9;
    printf("몇 단의 구구단을 시작할까요? 정수값 입력: ");
    scanf("%d", &dan);
    while(num)
    {
        printf("%d * %d = %d \n", dan, num, dan * num);
        num--;
    }
    return 0;
}