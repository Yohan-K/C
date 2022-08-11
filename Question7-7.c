//
// Created by kimjeonghyeon on 2022-08-11.
//
#include <stdio.h>
int main(void)
{
    int i=0, j=0;

    while(i<5)
    {
        while(j<i)
        {
            printf("o ");
            j++;
        }

        j=0; // 초기화가 포인트
        printf("* \n");
        i++;
    }
    return 0;
}
