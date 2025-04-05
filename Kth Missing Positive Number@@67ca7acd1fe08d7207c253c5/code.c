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

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    int result = findKthMissing(arr, n, k);
    printf("%d\n", result);

    return 0;
}
