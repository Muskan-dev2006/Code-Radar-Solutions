// Your code here...
#include <stdio.h>
int main(){
int year;
scanf("%d",&year);
if(year%400==0 || year%4==0){
    printf("Leap year");
}
else {
    printf("Not a leap year");
}
return 0;
}