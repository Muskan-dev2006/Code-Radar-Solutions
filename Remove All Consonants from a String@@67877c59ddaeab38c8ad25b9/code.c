// Your code here...
#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100], result[100];
    int i = 0, j = 0;
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (!isalpha(str[i]) || isVowel(str[i])) {
            result[j++] = str[i];
        }
        i++;
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}
