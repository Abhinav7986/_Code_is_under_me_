#include<stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){
    GoodMorning();
    return 0;
}

void GoodMorning(){
    printf("Good Morning! Prince.\n");
    GoodAfternoon();
}

void GoodAfternoon(){
    printf("Good Afternoon! Prince.\n");
    GoodNight();   
}

void GoodNight(){
    printf("Good Night! Prince.\n");
}