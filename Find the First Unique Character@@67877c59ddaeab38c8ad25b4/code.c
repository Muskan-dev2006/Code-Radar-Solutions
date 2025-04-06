// Your code here...
#include <stdio.h>
#include <string.h>

char findFirstUniqueChar(char *str) {
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    return '\0';
}

int main() {
    char str[100];
    scanf("%s", str);
    char result = findFirstUniqueChar(str);

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("-1\n"); 
    }

    return 0;
}
