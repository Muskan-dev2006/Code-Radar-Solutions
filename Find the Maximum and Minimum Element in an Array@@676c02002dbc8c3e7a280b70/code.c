// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&arr[i]);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d %d",min,max);
}