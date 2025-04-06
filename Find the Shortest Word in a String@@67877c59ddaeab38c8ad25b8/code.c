// Your code here...
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int minLen = INT_MAX;
    char shortestWord[100];
    int i = 0;

    while (str[i] != '\0') {
        while (str[i] == ' ') i++; 

        int start = i;
        int wordLen = 0;

        while (str[i] != ' ' && str[i] != '\0') {
            wordLen++;
            i++;
        }

        if (wordLen > 0 && wordLen < minLen) {
            minLen = wordLen;
            strncpy(shortestWord, str + start, wordLen);
            shortestWord[wordLen] = '\0';
        }
    }

    if (minLen != INT_MAX) {
        printf("%s\n", shortestWord);
    } 

    return 0;
}
