#include<stdio.h>
int main(){
    int i = 0;
    int *j;
    j = &i;

    printf("Add i = %u\n", &i);
    printf("Add i = %u\n", j);
    printf("Add j = %u\n", &i);
    printf("Value i = %d\n", j);
    printf("Value i = %d\n", *(&i));
    printf("Value i = %d\n", *j);
    return 0;
}