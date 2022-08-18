//
// Created by kimjeonghyeon on 2022-08-18.
//
// 포인터 변수가 참조하는 대상의 변경을 허용하지 않는 const 선언
#include <stdio.h>

int main(void)
{
    int num=20;
    int* ptr = &num;
    // *ptr=30;  // 컴파일 에러
    num = 40;
    printf("num: %d \n" , num);
    return 0;
}