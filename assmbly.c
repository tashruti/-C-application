#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    asm
    {
        mov ax,a;
        mov bx,b;
        mov ax ,bx;
        mov c,ax;
        printf("c=%d",c);


    }
    return 0;
}