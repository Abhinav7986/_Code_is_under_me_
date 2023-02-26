#include<stdio.h>
int square(int num);

int main(){
    int x;
    printf("Enter the a number: ");
    scanf("%d", &x);

    printf("The square of %d ", square(x));
    return 0;
}

int square(int num){
    int x;
    x = num * num;
    return x;
}