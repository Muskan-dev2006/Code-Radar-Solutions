// Your code here...
#include <stdio.h>

int gateOpen(int threshold, int entryTimes[], int n) {
    int onTimeCount = 0;

    for (int i = 0; i < n; i++) {
        if (entryTimes[i] <= 0) {
            onTimeCount++;
        }
    }

    if (onTimeCount >= threshold)
        return 1; 
    else
        return 0;
}

