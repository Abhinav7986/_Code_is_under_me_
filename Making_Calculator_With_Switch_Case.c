#include<stdio.h>
int main(){
    float a;
    float b;
    char operator;
    float result;

    printf("Enter the first number: \n");
    scanf("%f", &a);

    printf("Enter the operator number: \n");
    scanf("%c", &operator);

    printf("Enter the second number: \n");
    scanf("%f", &b);
     
    switch(operator){
        case '+':
        result = a + b;
            printf("%f", result);
            break;

        case '-':
        result = a - b;
            printf("%f", result);
            break; 

        case '/':
        result = a / b;
            printf("%f", result);
            break;

        case '*':
        result = a * b;
            printf("%f", result);
            break;

        default:
            printf("The given value is invalid!");
            break;
        
    }
    return 0;
}