// Your code here...
#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int isAllSame = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            isAllSame = 0;
            break;
        }
    }
    
    if (isAllSame) {
        printf("%d",-1);

    }
    else{
    if(n>1){
    for(int i=0; i<n-1; i++){
        int c;
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
        }
    }
    printf("%d",arr[n-2]);
    }
    else{
        printf("%d",-1);
    }
    }

}