// Your code here...
#include <stdio.h>
int main(){
    long long n;
    scanf("%d",&n);
    int  rem, i =1;
    long long result = 0;
    while(n!=0){
        rem = n%2;
        n/=2;
        result += rem*i;
        i*=10;
    }
    printf("%lld",result);
}