//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>

int main(void)
{
    int dan = 3;
    int num = 1;
    int input;
    printf("양의 정수 하나를 입력하세요: ");
    scanf("%d", &input);

    while(input)
    {
        printf("%d ", dan * num);
        num++;
        input--;
    }
    return 0;
}