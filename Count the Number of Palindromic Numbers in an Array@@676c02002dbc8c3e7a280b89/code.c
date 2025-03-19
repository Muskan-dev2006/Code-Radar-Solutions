// Your code here...
#include <stdio.h>
int palindrome(int arr[],int n){
    int rev =0;
    int count = 0;
    for(int i=0; i<n; i++){
        int num = arr[i];
        while(num>0){
            int dig = num%10;
            rev = rev*10 + dig;
            num = num/10;
        }
        if(rev==arr[i]){
            count +=1;
        }
        rev = 0;

    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    int palindromecount = palindrome(arr,n);
    printf("%d",palindromecount);
}