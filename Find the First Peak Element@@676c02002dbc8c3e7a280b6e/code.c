// Your code here...
#include <stdio.h>
int findpeak(int arr[],int n){
    int allsame = 1;
    for(int i=0; i<n;i++){
        if(arr[i]!=arr[i+1]){
            allsame = 0;
            break;
        }
    }
    if(allsame){
        return -1;
    }
    if(n==1){
        return arr[0];
    }
    if(n==2){
        if(arr[0]<arr[1]){
            return arr[1];
        }
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            return arr[i];
        }
    }
    if(arr[n-1]>arr[n-2]){
        return arr[n-1];
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peak_element = findpeak(arr,n);
    printf("%d",peak_element);
}