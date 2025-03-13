// Your code here...
#include <stdio.h>
#include <string.h>
void printArray(char arr[],int n){
    for(int i=0; i<n;i++){
        printf("%c ",arr[i]);
    }
}
void selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        char temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}