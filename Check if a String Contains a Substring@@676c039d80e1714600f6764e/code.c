// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], substr[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';

    if (strstr(str, substr) != NULL) {
        printf("Yes.\n");
    } else {
        printf("No.\n");
    }

    return 0;
}
