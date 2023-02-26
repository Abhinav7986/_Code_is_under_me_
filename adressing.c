#include<stdio.h>
int main(){
    int i = 5;
    int *ptr;
    ptr = &i;
    printf("%d\n", i);
    printf("%u\n", ptr);
    printf("%d\n", &i);
    printf("%u\n", &ptr);

    return 0;
}