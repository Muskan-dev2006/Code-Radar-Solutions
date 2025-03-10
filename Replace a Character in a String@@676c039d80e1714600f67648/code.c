// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char a;
    scanf(" %c",&a);
    char ch;
    scanf(" %c",&ch);
    int n = strlen(str);
    for(int i=0; i<n; i++){
        if(str[i] == a){
            str[i] = ch;
        }
    }
    printf("%s",str);

}