#include <stdio.h>

int main() {
    char name[100];
    int i, j, len = 0;

    printf("Enter a string: ");
    scanf("%s",name);

    while (name[len]!= '\0') {
        len++;
    }

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (name[i]!= name[j]) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }

    printf("The string is a palindrome.\n");

return 0;
}