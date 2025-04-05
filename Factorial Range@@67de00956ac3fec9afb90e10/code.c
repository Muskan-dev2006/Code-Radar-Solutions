// Your code here...
#include <stdio.h>
int factorial(int n){
    if(n==0 || n==1){
      return 1;
    }
    else{
      return n*factorial(n-1);
    }
}
void factorialRange(int start, int end){
    if(start>end || start<0){
      printf("Invalid range");
    }
    else{
      for(int i= start; i<=end; i++){
        printf("%d\n",factorial(i));
      }
    }
}


