#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d %d %d", n, ++n, n++);
    return 0;
}