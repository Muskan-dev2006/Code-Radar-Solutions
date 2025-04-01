// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1= -1000000 , max2 = -1000000;
    int min1 = 1000000 , min2 = 1000000;
    for(int i=0; i<n;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1= arr[i];
        }else if(arr[i]>max2){
            max2 = arr[i];
        }
        if(arr[i]<min1){
            min2 = min1;
            min1=arr[i];
        }
        else if(arr[i]<min2){
            min2 = arr[i];
        }
        int maxproduct = max1*max2;
        int minproduct = min1*min2;
        int result = (maxproduct > minproduct) ? maxproduct : minproduct;
    }
    printf("%d",result);
}