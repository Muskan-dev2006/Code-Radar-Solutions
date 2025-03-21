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
    for(int i=0; i<n;i++){
        v[i] = arr[n-i-1];
    }
    for(int i=k; i<n;i++){
        v[i] = arr[i-k];
    }
    printf("%d\n",v[i]);
}