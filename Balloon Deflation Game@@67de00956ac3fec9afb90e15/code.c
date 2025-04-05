// Your code here...
#include <stdio.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        int min = 1e9;
        int count = 0;

        // Count balloons with air and find the smallest non-zero air
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < min) {
                    min = air[i];
                }
            }
        }

        if (count == 0) break;

        // Print the count BEFORE deflating
        printf("%d\n", count);

        // Deflate each balloon with air
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
            }
        }
    }
}

