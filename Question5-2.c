//
// Created by kimjeonghyeon on 2022-08-10.
//
#include <stdio.h>

int main(void)
{
    double dnum1, dnum2;

    printf("µÎ °³ÀÇ ½Ç¼ö¸¦ ÀÔ·Â: ");
    scanf("%lf %lf", &dnum1, &dnum2);

    printf("µ¡¼ÀÀÇ °á°ú : %f \n", dnum1+dnum2);
    printf("»¬¼ÀÀÇ °á°ú : %f \n", dnum1-dnum2);
    printf("°ö¼ÀÀÇ °á°ú : %f \n", dnum1*dnum2);
    printf("³ª´°¼ÀÀÇ °á°ú : %f \n", dnum1/dnum2);

    return 0;
}