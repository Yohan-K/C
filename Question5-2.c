//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>

int main(void)
{
    double dnum1, dnum2;

    printf("�� ���� �Ǽ��� �Է�: ");
    scanf("%lf %lf", &dnum1, &dnum2);

    printf("������ ��� : %f \n", dnum1+dnum2);
    printf("������ ��� : %f \n", dnum1-dnum2);
    printf("������ ��� : %f \n", dnum1*dnum2);
    printf("�������� ��� : %f \n", dnum1/dnum2);

    return 0;
}