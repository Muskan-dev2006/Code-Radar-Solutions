// Your code here...
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int checkpalindrome(char str[], int m , int j){
    while(m<=j){
        if (str[m] != str[j]) {
            return 0;
        }
        m++;
        j--;
    }
    return 1;
}
void removespaces(char str[]) {
    int n = strlen(str);
    int index = 0;

    for(int i = 0; i < n; i++) {
        if(str[i] != ' ') {
            str[index++] = tolower(str[i]);
        }
    }
    str[index] = '\0';  
}
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    removespaces(str);
    int n = strlen(str);
    int m=0;
    int j = n-1;
    int palindrome = checkpalindrome(str,m,j);
    if (palindrome){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}