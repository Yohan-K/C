//
// Created by kimjeonghyeon on 2022-08-15.
// 포인터 변수 ptr에 저장된 값을 변경시켜가면서 배열요소에 접근
//
#include <stdio.h>

int main(void)
{
    int i;
    int arr[5] ={1, 2, 3, 4, 5};
    int *ptr = arr;

    for(i=0; i<5; i++) {
        *(ptr++)+=2; // +=2 먼저 계산 후 후위 증가
    }
    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}