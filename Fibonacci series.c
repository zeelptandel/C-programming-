#include <stdio.h>

int main() {
    int n, a = 1, b = 1, next;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
