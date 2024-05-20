#include<stdio.h>
main(){
    char str1[100];
    char str2[100];
    printf("Enter First String:");
    gets(str1);
    printf("Enter Second String:");
    gets(str2);

    if(strcmp(str1,str2) == 0){
        printf("String are equal");
    }
    else{
        printf("String are not equal");
    }
}