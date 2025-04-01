// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int v[n];
    for(int i=0;i<k;i++){
        v[i] = arr[n-k+i];
    }
    for(int i=k;i<n;i++){
        if(i>k){
            v[i] = arr[i-k];
        }
        else if(k>i){
            v[i] = arr[k-i];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
}