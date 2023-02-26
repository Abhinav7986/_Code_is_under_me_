#include<stdio.h>
int times(int a){
    int *temp = a* 10;
    // int b = temp ;
    return temp;
}
int main(){
    int i = 5;
    printf("The value of five before increasing %d\n", i);
    times(i);
    return 0;
}