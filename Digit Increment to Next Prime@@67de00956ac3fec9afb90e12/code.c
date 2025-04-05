// Your code here...
#include <stdio.h>

int nextPrimeDigit(int digit) {
    if (digit < 2) return 2;
    else if (digit < 3) return 3;
    else if (digit < 5) return 5;
    else if (digit < 7) return 7;
    else return 2;  
}

int incrementToPrimeDigits(int n) {
    if(n==0){
        return 2;
    }
    int digits[20];
    int len = 0;

    while (n > 0) {
        digits[len++] = nextPrimeDigit(n % 10);
        n /= 10;
    }


    int result = 0;
    for (int i = len - 1; i >= 0; i--) {
        result = result * 10 + digits[i];
    }

    return result;
}
