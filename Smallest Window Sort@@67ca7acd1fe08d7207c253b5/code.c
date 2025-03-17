// Your code here...
#include <stdio.h>
#include <math.h>
#include <limits.h>

int findUnsortedSubarray(int arr[],int n){
    int myMin(int a, int b) {
        return (a < b) ? a : b;
    }

    int myMax(int a, int b) {
        return (a > b) ? a : b;
    }

    int Min = INT_MAX;
    int Max = INT_MIN;
    if(n==1){
        return 0;
    }
    for(int i=1; i<n-1;i++){

        if(arr[i]>arr[i+1]|| arr[i]<arr[i-1]){
            Min = myMin(Min,arr[i]);
            Max = myMax(Max,arr[i]);
        }
    }
    if (Min == INT_MAX) {
        return 0;
    }
    int i,j;
    for( i=0 ;i<n&&arr[i]<=Min;i++);
    for( j=n-1;j>=0 &&arr[i]>=Max;j--);
    return j-i+1;
}