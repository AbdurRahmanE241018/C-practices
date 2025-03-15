#include<stdio.h>
int main()
{
    int a[3];
    a[0]=10;
    a[1]=5;
    a[2]=200;

    int x=a[0]+a[1];

    printf("%d\n\n",x);

    a[2]=30;
    x=a[0]+a[2];

    printf("%d\n",x);

    return 0;
}
