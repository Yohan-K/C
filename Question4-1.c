//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>

int main(void)
{
    int num;
    printf("���� �Է�: ");
    scanf("%d", &num);
    num = ~num;
    num = num + 1;
    printf("��ȣ�� �ٲ� ��� : %d \n", num);
    return 0;
}