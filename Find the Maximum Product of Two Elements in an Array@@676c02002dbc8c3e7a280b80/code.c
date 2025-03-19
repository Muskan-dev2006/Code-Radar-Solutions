// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1;i++){
        int c;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                c=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
        }
    }
    int p = arr[n-2]*arr[n-1];
    printf("%d",p);
}