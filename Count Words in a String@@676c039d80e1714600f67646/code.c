// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    scanf("%s",str);
    int len = strlen(str);
    int count = 1;
    for(int i=0; i<len;i++){
        if(str[i]=" "){
            count +=1;
        }
    }
    printf("%d",count);

}