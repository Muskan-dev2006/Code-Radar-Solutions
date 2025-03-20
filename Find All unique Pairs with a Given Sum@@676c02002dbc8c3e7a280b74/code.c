
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    
    qsort(arr, n, sizeof(int), compare);

    int left = 0, right = n - 1;

    
    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("%d %d\n", arr[left], arr[right]);

            
            while (left < right && arr[left] == arr[left + 1]) left++;
            while (left < right && arr[right] == arr[right - 1]) right--;

            left++;
            right--;
        } else if (sum < target) {
            left++;  
        } else {
            right--;
        }
    }

    return 0;
}
