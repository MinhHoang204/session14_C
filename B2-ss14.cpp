#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "HelloWorld"; 

    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ky tu trong chuoi, cach nhau bang dau cach:\n");

    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]); 
        if (i < strlen(str) - 1) { 
            printf(" "); 
        }
    }

    printf("\n");
    return 0;
}

