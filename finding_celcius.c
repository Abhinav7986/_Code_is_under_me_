#include<stdio.h>
float temperature(int fahrenheit);
int main(){
    float x;
    printf("Enter the fahrenheit: ");
    scanf("%f", &x);

    printf("celcius is %f", temperature(x));
    return 0;
}

float temperature(int fahrenheit){
    float result;
    result = (fahrenheit - 32) * 5/9;
    return result;
}