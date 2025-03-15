#include<stdio.h>
int main()
{
    int x[3][3]= {10,11,12,
                  20,21,22,
                  30,40,50};
    printf("%d\n",x[1][2]);
    int y=x[0][0]+x[2][2];
    printf("Value of y:%d\n",y);
    return 0;
}
