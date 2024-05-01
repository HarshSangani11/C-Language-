#include<stdio.h>
int main(){
    int a;
    printf("Enter A Number:");
    scanf("%d",&a);
    while (a>=1)
    {
        if(a % 2 != 0)
        {
        printf("%d \n",a);
        }
        a--;
    }
    return 0;
    
}