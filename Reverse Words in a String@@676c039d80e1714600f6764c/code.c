// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}

void compressString(char *input, char *output) {
    int i = 0, j = 0;
    int start;

    while (input[i]) {
        while (input[i] && isspace(input[i]))
            output[j++] = input[i++];

        start = j;
        while (input[i] && !isspace(input[i]))
            output[j++] = input[i++];
        reverseWord(output, start, j - 1);
    }

    output[j] = '\0';
}

int main() {
    char str[100];        
    char compressed[200]; 
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    compressString(str, compressed);
    printf("%s\n", compressed);

    return 0;
}
