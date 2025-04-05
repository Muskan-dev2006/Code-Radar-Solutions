// Your code here...
#include <stdio.h>
#include <ctype.h>

void caesarEncrypt(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            text[i] = (ch - base + shift) % 26 + base;
        }
    }
}