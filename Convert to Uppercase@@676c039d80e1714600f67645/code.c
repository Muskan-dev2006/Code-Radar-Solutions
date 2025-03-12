// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    char str1[100]="";
    for(int i=0; i<strlen(str);i++){
        char ch = tolower(str[i]);
        strcat(str1, &ch); 
    }
    printf("%s",str1);
}