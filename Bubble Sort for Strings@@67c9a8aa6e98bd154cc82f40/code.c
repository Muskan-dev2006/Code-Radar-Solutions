// Your code here...
#include <stdio.h>
#include <string.h>
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}
void bubbleSort(char arr[][100],int n){
    for(int i=0; i<n-1;i++){
        char c[100];
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                strcpy(c, arr[j]);
                strcpy(arr[j] ,arr[j+1]);
                strcpy(arr[j+1] , c);
            }
        }
    }
}