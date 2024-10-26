#include<stdio.h>

int main(){
    /*
    Write a C program which will sum/add two integer numbers
    And then display the result

    */

    int number1, number2, option, number3;

    printf("Please enter two numbers for calculation: ");
    scanf("%d%d",&number1, &number2);

    printf("Please enter your options: 1 for addition, 2 for subtraction 3 for multiplication");
    scanf("%d",&option);

    //number1 = 300;
    //number2 = 700;
    if(option==1){
        //addition
        number3 = number1 + number2;
    }
    else if(option == 2){

        //substruction
        number3 = number1 - number2;
    }
    else if(option == 3){

        //multiplication
        number3 = number1 * number2;
    }

    printf("The result is: %d", number3);


    return 0;
}
