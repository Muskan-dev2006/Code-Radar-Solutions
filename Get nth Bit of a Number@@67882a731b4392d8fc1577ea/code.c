// Your code here...
#include <stdio.h>
int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int t= (num >> n) & 1;
    printf("%d",t);
}