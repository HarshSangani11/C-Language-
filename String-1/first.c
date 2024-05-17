#include<stdio.h>

main(){
    char array[]="hello world";
    for(int i=0;array[i] != NULL;i++){
        if(array[i]>='a'&& array[i]<='z'){
            array[i]-=32;
        }
        printf("%c",array[i]);
    }
    }