#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char name;

    printf("Enter Integer Number:");
    scanf("%d",&num1);

    printf("Enter Float Number:");
    scanf("%f",&num2);

    printf("Enter Double Number:");
    scanf("%lf",&num3);

    printf("Enter Character Value:");
    scanf(" %c",&name);

    printf("Integer Number is: %d\n",num1);
    printf("Float Number is: %f\n",num2);
    printf("Double Number is: %lf\n",num3);
    printf("Character Number is: %c\n",name);

    return 0;
}

