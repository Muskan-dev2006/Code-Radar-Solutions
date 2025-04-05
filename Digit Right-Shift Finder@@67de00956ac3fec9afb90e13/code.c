// Your code here...
#include <stdio.h>
#include <string.h>


int shiftRight(int n) {
    char str[20];
    sprintf(str, "%d", n); 
    int len = strlen(str);

   
    if (len == 1)
        return n;

   
    char shifted[20];
    shifted[0] = str[len - 1]; 
    for (int i = 0; i < len - 1; i++) {
        shifted[i + 1] = str[i];
    }
    shifted[len] = '\0'; 

    int shiftedNum;
    sscanf(shifted, "%d", &shiftedNum); 
    return shiftedNum;
}

