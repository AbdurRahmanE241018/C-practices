/* Problem-4:
Take an array of integer data type of
size 5. Scan the values from the user.
Now print the output like the following
one Values in array: 10 25 20 15 30
Sum of odd values: 40
Sum of even values: 60 */

#include<stdio.h>
int main()
{
    int a[5],i,even_sum=0,odd_sum=0;
    printf("Enter the values:");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Values of Array: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
        if(a[i]%2==0)
            even_sum=even_sum+a[i];
        else
            odd_sum=odd_sum+a[i];
    }
    printf("\nSum of Odd values: %d\n",odd_sum);
    printf("Sum of Even values: %d\n",even_sum);
    return 0;
}
