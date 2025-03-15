/* Problem-3:
Take three arrays [A, B and AB] of float
data type of size 5. Scan the values of two
arrays [A and B] from user. Now assign the
summation of the two arrays to the AB.
(AB[i] = A[i] + B[i]).
Finally, print the values of AB array.*/

#include<stdio.h>
int main()
{
    int a[5],b[5],ab[5];
    int i;
    printf("Enter the value of A:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value of B:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<5; i++)
    {
        ab[i]=a[i]+b[i];
    }
    printf("Value of AB array:",ab[i]);
    for(i=0; i<5; i++)
    {
        printf("%d ",ab[i]);
    }
    return 0;
}


