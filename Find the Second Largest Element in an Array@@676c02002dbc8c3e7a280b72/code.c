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
        printf("%d",-1);
        return 0;
    }
    int Allsame = 1;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
            Allsame = 0;
            break;
        }
        int c;
        for(int j=1;j<n-i-1;j++){
            if(arr[i]>arr[j]){
                c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
        }
    }
    if(Allsame){
        printf("%d",-1);
    }
    else{
        printf("%d",arr[n-2]);
    }
}