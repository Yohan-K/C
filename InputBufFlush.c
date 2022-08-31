//
// Created by kimjeonghyeon on 2022-08-31.
//
#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
    while(getchar()!='\n');
}
int main(void)
{
    char perID[7]; // NULL 문자를 포함한 길이
    char name[10];

    fputs("주민번호 앞 6자리 입력: ", stdout);
    fgets(perID, sizeof(perID), stdin);
    ClearLineFromReadBuffer(); // 입력 버퍼 비우기

    fputs("이름 입력: ",  stdout); // OS가 Default로 모니터를 출력 디바이스로 설정
    fgets(name, sizeof(name), stdin);

    printf("주민번호: %s\n", perID);
    printf("이름: %s\n", name);
    return 0;
}
