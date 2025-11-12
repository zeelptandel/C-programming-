#include <stdio.h>
   int main() {
    int m1, m2, m3, total;
    float avg;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    avg = total / 3.0;
    printf("Total marks: %d", total);
    printf("\nAverage marks: %.2f", avg);
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Grade: Fail");
    }
    else if (avg >= 70) {
        printf("\nGrade: Distinction");
    }
    else if (avg >= 60) {
        printf("\nGrade: First class");
    }
    else if (avg >= 50) {
        printf("\nGrade: Second class");
    }
    else if (avg >= 35) {
        printf("\nGrade: Third class");
    }
    else {
        printf("\nGrade: Fail");
    }
    return 0;
}
