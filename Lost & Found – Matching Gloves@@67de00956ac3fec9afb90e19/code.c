// Your code here...
#include <stdio.h>

int countGlovePairs(int gloves[], int n) {
    int count[1001] = {0}; 
    int pairs = 0;

    for (int i = 0; i < n; i++) {
        count[gloves[i]]++;
    }

    for (int i = 0; i <= 1000; i++) {
        pairs += count[i] / 2;
    }

    return pairs;
}

