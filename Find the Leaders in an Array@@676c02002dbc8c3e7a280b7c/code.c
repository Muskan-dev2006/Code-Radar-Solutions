// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], leaders[n], count = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_from_right = arr[n - 1];
    leaders[count++] = max_from_right;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            max_from_right = arr[i];
            leaders[count++] = arr[i];
        }
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
