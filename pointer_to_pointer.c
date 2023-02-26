#include<stdio.h>
int main(){
    int i = 787;
    int *ptr;
    int **ptr_to_ptr;

    ptr = &i;
    ptr_to_ptr = &ptr;
    printf("%u", **ptr_to_ptr);
    return 0;
}