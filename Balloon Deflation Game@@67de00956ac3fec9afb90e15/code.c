// Your code here...
#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, n); 

    int prev = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > prev) {
            printf("%d\n", n - i);
            prev = a[i];
        }
    }

    return 0;
}
