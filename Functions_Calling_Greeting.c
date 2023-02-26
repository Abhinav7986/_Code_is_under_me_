#include<stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){
    GoodMorning();
    GoodAfternoon();
    GoodNight();
    return 0;
}

void GoodMorning(){
    printf("Good Morning! Prince.\n");
}

void GoodAfternoon(){
    printf("Good Afternoon! Prince.\n");
}

void GoodNight(){
    printf("Good Night! Prince.\n");
}