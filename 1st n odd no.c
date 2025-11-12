#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d odd numbers are:
", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }
    printf("
");
    return 0;
}
