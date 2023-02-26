#include<stdio.h>

int sum(int a, int b); // it will take integer and as input in sum function.

// int main(){
//     int c;
//     c = sum(56, 63); // Function calling.
//     printf("%d", c);
//     return 0;
// }
int main(){
    int c; 
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    c = sum(x, y);
    printf("%d", c);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}