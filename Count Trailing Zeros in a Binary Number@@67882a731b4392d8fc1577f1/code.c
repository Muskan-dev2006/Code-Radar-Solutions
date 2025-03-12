// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
     if (num == 0) {
        printf("%d",32);
     } 

    int count = 0;
    while ((num & 1) == 0) {
        count++;
        num >>= 1; 
    }
    printf("%d",count);
}