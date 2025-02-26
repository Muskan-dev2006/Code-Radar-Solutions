// Your code here...
#include <stdio.h>
int printArray(int arr, int n){
    for(int i=0; i<n;i++){
        printf("%d",arr[i]);
    }
}
int bubbleSort(int arr,int n){
    int c;
    for(int i=0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                c = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = c;
            }
        }
    }
}