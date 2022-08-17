//
// Created by kimjeonghyeon on 2022-08-15.
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