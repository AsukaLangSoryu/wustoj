#include <stdio.h>

int main() {
    double fahrenheit, celsius;
    scanf("%lf", &fahrenheit);
    celsius = 5.0 / 9.0 * (fahrenheit - 32);

    printf("%.6f\n", celsius);

    return 0;
}
