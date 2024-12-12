#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Hello World 123!"; 
    int letterCount = 0;           

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { 
            letterCount++;
        }
    }

    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", letterCount);

    return 0;
}

