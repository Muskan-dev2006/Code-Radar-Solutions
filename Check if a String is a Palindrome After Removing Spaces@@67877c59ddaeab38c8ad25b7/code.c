// Your code here...
#include<stdio.h>
#include<string.h>
int checkpalindrome(char str[], int m , int j){
    while(m<=j){
        if(str[m] == str[j]){
            m++;
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
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    int m=0;
    int j = n-1;
    for(int i=0; i<n;i++){
        if(str[i]==' '){
            for (int j = i; j < n; j++) {
                str[j] = str[j + 1];
            }
            n--; 
            i--;
        }
    }
    int palindrome = checkpalindrome(str,m,j)
    if (palindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}