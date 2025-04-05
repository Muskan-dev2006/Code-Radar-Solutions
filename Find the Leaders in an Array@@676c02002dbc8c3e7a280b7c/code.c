// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int leaders[n]; 
    int count = 0;
    int maxFromRight = arr[n - 1];
    
    leaders[count++] = maxFromRight;

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = arr[i];
        }
    }
    for(int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
