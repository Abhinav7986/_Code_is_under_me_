#include<stdio.h>
float temperature(int celcius);
int main(){
    float x;
    printf("Enter the celcius: ");
    scanf("%f", &x);

    printf("Fahrenheit is %f", temperature(x));
    return 0;
}

float temperature(int celcius){
    int result;
    result = (celcius * 9/5)+ 32;
    return result;
}
