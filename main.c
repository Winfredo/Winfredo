#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    double result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter Operational sign: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    }else if(op == '-'){
        printf("%f", num1 - num2);
    }else if(op == '*'){
        printf("%f", num1 * num2);
    }else if(op == '/'){
        printf("%f", num1 / num2);
    }else{
        printf("Invalid operator entered");
    }

    return 0;
}
