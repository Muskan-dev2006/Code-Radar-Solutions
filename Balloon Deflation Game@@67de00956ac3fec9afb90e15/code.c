// Your code here...
#include <stdio.h>

void deflateBalloons(int air[], int n) {
    while (1) {
        int min = 1e9;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < min) {
                    min = air[i];
                }
            }
        }

        if (count == 0) break;

    
        printf("%d\n", count);

        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= min;
            }
        }
    }
}

