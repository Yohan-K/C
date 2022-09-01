//
// Created by kimjeonghyeon on 2022-09-01.
//
#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void)
{
    struct point pos = {10, 20};
    struct person man={"이승기", "010-1212-0001", 21};

    printf("%p %p \n", &pos, &pos.xpos);
    printf("%p %p \n", &man, man.name); // 배열 이름은 첫 번째 주소를 가르키기 때문에 '&' 연산자가 필요없다.
    return 0;

}