// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++){
        int s=0;
        int j = arr[i];
        while(j>0){
            int dig = j%10;
            s = s+dig;
            j = j/10;
        }
        arr[i] = s;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}