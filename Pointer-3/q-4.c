#include <stdio.h>

main() {
    char *str = "Hello, world!";
    char *ptr[13]; 
       for(int i = 0; str[i] != '\0'; i++) {
        ptr[i] = &str[i];
          printf("%u %c\n",i, *ptr[i]);
    }
}
