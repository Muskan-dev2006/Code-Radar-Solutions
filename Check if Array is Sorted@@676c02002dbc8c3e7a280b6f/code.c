// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("Sorted");
        return 0;
    }
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            printf("Not sorted");
            return 0;
        }
    }
    printf("Sorted");
}