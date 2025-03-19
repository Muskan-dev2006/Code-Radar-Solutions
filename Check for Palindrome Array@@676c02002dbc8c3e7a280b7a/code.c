// Your code here...
#include <stdio.h>
int checkpalindrome(int arr[],int i, int j){
    while(i<=j){
        if(arr[i]!=arr[j]){
            return 0;
        }
        else{
            i++;
            j--;
        }
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    int j= n-1;
    int palindrome = checkpalindrome(arr,i,j);
    if(palindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
}