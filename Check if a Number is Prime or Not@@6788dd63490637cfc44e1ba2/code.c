// Your code here...
#include <stdio.h>
int main(){
    int n,i,flag=1;
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("Not Prime");
    }
    else{
        for(int i=2; i<n;i++){
            if (n%i==0){
                flag=0;
                break;
            }
            else{
                flag = 1;
            }
        }
    }
    if(flag==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}