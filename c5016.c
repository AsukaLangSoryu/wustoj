#include <stdio.h>
long long gcd(long long a, long long b) 
{
    return b == 0 ? a : gcd(b, a % b);
}
void simplifyFraction(long long *numerator, long long *denominator) {
    long long common = gcd(*numerator, *denominator);
    *numerator /= common;
    *denominator /= common;
}

int main() {
    int N;
    scanf("%d", &N);

    long long sum_numerator = 0, sum_denominator = 1;
    long long numerator, denominator;

    for (int i = 0; i < N; ++i) {
        scanf("%lld/%lld", &numerator, &denominator);
        sum_numerator = sum_numerator * denominator + numerator * sum_denominator;
        sum_denominator = sum_denominator * denominator;
        simplifyFraction(&sum_numerator, &sum_denominator);
    }
    if (sum_denominator < 0) {
        sum_numerator = -sum_numerator;
        sum_denominator = -sum_denominator;
    }
    long long integer_part = sum_numerator / sum_denominator;
    sum_numerator %= sum_denominator;
    if (integer_part != 0) {
        printf("%lld", integer_part);
        if (sum_numerator != 0) {
            printf(" %lld/%lld", sum_numerator, sum_denominator);
        }
    } else if (sum_numerator != 0) {
        printf("%lld/%lld", sum_numerator, sum_denominator);
    } else {
        printf("0");
    }

    return 0;
}
