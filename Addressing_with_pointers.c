#include<stdio.h>
int main(){
    int i = 72;
    int *j;
    j = &i;
    char a = 'c';
    char *p;
    p = &a;

    printf("The Address of i = %u\n", &i);
    printf("The Address of i = %u\n", j);
    printf("The Address of j = %u\n", &i);
    printf("The Value of i = %d\n", j);
    printf("The Value of i = %d\n", *(&i));
    printf("The Value of j = %d\n", *(&j));
    printf("The Value of i = %d\n", *j);
    printf("The Address of j = %u\n", &j);

    printf("The value of a = %u\n", &a);
    printf("The value of p = %u\n", p);
    printf("The value of p = %c\n", a);

    return 0;
}