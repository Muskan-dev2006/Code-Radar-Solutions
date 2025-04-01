// r code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found = 0;
    for(int i=0; i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[j]);
                found = 1;
                break;
            }
        }
        if(found){
            break;
        }

    }
}