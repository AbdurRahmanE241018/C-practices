/* Problem-1:
Take a two dimensional array of
integer data type of size [3 * 3].
Take the values from the user using
scanf(). Now print the average of all
the values. */


#include<stdio.h>
int main()
{
    int a[3] [3], i, j,sum=0;
    for(i=0; i < 3; i++)  // for row
    {
        for(j=0; j < 3; j++)  // for column
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i < 3; i++)  // for row
    {
        for(j=0; j < 3; j++)  // for column
        {
            printf("%d ", a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    float average=sum/9.0;
    printf("Average is: %f",average);
    return 0;
}
