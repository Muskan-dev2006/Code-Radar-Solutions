// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char ch;
    scanf(" %c",&ch);
    int count = 0;
    for(int i=0; i<strlen(str);i++){
        if(str[i]==ch){
            count +=1;
        }
    }
    printf("%d",count);
}