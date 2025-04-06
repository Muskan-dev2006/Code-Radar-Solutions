// Your code here...
#include <stdio.h>
#include <string.h>
int expandFromCenter(char str[], int left, int right) {
    while (left >= 0 && right < strlen(str) && str[left] == str[right]) {
        left--;
        right++;
    }
    return right - left - 1; 
}

int main() {
    char str[1000];
    scanf("%s", str);

    int start = 0, end = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int len1 = expandFromCenter(str, i, i);    
        int len2 = expandFromCenter(str, i, i + 1); 
        int maxLen = (len1 > len2) ? len1 : len2;

        if (maxLen > end - start) {
            start = i - (maxLen - 1) / 2;
            end = i + maxLen / 2;
        }
    }
    for (int i = start; i <= end; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
