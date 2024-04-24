#include<stdio.h>
main(){
    float salry,hra,da,ta,ans;
    printf("Enter Salry:");
    scanf("%f",&salry);
    hra=(salry*10)/100;
    ta=(salry*5)/100;
    da=(salry*8)/100;
    ans=salry+hra+da+ta;
    printf("Gross Salary:%f",ans);

}