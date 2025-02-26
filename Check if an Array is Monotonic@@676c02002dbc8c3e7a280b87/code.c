// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count = 0 ;
    int count_2=0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if (arr[i-1]<=arr[i] && arr[i]<=arr[i+1]){
            count +=1;
        }
        else if(arr[i-1]>=arr[i] && arr[i]>=arr[i+1]){
            count_2 += 1;
        }

    }
    if(n==1){
        printf("YES");
    }
    else if(count == n-2){
        printf("YES");
    }
    else if(count_2 == n-2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}