// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n; i++){
        int count = 0;
        int alreadyCounted = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted) continue; 
        for(int j=0; j<n;j++){
            if(arr[i]==arr[j]){
                count +=1;
            }
        }
        printf("%d %d\n",arr[i],count);
    }
}