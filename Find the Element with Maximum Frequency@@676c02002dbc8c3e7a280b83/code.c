// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int bigcount = 0;
    int maxnum;
    for(int i=0; i<n;i++){
        int count=0;
        for(int j=0;j<n;j++ ){
            if (arr[i]==arr[j]){
                count +=1;
            }
        }
        if(count > bigcount){
            maxnum = arr[i];
        }
    }
    printf("%d",maxnum);
}