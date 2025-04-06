// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000

int cmp(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

int countDistinctSubstrings(char str[]) {
    int len = strlen(str);
    char *suffixes[MAX_LEN * (MAX_LEN + 1) / 2];
    int count = 0;

    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            char *substr = (char *)malloc(j + 1);
            strncpy(substr, str + i, j);
            substr[j] = '\0';
            suffixes[count++] = substr;
        }
    }

    qsort(suffixes, count, sizeof(char *), cmp);

    int unique = 1;  
    for (int i = 1; i < count; i++) {
        if (strcmp(suffixes[i], suffixes[i - 1]) != 0) {
            unique++;
        }
    }

    for (int i = 0; i < count; i++) {
        free(suffixes[i]);
    }

    return unique;
}

int main() {
    char str[MAX_LEN];
    scanf("%s", str);
    printf("%d\n", countDistinctSubstrings(str));
    return 0;
}
