#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; 

    printf("Nhap mot chuoi bat ky: ");
    fgets(input, sizeof(input), stdin); 

    // Xoa ky tu xuong dong '\n' do fgets them vao cuoi chuoi
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
        len--; 
    }

    printf("Chuoi vua nhap: %s\n", input);
    printf("Do dai chuoi: %zu\n", len);

    return 0;
}

