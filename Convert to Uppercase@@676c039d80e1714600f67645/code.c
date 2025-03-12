// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int index = 0;
    char str1[100]="";
    for(int i=0; i<strlen(str);i++){
        char ch = toupper(str[i]);
        if (ch != '\n') {  
            str1[index++] = ch;
        }
        str1[index] = '\0';
    }
    printf("%s",str1);
}