#include<stdio.h>
int main(){
    int i = 5;
    int *j = &i;
    int **k = &j;
    int ***l = &k;
    int ****m = &l;

    printf("%u\n", *j);
    printf("%u\n", *(&i));
    printf("The adress of j is %u\n", *(&j));
    printf("The adress of j is %u\n", &j);
    printf("pointers to pointers %u\n", **k);
    printf("pointers to pointers to pointers%u\n", ***l);
    printf("pointers to pointers to pointers  to pointers%u\n", ****m);
    return 0;
}