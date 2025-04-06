// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}

void reverseWords(char *str) {
    int len = strlen(str);

    reverse(str, 0, len - 1);
    int start = 0, end;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            reverse(str, start, end);
            start = i + 1;
        }
    }
}

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseWords(str);

    printf("%s\n", str);
    return 0;
}
