// Your code here...
#include <stdio.h>
#include <string.h>

#define MAX 256

void findFrequency(char str[]) {
    int freq[MAX] = {0};
    int printed[MAX] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }


    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!printed[ch] && ch != '\n') {
            printf("%c: %d\n", ch, freq[ch]);
            printed[ch] = 1;
        }
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    findFrequency(str);
    return 0;
}
