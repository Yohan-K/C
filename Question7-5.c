//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>

int main(void)
{
    int sum = 0, i = 0;
    int num;
    int count;
    printf("�� ���� ������ �Է��Ͻó���? ������ �Է�: ");
    scanf("%d", &count);
    while(i++<count)
    {
        printf("�������� �Է����ּ���: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("��հ�(�Ҽ������� ����): %f \n", (double)sum/count);
    return 0;
}
