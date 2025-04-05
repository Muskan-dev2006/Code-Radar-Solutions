// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compressString(char* str, char* compressed) {
    int len = strlen(str);
    char temp[200];
    int i = 0, j = 0;

    while (i < len) {
        char current = str[i];
        int count = 1;

        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        temp[j++] = current;

        if (count > 1) {
            char buffer[10];
            sprintf(buffer, "%d", count);
            for (int k = 0; buffer[k] != '\0'; k++) {
                temp[j++] = buffer[k];
            }
        }

        i++;
    }

    temp[j] = '\0';
    if (strlen(temp) < len) {
        strcpy(compressed, temp);
    } else {
        strcpy(compressed, str);
    }
}
