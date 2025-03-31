// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++){
        if(n==1){
            printf("sorted");
            return 0;
        }
        else if(arr[n]<arr[n-1]){
            printf("not sorted");
            return 0;
        }
    }
    printf("sorted");
}