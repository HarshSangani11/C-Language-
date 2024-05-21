#include<stdio.h>
int main(){
    char name[100];
    int count[256] = {0};
    printf("Enter Any String : ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++) {
        count[name[i]]++;
    }
    printf("Character Frequency\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("%c  %d\n", i, count[i]);
        }
    }
    return 0;
}
