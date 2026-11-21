#include <stdio.h>

int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return x * power(x, n - 1);
    }
}

int main() {
    int a, n;

    printf("Enter base: ");
    scanf("%d", &a);

    printf("Enter exponent: ");
    scanf("%d", &n);

    printf("Power = %d", power(a, n));

    return 0;
}