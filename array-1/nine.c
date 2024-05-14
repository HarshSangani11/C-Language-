#include<stdio.h>
int main(){

    int size;

    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of arr %d: ", i);
        scanf("%d",&arr[i]);
    }

    for (int j = 0; j < size; j++)
    {
        arr[j]*= arr[j];
        printf("\nThe value of arr %d: %d",j,arr[j]);
    }

    return 0;
}