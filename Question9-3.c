//
// Created by kimjeonghyeon on 2022-08-17.
//
#include <stdio.h>

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[4];
    int total=0, i;

    printf("%d \n", arr[4]);
    printf("%d \n", &arr[4]);
    printf("%d \n", *ptr);

    for(i=0; i<5; i++)
        total += *(ptr--);

    printf("%d ", total);
    return 0;
}