// Your code here...
#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i, lowmarks = 0;
    scanf("%d", &n);
    struct Student students[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (students[i].marks < students[lowmarks].marks) {
            lowmarks = i;
        }
    }

    printf("Student with Minimum Marks: ");
    printf("Roll Number: %d", students[lowmarks].rollNumber);
    printf(", Name: %s", students[lowmarks].name);
    printf(", Marks: %.2f", students[lowmarks].marks);

    return 0;
}