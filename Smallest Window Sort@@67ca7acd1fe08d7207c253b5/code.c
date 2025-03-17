// Your code here...
#include <math.h>
#include <limits.h>

int findUnsortedSubarray(int arr[],int n){
    int Min = INT_MAX;
    int Max = INT_MIN;
    if(n==1){
        return 0;
    }
    for(int i=0; i<n;i++){
        if(i==0){
            Min = fmin(Min,arr[i]);
            Max = fmax(Max,arr[i]);
        }
        if(i==n-1){
            Min = min(Min,arr[i]);
            Max = max(Max,arr[i]);
        }
        else{
            if(arr[i]>arr[i+1]|| arr[i]<arr[i-1]){
                Min = min(Min,arr[i]);
                Max = max(Max,arr[i]);
            }
        }
    }
    int i,j;
    for(int i=0 ;i<n&&arr[i]<=Min;i++);
    for(int j=n-1;j>=0 &&arr[i]>=Max;j--);
    return j-i+1;
}