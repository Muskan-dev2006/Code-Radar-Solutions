// Your code here...
#include <stdio.h>
#include <string.h>
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}
void bubbleSort(char arr[],int n){
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                char c = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = c;
            }
        }
    }
}