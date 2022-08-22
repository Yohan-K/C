//
// Created by kimjeonghyeon on 2022-08-22.
//
// 변수 num에 접근하는 방법 4가지
// **dptr = 10.1;
// *ptr = 20.2;
// *ptr2 = 30.3;
// num = 40.4;
#include <stdio.h>

int main(void)
{
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%9p %9p \n", ptr, *dptr);
    printf("%9g %9g \n", num, **dptr);
    ptr2 = *dptr; // ptr2 = ptr 과 같은 문장
    *ptr2 = 10.99;
    printf("%9g %9g \n", num, **dptr);
    return 0;
}