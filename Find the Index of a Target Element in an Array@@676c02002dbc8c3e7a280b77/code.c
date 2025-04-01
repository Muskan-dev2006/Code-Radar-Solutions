// Your code here...
#include <stdio.h>
int main(){
    int n;
    int flag=0;
    int value=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0; i<n;i++){
        if(target==arr[i]){
            value = i;
            flag=1;
            break;
        }
    }
    if(flag){
        printf("%d",value);
    }
    else{
        printf("-1");
    }
}