//
// Created by kimjeonghyeon on 2022-08-18.
//
// 하나의 포인터 변수를 대상으로 하는 두 가지 형태의 const 선언
int main(void)
{
    int num=10;
    int age=20;
    const int* const ptr=&num;
    // *ptr=20; // 컴파일 에러!
    // ptr=&age; // 컴파일 에러!
}