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
    printf("�� 10���� ���� �Է� \n");
    for(i=0; i<10; i++) {
        printf("�Է�: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    Odd(arr, sizeof(arr)/sizeof(int));
    Even(arr, sizeof(arr)/sizeof(int));
}

void Odd(int arr[],int len)
{
    int i;
    printf("Ȧ�� ���:");
    for(i=0;i<len;i++) {
        if (arr[i] % 2 == 1) {
            if(arr[i]==9) // ������ ���� ���Ŀ� ���� ','�� �����ϱ� ���� �ڵ�
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
    printf("¦�� ���:");
    for (i=0;i<len;i++) {
        if (arr[i] % 2 == 0) {
            if(arr[i]==0) // ������ ���� ���Ŀ� ���� ','�� �����ϱ� ���� �ڵ�
                printf("%d ", arr[i]);
            else
                printf("%d, ", arr[i]);
        }
    }
    printf("\n");
}