//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>
int main(void)
{
    char code;

    printf("아스키 코드 값을 정수의 형태로 입력하세요: ");
    // 서식 문자를 %c로 할 경우 문자 한 개만 입력받을 수 있으므로 문자를 여러 개 입력해도 한 개만 저장되고 나머지는 모두 무시된다.
    scanf("%d", &code);
    printf("%c", code);
    return 0;
}