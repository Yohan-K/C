//
// Created by kimjeonghyeon on 2022-08-23.
//
#include <stdio.h>
int main(void)
{
    int num1=10, num2=20, num3=30;
    int * arr1[3] = {&num1, &num2, &num3};
    printf("%d ", *arr1[0]);

    int arr2[3] = {num1, num2, num3};
    int * ptr2 = arr2;
    printf("%d ", arr2[1]);
    printf("%d ", ptr2[2]);

    char str1[] = "My String";
    str1[0] = "O"; // 변수 형태의 문자열이기 때문에 가능
    // str1 = "Our String"; str1은 상수 형태의 포인터이기 때문에 에러 발생!

    char * str2 = "Your String";
    // str2[0] = "M"; // 상수 형태의 문자열이기 때문에 에러 발생!
    str2 = "They String"; // str2가 가리키는 자동 할당된 문자열의 위치만 바뀌는 것이므로 가능

    return 0;
}