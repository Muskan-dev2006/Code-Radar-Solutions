// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int min1 = 0;
    int min2 = 0;
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            int diff = abs(arr[i]-arr[j]);
            if((diff <  || (diff == min && (arr[i] > arr[j] ? arr[j] : arr[i]) < min1))){
                min = diff;
                min1 = arr[i];
                min2 = arr[j];
            }
        }
    }
   if(min1>minb) {
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }
    printf("%d %d",min1,min2);
}