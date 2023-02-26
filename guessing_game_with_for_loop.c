#include <stdio.h>
#include <stdlib.h> 
#include <time.h> //this header file essential for the date and time.

int main(){
    int number, guess;
    srand(time(0));
    number = rand() % 100 + 1; // Generating Random Numbers Between 1 to 100.
    // printf("%d\n", number);

    /* Making Game with keeping running loop*/
    for (int nguesses = 1; guess != number; nguesses++)
    {    
        printf("Guess the number between 1 to 100: ");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess<number)
        {
            printf("Higher Number Please!\n");
        }
        else{
            printf("You Guess in (%d) Attempts \n", nguesses);
            printf("___||**'YOU WON!**'||___");
        } 
    } 
    return 0;
}