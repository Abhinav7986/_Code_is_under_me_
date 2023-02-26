#include<stdio.h>

void printAdd(int a){
    printf("Print the value of a %u\n", &a);
}
int main(){
    int i = 9;
    printf("print the value of Variable %d\n", i);
    printAdd(i);
    printf("print the address of Variable %u\n", &i);
    return 0;
}