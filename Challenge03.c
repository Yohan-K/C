//
// Created by kimjeonghyeon on 2022-08-20.
//
#include <stdio.h>
int main(void)
{
    //int num=10;
    int num;
    int arr[10], i;
    int begin=0, end=9;
    printf("%d\n", sizeof(arr));
    printf("총 10개의 숫자 입력\n");
    for(i=0; i<10; i++) {
        printf("입력: ");
        //scanf("%d", &arr[i]);
        scanf("%d", &num);
        //printf("%d\n", arr[i]);
        //if(arr[i]%2==0) {
        if(num%2==0) {
            printf("짝수 입력\n");
            //arr[--num] = arr[i];
            arr[end--] = num;
        } else {
            printf("홀수 입력\n");
            arr[begin++] = num;
        }
    }
    for(i=0; i<10; i++)
        printf("%d\n", arr[i]);
    return 0;
}