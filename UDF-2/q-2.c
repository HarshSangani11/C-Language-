#include<stdio.h>
count(char name[]){
    int c=0;
    for(int i=0;name[i] !=NULL;i++){
        c++;
    }
    return c;
}
main(){
    char name[]="harsh";
    printf("%d",count(name));
}