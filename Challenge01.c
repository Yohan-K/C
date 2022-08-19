//
// Created by kimjeonghyeon on 2022-08-19.
//
#include <stdio.h>
void Odd(int arr[], int size);
void Even(int arr[], int size);

int main(void)
{
    int arr[10];
    int num, i;
    printf("총 10개의 숫자 입력 \n");
    for(i=0; i<10; i++) {
        printf("입력: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    Odd(arr, sizeof(arr)/sizeof(int));
    Even(arr, sizeof(arr)/sizeof(int));
}

void Odd(int arr[],int len)
{
    int i;
    printf("홀수 출력:");
    for(i=0;i<len;i++) {
        if (arr[i] % 2 == 1) {
            if(arr[i]==9) // 마지막 숫자 이후에 오는 ','를 제거하기 위한 코드
                printf("%d ", arr[i]);
            else
                printf("%d, ", arr[i]);
        }
    }
    printf("\n");
}

void Even(int arr[],int len)
{
    int i;
    printf("짝수 출력:");
    for (i=0;i<len;i++) {
        if (arr[i] % 2 == 0) {
            if(arr[i]==0) // 마지막 숫자 이후에 오는 ','를 제거하기 위한 코드
                printf("%d ", arr[i]);
            else
                printf("%d, ", arr[i]);
        }
    }
    printf("\n");
}