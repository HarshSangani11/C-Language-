#include<stdio.h>

main(){
    char array[]="HELLO WORLD";
    for(int i=0;array[i] != NULL;i++){
        if(array[i]>='A'&& array[i]<='Z'){
            array[i]+=32;
        }
        printf("%c",array[i]);
    }
    }