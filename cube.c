#include<stdio.h>
int cube(int num);

int main(){
    int x;
    printf("Enter the a number: ");
    scanf("%d", &x);

    printf("The cube of %d ", cube(x));
    return 0;
}

int cube(int num){
    int x;
    x = num * num * num;
    return x;
}