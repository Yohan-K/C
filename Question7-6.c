//
// Created by kimjeonghyeon on 2022-08-11.
//
#include <stdio.h>

int main(void)
{
    int num=5;
    int sum=0, i=0;
    int input;
    while(i++<num)
    {
        printf("������ �Է�: ");
        scanf("%d", &input);
        while(input<1)
        {
            printf("������ 1���� Ŀ���մϴ�. ���� ���Է�: ");
            scanf("%d", &input);
        }
        sum += input;
    }
    printf("%d", sum);
    return 0;
}

