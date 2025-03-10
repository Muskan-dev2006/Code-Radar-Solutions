// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    fgets(str1, sizeof(str1), stdin);
    char str2[100];
    fgets(str2, sizeof(str2), stdin);
    strcat(str1,str2);
    printf("%s\n",str1);
}