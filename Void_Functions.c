#include <stdio.h>

void display();
int main(){
    int a = 5;
    int b = 6;
    printf("It initializing the 'display' Function\n");
    display();// Function Calling
    printf("It's Works\n");
    printf("%d", a + b);

    return 0;
} 

//Function Definition
void display(){
    printf("Hello world\n");
}