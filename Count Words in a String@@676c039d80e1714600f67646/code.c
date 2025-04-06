// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char *str) {
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
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int words = countWords(str);
    printf("%d\n", words);

    return 0;
}
