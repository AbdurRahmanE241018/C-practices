/*  Problem 1:Write a program that takes 10 integer numbers
as input from the user, stores them in an array, and then
calculates and prints the sum of those 10 numbers. */

#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter the values of the array :");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of the Array :%d\n",sum);
    return 0;
}
