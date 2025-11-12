#include <stdio.h>

int main() {
    printf("The first 10 even numbers are:
");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", 2 * i);
    }
    printf("
");
    return 0;
}
