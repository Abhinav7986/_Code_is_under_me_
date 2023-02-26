#include<stdio.h>
float temperature(float kelvin);
int main(){
    float x;
    printf("Enter the value of Kelvin: ");
    scanf("%f", &x);

    printf("The value of Celsius: %f", temperature(x));
    return 0;
}

float temperature(float kelvin){
    float result;
    result = (kelvin - 273.15);
    return result;

}

// something wrong in this code beacuse i don't know, What is #QNAN0 thwowring?