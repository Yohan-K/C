#include <stdio.h>

void PrintName();
void PrintInfo();

int main() {
    //printf("Hello, World!\n");
    PrintName();
    PrintInfo();
    return 0;
}

// 문제 1
// 본인의 이름을 출력하는 프로그램을 작성. 단, printf 함수는 한 번만 호출해야 한다.
void PrintName() {
    printf("김정현\n김 정 현\n김  정  현\n");
}

// 이름, 주소, 전화번호 출력
void PrintInfo() {
    printf("이름: %s", "김정현\n");
    printf("주소: %s", "경기도 의정부시\n");
    printf("전화번호: %s", "010 7574 4125\n");
}
