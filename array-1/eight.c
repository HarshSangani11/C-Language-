#include<stdio.h>
main(){
   int size;

    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of arr %d: ", i);
        scanf("%d",&arr[i]);
    }


for(int i=size;i>=size;i--){
    printf("%d",arr[i]);
}

}