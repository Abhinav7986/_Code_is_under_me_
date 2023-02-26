#include<stdio.h>
void pattern(int n);
int main(){
    int a;
    printf("Enter a number to print lines: ");
    scanf("%d", &a);

    pattern(a);

    return 0;
}
// formula 2n - 1 to printing numbers of line.

void pattern(int n){
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    pattern(n - 1);
    for (int i=0;i<(2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}