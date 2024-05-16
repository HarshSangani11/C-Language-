#include<stdio.h>
int main(){
    int r,c,sum=0;
    
    printf("Enter Number of Rows:");
    scanf("%d",&r);
    printf("Enter Number of Columns:");
    scanf("%d",&c);
    int array[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter Element %d %d:",i,j);
            scanf("%d",&array[i][j]);
        }
       printf("\n");
    }
    for(int i=0;i<r;i++){
        sum+=array[i][i];
        printf("%d",sum);
    }
}