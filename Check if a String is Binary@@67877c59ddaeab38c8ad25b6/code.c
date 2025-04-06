// Your code here...
#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    int i = 0, isBinary = 1;

    while (str[i] != '\0') {
        if (str[i] != '0' && str[i] != '1') {
            isBinary = 0;
            break;
        }
        i++;
    }

    if (isBinary)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
