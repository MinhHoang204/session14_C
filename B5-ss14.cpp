#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            if (!inWord) {
                inWord = 1; 
                count++;
            }
        } else {
            inWord = 0; 
        }
    }

    return count;
}

int main() {
    char str[200]; 

    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin); 

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int wordCount = countWords(str); 
    printf("So tu trong chuoi: %d\n", wordCount);

    return 0;
}

