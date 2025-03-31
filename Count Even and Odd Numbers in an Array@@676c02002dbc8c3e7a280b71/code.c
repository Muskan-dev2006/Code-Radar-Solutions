// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int evencount = 0;
    int oddcount = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++){
        if(arr[i]%2==0){
            evencount +=1;
        }
        else{
            oddcount +=1;
        }
    }
    printf("%d %d",evencount,oddcount);
}