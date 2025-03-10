// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char ch;
    scanf("%c",&ch);
    for(int i=0; i<strlen(str);i++){
        if(str[i]=='a'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='e'){
            str[i]=ch;
        }
    }
    printf("%s",str);
}