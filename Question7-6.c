//
// Created by kimjeonghyeon on 2022-08-11.
//
#include <stdio.h>

int main(void)
{
    int num=5;
    int sum=0, i=0;
    int input;
    while(i++<num)
    {
        printf("정수를 입력: ");
        scanf("%d", &input);
        while(input<1)
        {
            printf("정수는 1보다 커야합니다. 정수 재입력: ");
            scanf("%d", &input);
        }
        sum += input;
    }
    printf("%d", sum);
    return 0;
}

