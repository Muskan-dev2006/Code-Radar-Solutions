// Your code here...
#include <stdio.h>
#include <string.h>
int checkpalindrome(char str, int i , int j){
    while(i<=j){
        if(str[i] == str[j]){
            i++;
            j--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[100];
    scanf("%s",&str);
    int i = 0;
    int j = strlen(str) - 1;
    int palindrome = checkpalindrome(str,i,j);
    if(palindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
}