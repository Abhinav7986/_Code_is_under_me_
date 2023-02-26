#include <stdio.h>
#include <stdlib.h> 
#include <time.h> //this header file essential for the date and time.

int main(){
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // Generating Random Numbers Between 1 to 100.
    printf("%d", number);
    return 0;

}