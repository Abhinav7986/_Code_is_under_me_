#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the side of square: ");
    scanf("%d", &side);

    printf("The area of square: %f\n", pow(side, 2));

    return 0;
}
