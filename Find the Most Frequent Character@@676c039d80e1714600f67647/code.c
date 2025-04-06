#include <stdio.h>
#include <string.h>

char mostFrequentChar(char *str, int *freqOut) {
    int freq[256] = {0}; 
    int maxFreq = 0;
    char mostFreqChar;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch != ' ') {  
            freq[ch]++;
            if (freq[ch] > maxFreq || (freq[ch] == maxFreq && ch < mostFreqChar)) {
                maxFreq = freq[ch];
                mostFreqChar = ch;
            }
        }
    }

    *freqOut = maxFreq;
    return mostFreqChar;
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int freq;
    char result = mostFrequentChar(str, &freq);

    printf("%c\n", result);

    return 0;
}
