// Your code here...
#include <stdio.h>

int totalLikes(int n) {
    int shared = 5;
    int liked = 0;
    int totalLiked = 0;

    for (int i = 0; i < n; i++) {
        liked = shared / 2;
        totalLiked += liked;
        shared = liked * 3;
    }

    return totalLiked;
}
