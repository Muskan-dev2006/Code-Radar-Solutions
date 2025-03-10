// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char ch;
    scanf(" %c",&ch);
    for(int i=0; i<strlen(str);i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            str[i]=ch;
        }
    }
    printf("%s",str);
}