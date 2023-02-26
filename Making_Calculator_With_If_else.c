#include<stdio.h>
int main(){
    float a, b;
    char op;
    printf("Enter the first number: \n");
    scanf("%f", &a);

    printf("Enter the Operator: \n");
    scanf(" %c", &op);

    printf("Enter the second number: \n");
    scanf("%f", &b);

    if (op == '+')
    {
        printf("The sum of a and b is %f", a + b );
    }
    if (op == '-')
    {
        printf("The difference of a and b is %f", a - b );
    }
    if (op == '/')
    {
        printf("The division of a and b is %f", a / b );
    }
    if (op == '*')
    {
        printf("The multiply of a and b is %f", a * b );
    }
    else{
        printf("\n The given value is not valid.");
    }
    
    return 0;
}