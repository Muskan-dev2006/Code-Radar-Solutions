// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int t= num & -num;
    printf("%d",t);
}