// Your code here...
#include <stdio.h>

int findKthMissing(int arr[], int n, int k) {
    int missing = 0;
    int current = 1;
    int index = 0;

    while (missing < k) {
        if (index < n && arr[index] == current) {
            index++;
        } else {
            missing++;
            if (missing == k)
                return current;
        }
        current++;
    }
    return -1; 
}


