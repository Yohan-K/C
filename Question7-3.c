//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int sum = 0;
    int num = 0;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);
    sum += num;
    while(num)
    {
        printf("������ �Է��ϼ���: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("�� ��: %d", sum);
    exit(0);
}