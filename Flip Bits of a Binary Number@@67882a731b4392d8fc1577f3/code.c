// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);
    for (int i = 31; i >= 0; i--) {  
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    unsigned int flippedNum = ~num;

    for (int i = 31; i >= 0; i--) {  
        printf("%d", (flippedNum >> i) & 1);
    }
    printf("\n");

    printf("%u\n", flippedNum);

    return 0;
}
