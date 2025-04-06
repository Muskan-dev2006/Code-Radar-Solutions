// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int seen[256] = {0}; 
    int i, j = 0;

    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            str[j++] = str[i];
            seen[(unsigned char)str[i]] = 1;
        }
    }

    str[j] = '\0'; 
    printf("%s\n", str);
    return 0;
}
