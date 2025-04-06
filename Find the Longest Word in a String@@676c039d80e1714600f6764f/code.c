// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(char *str, char *longestWord) {
    int maxLen = 0, currLen = 0;
    int i = 0, start = 0, maxStart = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (currLen == 0) start = i;  
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }

        if (str[i] == '\0') break;
        i++;
    }

    strncpy(longestWord, str + maxStart, maxLen);
    longestWord[maxLen] = '\0';  
}

int main() {
    char str[200];
    char longestWord[100];
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    findLongestWord(str, longestWord);

    printf("%s\n", longestWord);

    return 0;
}
