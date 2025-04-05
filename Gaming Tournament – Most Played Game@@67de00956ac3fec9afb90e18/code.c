// Your code here...
#include <stdio.h>

int mostPlayedGame(int games[], int n) {
    int freq[10001] = {0}; 


    for (int i = 0; i < n; i++) {
        freq[games[i]]++;
    }

    int maxCount = 0;
    int mostPlayed = -1;
    for (int i = 0; i < 10001; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            mostPlayed = i;
        }
    }

    return mostPlayed;
}

