#include<stdio.h>
main(){
    float c,f;
   
    printf("Enter a temperature in Celcius:");
    scanf("%f",&c);
     f=(c*9/5)+32;
    printf("The temperature in Fahrenheit:%0.2f",f);
}