#include<stdio.h>
main(){
    char name[100];
    printf("enter your name: ");
    gets(name);
    puts(strupr(name));
}