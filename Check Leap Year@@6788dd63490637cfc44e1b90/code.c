// Your code here...
#include <stdio.h>
int main(){
int year;
scanf("%d",&year);
if(year%4==0 && year%100!=0){
    printf("Leap year");
}
else {
    printf("not a leap year");
}
return 0;
}