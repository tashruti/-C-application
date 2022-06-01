#include<stdio.h>
int main()
{
    auto int istd=0;
    printf("enter your standard\n");
    scanf("%d",&istd);
    switch(istd)
    {
        case1:
        printf("your exam is at 8\n");
        break;
        case2:
        printf("your exam is at 9\n");
        break;
        case3:
        printf("your exam is at 10\n");
        break;
        case4:
        printf("your exam is at 11\n");
        break;
        case5:
        printf("your exam is at 12\n");
        break;
        default:
        printf("invalid statement");


    }
    return 0;
}