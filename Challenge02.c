//
// Created by kimjeonghyeon on 2022-08-19.
//
#include <stdio.h>
int main(void)
{
    char arr[30];
    int cnt=0, num=0;
    printf("10진수 정수 입력: ");
    scanf("%d", &num);
    while(num>0) {
        //printf("%d \n", num);
        arr[cnt++]=num % 2;
        num /= 2;
    }

    while(cnt>0)
    {
        printf("%d", arr[--cnt]);
    }
    return 0;
}