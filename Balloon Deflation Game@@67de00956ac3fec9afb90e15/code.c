// Your code here...
#include <stdio.h>

void deflateBalloons(int air[], int n) {
    int remaining = n;

    while (1) {
        int min = 1e9;
        int count = 0;

        // Find smallest non-zero air value
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < min) {
                min = air[i];
            }
        }

        // If all are flat
        if (min == 1e9) break;

        // Count balloons that are still > 0
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) count++;
        }

        printf("%d\n", count);

        // Subtract min from all non-zero balloons
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
            }
        }
    }
}

