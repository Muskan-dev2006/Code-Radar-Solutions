// Your code here...
#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    int isAllSame = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            isAllSame = 0;
            break;
        }
    }
    if (isAllSame) return -1; 
    if (n == 1) return arr[0]; 

    if (arr[0] >= arr[1]) return arr[0]; 
    if(n==2){
        if(arr[1]>=arr[0]){
            return arr[1];
        }
    }

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i]; 
        }
    }
    if (arr[n-1]>arr[n-2]){
        return arr[n-1];
    }

    return -1; 
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", findFirstPeak(arr, n));

    return 0;
}
