// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int scores[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int max = scores[0];
    int min = scores[0];
    int max_breaks = 0;
    int min_breaks = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
            max_breaks++;
        } else if (scores[i] < min) {
            min = scores[i];
            min_breaks++;
        }
    }

    printf("%d %d\n", max_breaks, min_breaks);

    return 0;
}
