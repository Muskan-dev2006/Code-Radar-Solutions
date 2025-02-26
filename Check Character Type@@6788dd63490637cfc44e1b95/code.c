// Your code here...
#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if(ch >= 'A' && ch<='z'){
        if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(ch >='1' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}