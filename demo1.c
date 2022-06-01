#include<stdio.h>
int no=21;
void demo()
{
    printf("inside demo\n");
    int i=10;
    auto int j=20;
    auto int k;
    printf("%d\n",k);
}
int main()
{
int value =41;
printf("inside main\n");
demo();
return 0;
}