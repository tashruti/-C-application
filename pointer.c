#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p=&(arr[0]);
    int *q=&(arr[4]);
    printf("Number of elementsbetween q and p are%d\n",q-p);
    p=p+3;
    printf("value of p%d\n",p);
    printf("value of q%d\n,q");
       q=q-3;
       printf("value of q %d\n",q);
       return 0;
}