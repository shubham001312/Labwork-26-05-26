// Write a Program in C to create a simple calculator using switch
#include <stdio.h>

int main(){
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(op){
        case '+':
            result = num1 + num2;
            printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);
            break;
        case '/':
            if(num2 == 0){
                printf("Error: Division by zero is not allowed.\n");
            }
            else{
                result = num1 / num2;
                printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}