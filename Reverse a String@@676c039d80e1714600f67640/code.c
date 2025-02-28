// Your code here...
#include <stdio.h>
#include <strings.h>

int main(){
    char str[100];
    scanf("%s",&str);
    int i=0;
    int j = strlen(str)-1;
    while(i<=j){
        int c;
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    printf("%s",str);
}