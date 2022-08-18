//
// Created by kimjeonghyeon on 2022-08-18.
//
// 포인터 변수의 상수화
int main(void)
{
    int num1=20;
    int num2=30;
    int * const ptr=&num1;
    //ptr=&num2; // 컴파일 에러!
    *ptr=40; // 컴파일 성공!
}