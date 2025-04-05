// Your code here...
#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;
    int max = arr[0], min = arr[n - 1];
    for (int i = 1; i < n; i++) {
        if (arr[i] < max) {
            end = i;
        } else {
            max = arr[i];
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > min) {
            start = i;
        } else {
            min = arr[i];
        }
    }

    if (start == -1) return 0; 
    return end - start + 1;
}

