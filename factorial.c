#include<stdio.h>
int factorial(int x);
int main(){
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    printf("The value of %d is %d", a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Calling Factorial(%d)\n", x);
    if (x == 1 || x == 0){
        return 1;
    }
    else{
        return x * factorial(x - 1);
    }
}