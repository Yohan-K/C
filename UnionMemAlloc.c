//
// Created by kimjeonghyeon on 2022-09-02.
//
#include <stdio.h>

typedef struct sbox // 구조체 sbox의 정의
{
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef struct ubox // 구조체 ubox의 정의
{
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(void)
{
    SBox sbx;
    UBox ubx;
    printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3); // 각기 다른 sizeof(type) 만큼의 주소값
    printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3); // 세 주소값이 동일
    printf("%d %d \n", sizeof(SBox), sizeof(UBox)); // 16 8
    return 0;

}