#include<stdio.h>
struct  employee{
    // int id;
     int roll;
    char name[100];
    int chemistry;
    int mathematics;
    int physics; 
}s[100];

int main(){
    int n;
    printf("Enter size of an Array:");
    scanf("%d",&n);
    
    printf("\n");

    for(int i=0;i<n;i++){
        printf("Enter details of Student %d:\n",i+1);
        

        printf("Enter Roll no:");
        scanf("%d",&s[i].roll);

         printf("Enter NAME:");
        scanf("%s",&s[i].name);

        printf("Enter Chemistry :");
        scanf("%d",&s[i].chemistry);

        printf("Enter Mathematics:");
        scanf("%d",&s[i].mathematics);

        printf("Enter Physics:");
        scanf("%d",&s[i].physics);

    }
    printf("\n");

    for(int i=0; i<n;i++){
        int sum;
        float per;
        sum=s[i].chemistry+s[i].mathematics+s[i].physics;
        per=(sum*100)/300;
        printf("%s(%d)\nCHEMISTRY:%d\nMATHEMATICS:%d\nPHYSICS:%d\nTotle:%d/300\nPercent:%f%%\n",s[i].name,s[i].roll,s[i].chemistry,s[i].mathematics,s[i].physics,sum,per);

    }
    printf("\n");

}