    //Print all the positive Even numbers from 1 to 100

#include<stdio.h>
int main()
{
    int i=2;    // initialization
    while(i<=100) // condition
    {
        printf("%d\n",i);
        i=i+2;    // increment/decrement
    }

    //Print all the negative Odd numbers from 1 to 100

    int j=1;    // initialization
    while(j<=100) // condition
    {
        printf("     %d\n",j);
        j=j+2;    // increment/decrement
    }

    return 0;
}
