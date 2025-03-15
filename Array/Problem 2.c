/* Problem 2: Write a program that finds the largest (biggest) integer
within a given array: [-99, 45, 100, 37, 89, -327, 245] and prints
that largest integer value. */

#include<stdio.h>
int main()
{
    int a[7]= {-99,45,100,37,89,-327,245};
    int max=a[0],i;
    for(i=1; i<7; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Max value is:%d\n",max);
    return 0;
}
