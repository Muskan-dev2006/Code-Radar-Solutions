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
            int diff = arr[i]-arr[j];
            if(diff<min){
                min = diff;
                min1 = arr[i];
                min2 = arr[j];
            }
        }
    }
    printf("%d %d",min1,min2);
}