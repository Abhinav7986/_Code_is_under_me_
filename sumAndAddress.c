#include<stdio.h>
void sumAndAdd(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)*sum/2;
}
int main(){
    int i, j, a;
    float ag;
    i = 5;
    j = 6;
    sumAndAdd(i, j, &a, &ag);
    printf("The value of sum is %d\n", a);
    printf("The avg of i and j is %.5f\n", ag);
    return 0;
}