//
// Created by kimjeonghyeon on 2022-08-31.
//
#include <stdio.h>
int main(void)
{
    int ch;

    while(1){
        ch=getchar();
        if(ch==EOF)
            break;
        putchar(ch);
    }
    return 0;
}