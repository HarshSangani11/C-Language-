#include<stdio.h>
int main(){
    int r,c;
    int max=0;
    printf("Enter Number of Rows:");
    scanf("%d",&r);
    printf("Enter Number of Columns:");
    scanf("%d",&c);
    int array[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter Element %d %d:",i,j);
            scanf("%d",&array[i][j]);
        }
      
    }

    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            if(array[i][j] > max)
            {
            max = array[i][j];
            }
        }   
    }
    printf("Max Element In Array = %d", max);
     return 0; 
}
