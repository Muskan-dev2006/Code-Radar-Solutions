// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin); 
    scanf("%s",str);
    printf("%d",strlen(str));
}