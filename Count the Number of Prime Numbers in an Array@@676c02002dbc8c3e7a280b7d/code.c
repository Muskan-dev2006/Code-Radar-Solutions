// Your code here...
#include <stdio.h>
int primenum(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        int flag = 1;
        if (arr[i]==0 || arr[i]==1){
            flag = 0;
        }
        for(int j=2;j*j<=arr[i];j++){
            if(arr[i]%j==0){
                flag=0;
                break;
            }
        }
        if (flag==1){
            count +=1;
        }
        

    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",primenum(arr,n));
}