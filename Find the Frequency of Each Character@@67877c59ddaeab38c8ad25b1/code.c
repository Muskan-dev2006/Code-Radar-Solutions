// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX 256  // For all ASCII characters

void findFrequency(char str[]) {
    int freq[MAX] = {0};

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }


    for (int i = 0; i < MAX; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[1000];
    scanf("%s", str);
    findFrequency(str);
    return 0;
}
