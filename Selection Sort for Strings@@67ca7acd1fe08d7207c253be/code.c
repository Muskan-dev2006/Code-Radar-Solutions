// Your code here...
#include <stdio.h>
#include <string.h>
void printArray(char arr[][100],int n){
    for(int i=0; i<n;i++){
        printf("%s\n",arr[i]);
    }
}
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        char temp[100];
        int minindex = i;
        for(int j=i;j<n;j++){
            if(strcmp(arr[j],arr[minindex])<0){
                minindex = j;
            }
        }
        strcpy( temp, arr[i]);
        strcpy(arr[i] ,arr[minindex]);
        strcpy(arr[minindex] , temp);
    }
}