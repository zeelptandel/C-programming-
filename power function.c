#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int a, b;
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);
    int calculated_power = power(a, b);

    printf("%d raised to the power of %d is: %d\n", a, b, calculated_power);

    return 0;
}
