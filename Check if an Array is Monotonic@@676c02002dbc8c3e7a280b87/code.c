// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if (arr[i-1]<=arr[i] && arr[i]<=arr[i+1]){
            count +=1;
        }

    }
    if(count == n-1){
        printf("YES");
    }
    else{
        printf("NO")''
    }
}