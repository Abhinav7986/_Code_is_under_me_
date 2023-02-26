#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main(){
    int x = 5, y = 9;
    

    // printf("The numbers is before swap %d and %d\n", x, y);
    // wrong_swap(x, y);
    // printf("The numbers is after swap %d and %d\n", x, y);

    printf("The numbers is before swap %d and %d\n", x, y);
    swap(&x, &y);
    printf("The numbers is after swap %d and %d\n", x, y);
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}