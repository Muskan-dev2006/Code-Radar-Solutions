// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int count = 0;
    for(int i=0;i<strlen(str);i++ ){
        for(int j=0;j<n;j++){
            if(str[i]==str[j]){
                count +=1;
            }
        }
        printf("%s: %d",str[i],count);
    }
}