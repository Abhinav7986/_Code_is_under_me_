#include<stdio.h>
float force(float mass);

int main(){
    float m;
    printf("Enter the value of mass in kgs: ");
    scanf("%f", &m);
    printf("The value of force of Newton in %0.2f N", force(m));

    return 0;
}
float force(float mass){
    float result = mass * 9.8;
    return result;
}