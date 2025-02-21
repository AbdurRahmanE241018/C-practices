/* Take 3 integer variables named a, b, and c. Scan the values of these three variables from user. Then store the average of these three variables into a new float variable named average. Finally print the output like the following example:
Value of a: 10
Value of b: 20
Value of c: 30
Average of a, b, and c: 20.00
*/

#include <stdio.h>
int main()
{
    int a, b, c;
    float average;

    printf("Value of a: ");
    scanf("%d", &a);

    printf("Value of b: ");
    scanf("%d", &b);

    printf("Value of c: ");
    scanf("%d", &c);

    average = (a + b + c) / 3.0;

    printf("Average of a, b, and c: %.2f\n", average);

    return 0;
}
