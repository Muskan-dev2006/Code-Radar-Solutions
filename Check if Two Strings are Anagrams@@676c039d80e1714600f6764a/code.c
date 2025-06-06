// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char *str1, char *str2) {
    int count[256] = {0};

    if (strlen(str1) != strlen(str2)) return 0;

    for (int i = 0; str1[i] && str2[i]; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    scanf("%s", str1);

    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
