#include<stdio.h>
int natural_numbers(int n);
int main(){
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    printf("The value of %d is %d", a, natural_numbers(a));
    return 0;
}

int natural_numbers(int n){
    printf("Calling natural numbers(%d)\n", n);
    if (n == 1 || n == 0){
        return 0;
    }
    else{
        return n + natural_numbers(n - 1);
    }
}