// Your code here...
#include <stdio.h>
int kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        return (x1 == x2) ? 0 : -1;
    }

    int numerator = x2 - x1;
    int denominator = v1 - v2;

    if ((numerator * denominator < 0) || (numerator % denominator != 0)) {
        return -1;
    }

    return numerator / denominator;
}

