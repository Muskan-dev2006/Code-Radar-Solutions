// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int compare(const void *a, const void *b) {
        return abs(*(int*)a) - abs(*(int*)b);
    }
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);

 
    int p = arr[n-2]*arr[n-1];
    printf("%d",p);
}