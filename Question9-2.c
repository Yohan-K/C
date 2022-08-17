//
// Created by kimjeonghyeon on 2022-08-15.
// ptr을 대상으로 덧셈연산을 하여, 그 결과로 반환되는 주소 값을 통해서 모든 배열요소에 접근하여 값을 2씩 증가
//
#include <stdio.h>

int main(void)
{
    int i, num=5;
    int arr[5] ={1, 2, 3, 4, 5};
    int *ptr = arr;

    for(i=0; i<num; i++) {
        printf("%d ", *(ptr+i)+2);
    }

    return 0;
}