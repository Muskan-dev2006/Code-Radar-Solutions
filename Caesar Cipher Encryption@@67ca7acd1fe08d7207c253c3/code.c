// Your code here...
#include <stdio.h>
#include <ctype.h>

void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    while (message[i] != '\0') {
        char ch = message[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            encrypted[i] = (ch - base + shift) % 26 + base;
        } else {
            encrypted[i] = ch;  
        }
        i++;
    }
    encrypted[i] = '\0';  
}

