#include<stdio.h>
main(){
    char name[100];
    char firstname[100]="Harsh";
    char lastname[100]=" Sangani";
    char fullname[100];
    strcpy(fullname,strcat(firstname,lastname));
    puts(fullname);
}