#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    char a[50] = 'hello world';
    printf("%c\0", a);
    return 0;
}