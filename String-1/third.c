#include<stdio.h>

main(){
    char array[]=" HelLo worLD";
    for(int i=0; array[i] != NULL;i++){
         if(array[i]>='a'&& array[i]<='z'){
            array[i]-=32;
        }
         else if(array[i]>='A'&& array[i]<='Z'){
            array[i]+=32;
         }
          printf("%c",array[i]);
}
       
    }
    