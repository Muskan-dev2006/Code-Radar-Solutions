// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    for(int i=0; i<n;i++){
        if(str[i]==' '){
            for (int j = i; j < n; j++) {
                str[j] = str[j + 1];
            }
            n--; 
            i--;
        }
    }
    printf("%s",str);
}