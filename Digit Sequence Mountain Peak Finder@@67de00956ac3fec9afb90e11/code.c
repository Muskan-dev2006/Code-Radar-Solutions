// Your code here...
#include <stdio.h>
#include <string.h>
int mountainPeak(int N) {
    char digits[20];
    sprintf(digits, "%d", N);
    int len = strlen(digits);

    if (len < 3)
        return -1;  

    int i = 1;


    while (i < len && digits[i] > digits[i - 1]) {
        i++;
    }

    if (i == 1 || i == len)
        return -1;
    while (i < len && digits[i] < digits[i - 1]) {
        i++;
    }

    if (i == len)
        return digits[i - (len - i + 1)] - '0'; 

    return -1;
}
