// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum[n];
    for(int i=0;i<n;i++){
        if(i==0){
            arr[i]=arr[i];
        }
        else if(i>0){
            arr[i] = arr[i] + arr[i-1];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}