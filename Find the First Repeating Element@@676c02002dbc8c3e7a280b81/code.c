// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j = 1; j<n;j++){
            if(arr[i]==arr[j]){
                count +=1;
            }
        }
        if (count > 1){
            printf("%d",arr[i]);
            break;
        }
    }
    if(count == 1){
        printf("%d",-1);
    }
}