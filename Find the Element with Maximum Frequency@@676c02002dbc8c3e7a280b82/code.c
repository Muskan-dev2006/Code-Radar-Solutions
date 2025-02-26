// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int value = 0;
    int bigcount = 0;
    for(int i=0; i<n ; i++){
        int count = 1;
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                count +=1;
            }
        }
        if(count>bigcount){
            bigcount = count ;
            value = arr[i];
        }
    }
    printf("%d",value);
}